#include <stdio.h>
#include <stdlib.h>

int maxK(int *a, int k, int len);
int main(int argc, char *argv[])
{
    int a[] = {1, 7, 9, 3, 2, 2, 16, 40};
    int k = 2;
    int v = maxK(a, k, (int) sizeof(a) / sizeof(a[0]));

    printf("%d\n", v);
    return 0;
}

/**
 * 比较排序返回第k小的值
 */
int maxK(int *a, int k, int len)
{
    int i;
    int j;
    int temp;
    
    for (i = 0; i < len - 1; i++) {
	for (j = 0; j < len - 1 - i; j++) {
	    if (a[j] > a[j + 1]) {
		temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;
	    }
	}
    }
    
    return a[k - 1];
}
