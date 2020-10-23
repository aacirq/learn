#include <iostream>
#include <vector>
#include <algorithm>

#include "hasptr.h"

using namespace std;

int main() {
    HasPtr h1("ab");
    HasPtr h2("abc");
    HasPtr h3("a");
    HasPtr h4("abcdsa");
    HasPtr h5("abdfsad");
    HasPtr h6("abcdfasd");
    HasPtr h7("abgrfgd");
    HasPtr h8("abwerd");
    HasPtr h9("abfdhsd");
    HasPtr h10("argyed");
    HasPtr h11("abfsda");
    HasPtr h12("ghrfcd");
    HasPtr h13("tuturd");
    HasPtr h14("nhdgd");
    HasPtr h15("4rt6cd");
    HasPtr h16("vbccd");
    HasPtr h17("ythecd");
    HasPtr h18("kjhjghd");
    HasPtr h19("rtgbfd");
    HasPtr h20("utuerd");
    HasPtr h21("jmdfjhdghd");
    HasPtr h22("trewythd");
    HasPtr h23("ukyd");
    vector<HasPtr> hvec = {h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13,
                           h14, h15, h16, h17, h18, h19, h20, h21, h22, h23};
    sort(hvec.begin(), hvec.end());

    for(const auto& h : hvec) {
        h.show();
        cout << endl;
    }
    return 0;
}