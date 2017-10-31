// ---------------------------------------------------
//						  Algorithm's 
//					**** Insertion Srot ****
//						
//			professor : samad najar 
//			date   : 31/oct/2017
//			author : Amir Ardroudi  
//
// ---------------------------------------------------
#include <iostream>

using namespace std;

// function to sort an array using insertion sort
void insertSort(int arr[], int n)
{
	int temp, i, j;
	for (j = 1; j < n; ++j)
	{
		temp  = arr[j];
		i = j - 1;

		while(i >= 0 && arr[i] > temp)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;
	}

}

int main()
{
	int array[] = { 5, 2, 4, 6, 1, 3};
	int n = sizeof(array)/ sizeof(array[0]);

	insertSort(array, n);

	// print sorted array
	for (int i = 0; i < n; ++i)
		cout<<array[i]<<" ";
	

	return 0;
}