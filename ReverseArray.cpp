/*fileName:ReverseArray.cpp
*ProgrammerName:Charles Sherwood 
Date:2/24/26
Requirements:This program populates an array of integers, then calls a function that
dynamically creates a new array containing the same values in reverse order. The program
must correctly deallocate all dynamically allocated memory before termination.
*/
#include <iostream>
using namespace std;

//Create Prototypes
int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);


int main()
{
  


	 

}

int* ReverseArray(const int arr[], int size)
{
	int* newarray = new int[size];
	int i;

	for (int i = 0; i < size; i++);
	{
			newarray[i] = arr[size - 1 - i];
	}
	return newarray;
}

void print(const int arr[], int size)
{

}