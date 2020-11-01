#include <iostream>

class DebugDelete {
public:
    DebugDelete(std::ostream& o = std::cerr) : os(o) { }
    template <typename T> void operator()(T* p) {
        os << "deleting" << std::endl;
        delete p;
    }
private:
    std::ostream& os;
};