#include <stdio.h>
#include "Sort.h"


int main(void)
{
	int a[len] = { 5,9,7,4,6,3,2,10,8,1 };
	//BubbleSort(a);
	//ShellSort(a);
	//SelectSort(a);
	//InsertSort(a);
	//QuickSort(a);
	//MergeSort(a);
	HeapSort(a);
	PrintArr(a);
	system("pause");
	return 0;
}

