#include <cstddef>
#include <iterator>

using std::begin;
using std::end;

int main() {
    constexpr size_t s = 10;
    int a[s];
    for(int *b = begin(a), *e = end(a); b != e; ++b) *b = 0;
    return 0;
}
