// ---------------------------------------------------
//						            Algorithms
//					Binary Search(Recursive version)
//
//			professor : samad najar
//			date   : nov 6,2017
//			author : Amir Ardroudi
//
// ---------------------------------------------------

#include <iostream>
using namespace std;

// ---------------- Recursive implementation ----------------
int BinarySearch(int arr[], int value, int low, int high)
{

	//not found your number
	if (low < high)
	{
		int mid = low + (high - 1) / 2;

		if (arr[mid] > value)
			return BinarySearch(arr, value, low, mid - 1);

		else if (arr[mid] < value)
			return BinarySearch(arr, value, mid + 1, high);
		else
			return mid; //found
	}
	else
		return -1;
}
// ---------------- Main ---------------
int main()
{
	int arr[] = { 1, 2 , 4, 5, 8, 9, 11, 22, 23, 28, 32 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Search your number from this arr : 1, 2 , 4, 5, 8, 9, 11, 22, 23, 28, 32" << "\n";
	int x;
	cin >> x;
	if (BinarySearch(arr, x, 0, n - 1) == -1)
		cout << "not found!\n";
	else
		cout << "your number location : " << BinarySearch(arr, x, 0, n - 1) << endl;
	return 0;
}
