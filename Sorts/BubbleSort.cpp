// ---------------------------------------------------
//						  Algorithms 
//					**** Bubble Srot ****
//						
//			professor : samad najar 
//			date   : oct 31,2017
//			author : Amir Ardroudi 
//
// ---------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

// buble sort function to sorting given array
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n-1; ++i)
		for (int j = 0; j < n-i-1; ++j)
		{
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
			
		}


}
int main()
{
	int array[] = {2, 5, 4, 10, 3, 7, 1};
	int n = sizeof(array) / sizeof(array[0]);
	
	bubbleSort(array, n);

	// print sorted array
	cout<<"sorted array : ";
	for (int i = 0; i < n; ++i)
		cout<<array[i]<<" ";
	
	return 0;
}

