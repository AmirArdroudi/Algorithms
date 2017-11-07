#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int arr[], int n)
{
	int j, i;
	for (i = 0; i < n- 1; i++)
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] < arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
}
int main()
{
	int t, k, n,
		arr[1000];

	cin >> t;
	while (t--)
	{

		cin >> n >> k;
		for (int i = 0; i<n; i++)
			cin >> arr[i];

		BubbleSort(arr, n);

		for (int j = 0; j < k; j++)
		{
			cout << arr[j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
