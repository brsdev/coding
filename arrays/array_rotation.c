/*
 * Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
 */
#include <stdio.h>

void print(int a[], int s)
{
	int i;

	for(i = 0; i < s; i++)
		printf("%d ", a[i]);

	printf("\n");
	return;
}

int rotate(int a[], int d, int s)
{
	int temp, i, j;

	if(d >= s)
		return -1;
	for(j= 0; j < d; j++)
	{
		temp = a[0];	
		for(i = 0; i < s-1; i++)
			a[i] = a[i+1];

		a[i] = temp;
	}
	return 0;
}

void main(void) 
{
	int ret;
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	printf("Inside main\n");
	printf("size %d\n", sizeof(arr));
	print(arr, 10);
	ret = rotate(arr, 3, 10);
	print(arr, 10);
}
