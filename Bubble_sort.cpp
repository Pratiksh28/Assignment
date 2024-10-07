// C++ program for implementation 
// of Bubble sort 
#include <bits/stdc++.h> 
using namespace std; 
int stepcount,swapcount,compcount;
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++) 
	{	stepcount++;
		// Last i elements are already 
		// in place 
		for (j = 0; j < n - i - 1; j++) 
			{ stepcount++;
			compcount++;
			stepcount++;
			if (arr[j] > arr[j + 1]) 
				{
				swap(arr[j], arr[j + 1]); 
				stepcount++;
				swapcount++;
				}
	}
	}
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		{stepcount++;
		cout << arr[i] << " \t "; 
		}
		cout << endl ;
} 

void acceptArray(int arr[], int size) 
{ 
	int i; 
    cout<< "Enter the elements\n";
	stepcount++;
	for (i = 0; i < size; i++) 
		{
		stepcount++;
		cin>> arr[i]; 
		
		}
} 
// Driver code 
int main() 
{ 
	int arr[50] ,n; 
    cout<< "Enter the number of elements\n";
    cin>> n;
	stepcount++;
    acceptArray(arr, n);
	stepcount++;	
	bubbleSort(arr, n); 
	stepcount++;
	cout << "Sorted array: \n"; 
	printArray(arr, n);
	stepcount++; 
	cout << "Total Steps are "<<stepcount <<"\n"; 
	cout << "Total Comparisons are "<<compcount <<"\n"; 
	cout << "Total Swaps are "<<swapcount <<"\n"; 
	return 0; 
}
