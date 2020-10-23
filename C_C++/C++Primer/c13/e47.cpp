#include <iostream>
#include <vector>

#include "string.h"

using namespace std;

int main() {
    char text[] = "world";

    String s0;
    String s1("hello");
    String s2(s0);
    String s3 = s1;
    String s4(text);

    vector<String> vec;

    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;
    vec.push_back(s0);
    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;
    vec.push_back(s1);
    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;
    vec.push_back(s2);
    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;
    vec.push_back(s3);
    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;
    vec.push_back(s4);
    cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << endl;

    // for(auto str : vec) {
    //     cout << str << endl;
    // }

    return 0;
}