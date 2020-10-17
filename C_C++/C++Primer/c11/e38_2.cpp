#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, string> build_map(ifstream& ifstrm) {
    unordered_map<string, string> rules;
    string word, meaning;
    while(ifstrm >> word && getline(ifstrm, meaning)) {
        size_t beg = 0, end = meaning.size() - 1;
        while(beg != end && (meaning[beg] == ' ' || meaning[end] == ' ')) {
            if(meaning[beg] == ' ') ++beg;
            if(meaning[end] == ' ') --end;
        }
        ++end;
        // cout << meaning.substr(beg, end - beg) << "|" << endl;
        rules[word] = meaning.substr(beg, end - beg);
    }
    return rules;
}

void process(const string& rule_file, const string& process_file) {
    ifstream ifstrm(rule_file);
    ifstream pro_strm(process_file);
    auto rules = build_map(ifstrm);
    string line;
    while(getline(pro_strm, line)) {
        istringstream isstrm(line);
        string word;
        while(isstrm >> word) {
            auto item = rules.find(word);
            if(item != rules.end())
                cout << item->second << " ";
            else
                cout << word << " ";
        }
        cout << endl;
    }
}

int main() {
    process("e33_infile1", "e33_infile2");
    return 0;
}