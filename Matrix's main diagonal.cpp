#include <iostream>

void FillMatrix(int arr[][3], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			std::cin >> arr[i][j];
		}
	}
}

void PrintMainDiang(int arr[][3], int row, int col) {
	std::cout << "The elements of the main diagonal are: ";
	for (int i = 0; i < row; ++i) {
		std::cout << arr[i][i] << "\t";
	}
}

int main()
{
	const int row = 3;
	const int col = 3;
	int arr[row][col];
	FillMatrix(arr, row, col);
	PrintMainDiang(arr, row, col);


}
