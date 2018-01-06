/*
####################################################################
##################  Dynamic programming Homework  ##################
##################			Coloring Tiles		  ##################
##################			 DP Solution 		  ##################

##################         Date : 1/4/2018		 ###################

###############  Author : Amir Ardroudi- 945321001  ################

####################################################################
*/

#include<iostream>
#include<chrono>

using namespace std;

// i want to check the processing time and compare it with recursive solution
typedef chrono::high_resolution_clock CLOCK; 

#define MIN(a,b) ((a) < (b) ? (a) : (b))
//##################	DP SOLUTION    ####################
int changeTiles(int arrTiles[], int arrGoal[], int sizeT, int sizeG)
{
	int saveOP[10][10];

	for (int i = 0; i <= sizeT; i++)
		for (int j = 0; j <= sizeG; j++)
		{
			if (i == 0)	saveOP[i][j] = j;  
			else if (j == 0)saveOP[i][j] = i;

			else if (arrTiles[i - 1] == arrGoal[j - 1])
				saveOP[i][j] = saveOP[i - 1][j - 1];
			else
				saveOP[i][j] = MIN(MIN(saveOP[i - 1][j], saveOP[i][j - 1]), saveOP[i - 1][j - 1]) + 1;
		}

	return saveOP[sizeT][sizeG];
}


int main()
{


	int n,
		color,
		k;
	int sizeG, sizeT;

	int arrTiles[10], arrGoal[10];

	cout << "Enter your number of tiles :";
	cin >> n;
	cout << "Enter your tile's color : ";

	for (int i = 0; i < n; i++)
	{
		cin >> color;
		arrTiles[i] = color;
	}

	cout << "\nEnter Kth tile number :";
	cin >> k;

	for (int i = 0; i < n - k; i++)
	{
		arrGoal[i] = arrTiles[k + i];
	}

	// save the size of last tiles vector
	sizeG = n - k;
	sizeT = k;

	// ################## print our tiles for debuging ##################
	cout << sizeG << "  " << sizeT << "\n";

	cout << "tiles that need change : ";
	for (int i = 0; i < sizeT; i++)
		cout << arrTiles[i] << "  ";

	cout << "\ngoal tiles is : ";
	for (int i = 0; i < sizeG; i++)
		cout << arrGoal[i] << "  ";
	cout << "\n";

	//##################################################################

	auto t1 = CLOCK::now();
	cout << "\nMinimum operation : " << changeTiles(arrTiles, arrGoal, sizeT, sizeG) << endl;
	auto t2 = CLOCK::now();
	cout << "\nTOTAL TIME : "<< chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count()
		 << " nanoseconds" << endl;

	return 0;
}
