#include <stdio.h>

#include "foo.h"

int main()
{
    int arr[5] = {1, 8, 4, 6, 2};
    int minv = find_min(arr, 5);
    printf("min = %d\n", minv);
    return 0;
}