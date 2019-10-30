#include <iostream> 
#define MaxDim 4               
using namespace std;

bool isEqual(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim]);
void Add(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim]);
void Subtract(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim]);
void MultiplyByConstant(double A[MaxDim][MaxDim], double b);

int main()
{
	double b;
	double A[MaxDim][MaxDim] ={ {1, 1, 1, 1},
								{2, 2, 2, 2},
								{3, 3, 3, 3},
								{4, 4, 4, 4} };

	double B[MaxDim][MaxDim] ={ {1, 1, 1, 1},
								{2, 2, 2, 2},
								{3, 3, 3, 3},
								{4, 4, 4, 4} };

	if (isEqual(A, B)) {
		cout << "Matrices are identical\n";
	}
		
	else {
		cout << "Matrices are not identical\n";
	}
	
	Add(A, B);
	Subtract(A, B);

	cout << "Enter the number by which you wish to multiply Matrix A: ";
	cin >> b;
	MultiplyByConstant(A, b);
	return 0;
}

bool isEqual(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim])
{
	int i, j;
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++)
		{
			if (A[i][j] != B[i][j])
				return false;
		}
	}
	return true;
}

void Add(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim])
{
	int i, j;
	double C[MaxDim][MaxDim];
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	cout << "\nThe sum of matrices A and B is equal to:\n";
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			cout << "|" << C[i][j];
		}
		cout << "|\n";
	}
}

void Subtract(double A[MaxDim][MaxDim], double B[MaxDim][MaxDim])
{
	int i, j;
	double C[MaxDim][MaxDim];
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << "\nThe difference of matrices A and B is equal to:\n";
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			cout << "|" << C[i][j];
		}
		cout << "|\n";
	}
}

void MultiplyByConstant(double A[MaxDim][MaxDim], double b)
{
	int i, j;
	double C[MaxDim][MaxDim];
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			C[i][j] = A[i][j] * b;
		}
	}
	cout << "\nThe product of matrix A and " << b << " is equal to:\n";
	for (i = 0; i < MaxDim; i++) {
		for (j = 0; j < MaxDim; j++) {
			cout << "|" << C[i][j];
		}
		cout << "|\n";
	}
}
