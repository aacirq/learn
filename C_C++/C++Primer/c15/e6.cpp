#include <iostream>

#include "quote.h"
#include "bulk_quote.h"

using namespace std;

int main() {
    Quote q("CSAPP", 100);
    Bulk_quote bq("CSAPP2", 100, 5, 0.5);

    print_total(cout, q, 3);
    print_total(cout, bq, 3);
    print_total(cout, bq, 5);
    return 0;
}