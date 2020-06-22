#include <stdio.h>

#include "foo.h"

int main()
{
    int arr[5] = {1, 8, 4, 6, 2};
    int m = find_max(arr, 5);
    printf("max = %d\n", m);
    return 0;
}