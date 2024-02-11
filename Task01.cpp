#include <iostream>
#include <time.h>
#include <string>

#define m 3
#define n 4

using namespace std;

string matrToString(int matrix[][n]);
void randMatr(int matrix[][n], int min, int max);
string WhatTriangMart(int matr[m][n]);
bool IsLowerTriangMatrix(int matr[m][n]);
bool IsUpperTriangMatrix(int matr[m][n]);


int main() {
	srand(time(0));

	int matrix1[m][n] = {
		{5, 6, 4, 5},
		{-2, 5, 3, 7},
		{8, 7, -2, 6}
	};
	cout << "Matrix:" << endl;
	cout << matrToString(matrix1);
	cout << WhatTriangMart(matrix1);

	int matrix2[m][n] = {
		{2, 0, 0, 0},
		{2, 4, 0, 0},
		{-2, 7, 2, 0}
	};
	cout << "\nMatrix:" << endl;
	cout << matrToString(matrix2);
	cout << WhatTriangMart(matrix2);

	int matrix3[m][n] = {
		{5, 6, 4, 5},
		{0, 5, 3, 7},
		{0, 0, -2, 6}
	};
	cout << "\nMatrix:" << endl;
	cout << matrToString(matrix3);
	cout << WhatTriangMart(matrix3);

	return 0;
}


string WhatTriangMart(int matr[m][n]) {
	string s;
	if (IsLowerTriangMatrix(matr)) {
		s = "It's lower triangle matrix";
	}
	else if (IsUpperTriangMatrix(matr)) {
		s = "It's upper triangle matrix";
	}
	else {
		s = "It's not a triangle matrix";
	}
	return s;
}
bool IsLowerTriangMatrix(int matr[m][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = i+1; j < n; j++) {
			if (matr[i][j] != 0) {
				return false;
			}
		}
	}
}
bool IsUpperTriangMatrix(int matr[m][n]) {
	for (int i = 1; i < m; i++) {
		for (int j = 0; j < i; j++) {
			if (matr[i][j] != 0) {
				return false;
			}
		}
	}
}