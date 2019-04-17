#include <stdio.h>

#define SIZE 100

typedef struct {
	int arr[SIZE];
	int size;
	int lenght;
} SL;

int main(int argc, char *argv[])
{
	SL sl;
	sl.size = SIZE;
	printf("%d\n", sl.size);

	return 0;
}
