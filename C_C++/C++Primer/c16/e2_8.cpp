#include <iostream>
#include <vector>
#include <list>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::list;

// 16.2
template<typename T>
int
compare(const T& a, const T& b) {
    if(a < b) return -1;
    if(b < a) return 1;
    return 0;
}

// 16.4
template<typename Iterator, typename T>
Iterator
find(Iterator begin, Iterator end, T value) {
    while(begin != end && *begin != value) ++begin;
    return begin;
}

// 16.5
template<typename T, unsigned size>
std::ostream&
print(std::ostream& os, const T (&arr)[size]) {
    for(unsigned i = 0; i < size; ++i) os << arr[i] << " ";
}

// 16.6
template<typename T, unsigned size>
T*
begin(T (&arr)[size]) {
    return arr;
}

template<typename T, unsigned size>
T*
end(T (&arr)[size]) {
    return arr + size - 1;
}

// 16.7
template<typename T, unsigned size>
constexpr unsigned
get_size(const T (&arr)[size]) {
    return size;
}

int main() {
    // 16.2
    cout << compare(1.2, 2.3) << endl;

    // 16.4
    list<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << *find(vec.begin(), vec.end(), 3) << endl;

    // 16.5
    int a[] = {1, 2, 3, 4, 5, 6};
    print(cout, a) << endl;

    // 16.6
    cout << *begin(a) << " " << *end(a) << endl;

    // 16.7
    cout << get_size(a) << endl;

    return 0;
}