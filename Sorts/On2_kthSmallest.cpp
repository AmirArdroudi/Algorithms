// ---------------------------------------------------
//						  Algorithms
//					   kth smallest element in matrix
//
//			professor : samad najar
//			date   : nov 27,2017
//			author : Amir Ardroudi
//
// ---------------------------------------------------
#include <iostream>
using namespace std;

int partirion(int arr[], int left, int right)
{
  int i = left -1,
      pivot = arr[right];

  for(int j = left; j <= right - 1; j++)
  {
    if(arr[j] <= pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i + 1], arr[right]);
  return i+1;

}
//use quicksort to sort the array first
void quicksort(int arr[], int left, int right)
{
  if(left < right)
  {
    int par = partirion(arr, left, right);

    //left partition
    quicksort(arr, left, par - 1);
    //right partition
    quicksort(arr, par + 1, right);

  }
}
//return kth element of array
int kthSmallest(int arr[], int left, int right, int k)
{
  quicksort(arr,left,right);

  return arr[k - 1];
}

int main()
{
  int size_arr = 16;
  int arr[size_arr];
  int k;

  cout<<"Enter your matrix : "<<"\n";
  for(int i = 0 ; i < size_arr; i++)
    cin>>arr[i];

  cout<<"\n"<<" Enter your kth index of smallest number you want in your matrix : ";
  cin>> k;

  cout<<kthSmallest(arr, 0, size_arr - 1, k)<<endl;



  return 0;
}
