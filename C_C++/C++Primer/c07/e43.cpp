class NoDefault {
public:
    NoDefault(int i) {}
};

class C {
public:
    C() : nd(NoDefault(0)) {}
    NoDefault nd;
};

int main() {
    C c;
    return 0;
}