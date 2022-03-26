#include <stdio.h>
#define SIZE 10

int searching (int array[], int size, int searchingElement);


int main ()
{
	int group[] = {54,6,23,81,3,216,5,8,84,561};
	int enteredNumber;
	printf("Please enter a number.\n");
	scanf("%d", &enteredNumber);
	int value = searching(group, SIZE, enteredNumber);
	if (value == -1)
	{
		printf("Couldn't find the number you're searching for. \n");
	}
	else
	{
		printf("The number you're searching for %d index.\n", value);
	}
	
}

int searching (int array[], int size, int searchingElement){
	for (int i = 0; i < SIZE; ++i)
	{
		if (array[i] == searchingElement)
		{
			return i;
		}
	}
	return -1;
}
