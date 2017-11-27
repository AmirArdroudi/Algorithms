// ---------------------------------------------------
//						  Algorithms
//					**** Insertion Srot ****
//
//			professor : samad najar
//			date   : nov 5,2017
//			author : Amir Ardroudi
//
// ---------------------------------------------------
#include <iostream>
using namespace std;


int main()
{
	int arr[] = { 5, 2, 4, 6, 1, 3, 20, 14, 32, 0, 10 };
	int x;
	cout << " choose your number from this set : 5 2 4 6 1 3 20 14 32 0 10 ";
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);

	//-------------- linear algorithm ---------------
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			cout << "your number is in  " << i << "th location in array \n";
			return 0;
		}
	}



	return 0;
}
