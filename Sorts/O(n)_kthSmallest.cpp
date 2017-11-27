// ---------------------------------------------------
//						  Algorithms
//					   kth smallest element in matrix
//
//			professor : samad najar
//			date   : nov 27,2017
//			author : Amir Ardroudi
//      worst case time complexity : O(n^2)
//      average : O(n)
// ---------------------------------------------------
#include<iostream>

using namespace std;

//use quicksort algorithm ,but in optimaze way
int partition(int arr[], int left, int right)
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
//****** now we can just sort some part of the array, so some Recursive part doesn't run ******
int qSelect(int arr[], int left, int right, int k)
{
    if (k > 0 && k <= right - left + 1)
    {
        int par = partition(arr, left, right);

        if(k-1 < par-left)
        {
            return qSelect(arr, left, par - 1, k);

        }
        else if(k-1 > par-left)
        {
            cout<<" \npar number-> "<<par<<"  k -> "<<k<<" \n";
            return qSelect(arr, par+1, right, k-par+left-1);
        }
        else
            return arr[par];

    }
    return  -1;

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

  cout<<qSelect(arr, 0, size_arr - 1, k)<< " is "<<k
  <<"th smallest element in your matrix :)"<<endl;



  return 0;
}
