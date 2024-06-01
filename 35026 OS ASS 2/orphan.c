
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

// bubble sort
void bubbleSort(int array[], int size)
{
	for (int step = 0; step < size - 1; ++step)
	{
		for (int i = 0; i < size - step - 1; ++i)
		{
		if (array[i] > array[i + 1])
		{
		int temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
		}
		}
	}
}

void printArray_bubble(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
}

// quick sort
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int array[], int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	for (int j = low; j < high; j++)
{
	if (array[j] <= pivot)
	{
	
	i++;
	swap(&array[i], &array[j]);
	}
}
swap(&array[i + 1], &array[high]);
return (i + 1);
}

void quickSort(int array[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}

void printArray_quick(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void main()
{

	int data[] = {8, 5, 7, 6, 3};
	int size = sizeof(data) / sizeof(data[0]);
	int pid, status;
	pid = fork();
	
	if (pid == 0)
	{
		printf("\n Child's parent process id %d \n", getppid());
		sleep(3);
		printf("\n Welcome to child process \n");
		printf("\n Child process id %d \n", getpid());
		printf("\n Child's parent process id %d \n", getppid());
		
		printf("\n Unsorted Array : ");
		printArray_quick(data, size);
		bubbleSort(data, size);
		
		printf(" Bubble Sort :: Sorted Array in Ascending Order : ");
		printArray_bubble(data, size);
		printf("\n\n");
	}
	else if (pid != 0)
	{
	
		printf("\n Welcome to Parent process \n");
		printf("\n parent process id %d \n", getpid());
		
		printf("\n Unsorted Array : ");
		printArray_quick(data, size);
		quickSort(data, 0, size - 1);
		
		printf(" Quick sort :: Sorted array in ascending order : ");
		printArray_quick(data, size);
	}
}
