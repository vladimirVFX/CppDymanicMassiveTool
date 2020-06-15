#include <iostream>
using namespace std;

void main()
{
	//Main_variable
	int rows;
	int cols;

	//Enter_rows&cols
	cout << "enter number rows" << endl;
	cin >> rows;
	cout << "enter number cols" << endl;
	cin >> cols;

	//Initialize_massive
	int **arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int [cols];
	}

	//Add_massive_values
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 20;
		}
	}

	//Print_massive
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//Delete_massive
	for (int i = 0; i < rows; i++) {
		delete [] arr[i];
	}
	delete[] arr;	
}