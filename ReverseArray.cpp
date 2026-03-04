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
	const int SIZE = 5;

	//Populates the original array
	int original[SIZE] = { 10,20,30,40,50 };

	//call the function to create the  reverse array 
	int* reversed = ReverseArray(original,SIZE);

	//Displays the original Array with numbers in correct order 
	cout << "Original Array: ";
	print(original, SIZE);

	//Displays the reversed Array 
	cout << "Reversed Array: ";
	print(reversed, SIZE);


	//Deallocate the dynamically allocated memory
	delete[] reversed;

	return 0;

}

int* ReverseArray(const int arr[], int size)
{
	//Allocate the new array
	int* newarray = new int[size];

	//copys the elements in reverse order
	for (int i = 0; i < size; i++)
	{
			newarray[i] = arr[size - 1 - i];
	}
	return newarray;
}

//Function to print the arrays onto the console
void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}