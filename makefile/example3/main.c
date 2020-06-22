#include <stdio.h>

#include "foo.h"
#include "dep.h"

int main()
{
    int arr[5] = {1, 8, 4, 6, 2};
    int maxv = find_max(arr, 5);
    int minv = find_min(arr, 5);
    printf("max = %d\n", maxv);
    printf("min = %d\n", minv);
    return 0;
}