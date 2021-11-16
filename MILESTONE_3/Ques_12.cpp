// Q4. Create a 3-D matrix of any size and then display it.


#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout << "Enter the Size of array\n";	
	cin >> a >> b >> c;
	int arr[a][b][c];	

	for (int i = 0; i < a; ++i)	
	{
		for (int j = 0; j < b; ++j)	
		{
			for (int k = 0; k < c; ++k)
			{
				cout << "\nEnter value at position[" << i << "]" << "[" << j << "]" << "[" << k << "]";

				cin >> arr[i][j][k];	
			}
		}
	}

	for (int i = 0; i < a; ++i)	
	{
		for (int j = 0; j < b; ++j)
		{
			for (int k = 0; k < c; ++k)
			{
				cout << "\nValue at position[" << i << "]" << "[" << j << "]" << "[" << k << "]=  " << arr[i][j][k];
			}
		}
	}
	return 0;
}


// OUTPUT:
// Enter the Size of array
// 3 2 1

// Enter value at position[0][0][0] 3

// Enter value at position[0][1][0] 6

// Enter value at position[1][0][0] 7

// Enter value at position[1][1][0] 7

// Enter value at position[2][0][0] 0

// Enter value at position[2][1][0] 2

// Value at position[0][0][0]=  3
// Value at position[0][1][0]=  6
// Value at position[1][0][0]=  7
// Value at position[1][1][0]=  7
// Value at position[2][0][0]=  0
// Value at position[2][1][0]=  2