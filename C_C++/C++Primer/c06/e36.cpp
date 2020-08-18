#include <string>

using std::string;
using strArr = string[10];

strArr& fun1();
string (&fun2()) [10];
auto fun3() -> string (&)[10];
string strA[10];
decltype(strA) &fun4();

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}

int main() {
    return 0;
}