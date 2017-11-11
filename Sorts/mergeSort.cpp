// ---------------------------------------------------
//						  Algorithms
//					    mergeSort
//
//			professor : samad najar
//			date   : nov 12,2017
//			author : Amir Ardroudi
//
// ---------------------------------------------------
#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int i, j, k;
    int n1 = mid - l + 1,
     		n2 =  r - mid;

		//your left and right subarray
    int arrL[n1],
		 		arrR[n2];

    for (i = 0; i < n1; i++)
        arrL[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        arrR[j] = arr[mid + 1+ j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (arrL[i] <= arrR[j])
        {
            arr[k] = arrL[i];
            i++;
        }
        else
        {
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = arrL[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arrR[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l+(r-l)/2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
	int arr[] = { 38, 27, 43, 3, 9, 82, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout<<"your unsorted array : ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	mergeSort(arr, 0,  n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
