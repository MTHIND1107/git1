/*
* FILE :f4.cpp
* PROJECT : FOCUSSED ASSIGNMENT-4
* PROGRAMMER :MANREET THIND (student)
* FIRSTVERSION :15/02/24
* DESCRIPTION :
* The functions in this file that gets integars from the user and determines which is the highest value.
*/
#include <stdio.h>

const int ARRAY_SIZE = 10;

//funtion to get valid integar from the user
int getNum()
{
	int num;
	scanf("%d", &num); //using scanf to get integar from the user
		return num;
}

int main()
{
	int numbers[ARRAY_SIZE];
	printf("Input 10 integars, pressing enter after each one:\n");

	//getting input from the user and storing it in th array
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		numbers[i] = getNum();
	}
	int highestValue = numbers[0];
	int highestIndex = 0;

	//finding the highest value and its index in the array
	for (int i = 1; i < ARRAY_SIZE; ++i)
	{
		if (numbers[i] > highestValue)
		{
			highestValue = numbers[i];
			highestIndex = i;
		}
	}

	//displaying the result
	printf("the highest value is %d at index %d\n", highestValue, highestIndex);

	return 0;
}