// ---------------------------------------------------
//						  Algorithms
//					    quickSort
//
//			professor : samad najar
//			date   : oct 31,2017
//			author : Amir Ardroudi
//
// ---------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int arr[1000];

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int arr[], int left, int right)
{
  int i,j,pivot;
  if (left < right)
  {
    i = left;
    j = right + 1;
    pivot = arr[left];

    do{
        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i < j)
            swap(&arr[i], &arr[j]);

    }while(i < j);
    swap(&arr[left], &arr[j]);
    quickSort(arr, j + 1, right);
    quickSort(arr, left, j-1);
  }
}

int main()
{
  int arr[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
  int n = sizeof(arr)/sizeof(arr[0]);

  quickSort(arr, 0 , n -1);

  for(int i= 0; i < n; i++)
      cout<<arr[i]<<"  ";

  return 0;
}
