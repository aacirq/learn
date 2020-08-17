#include <iostream>
#include <stdexcept>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
using std::string;

int main() {
    int i1, i2;
    string rsp;
    do {
        cin >> i1 >> i2;
        try {
            if(i2 == 0) {
                throw runtime_error("equal 0.");
            }
            cout << i1 / i2 << endl;
        } catch(runtime_error err) {
            cout << "error: " << err.what() << endl;
        }
        cout << "Continue? (yes/no): ";
        cin >> rsp;
    } while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}