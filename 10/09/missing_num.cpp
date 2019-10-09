#include <iostream> 
using namespace std;

int missing(int n, int total);

int main()
{
	int foo[] = { 1, 2, 3, 5, 6 };
	int miss, n, total=0;
	n = sizeof(foo) / sizeof(foo[0]);
	for (int i = (n-1); i >= 0; i--){
		total = total + foo[i];
	}
	miss = missing(n, total);
	cout << miss << endl;
	system("pause");
	return 0;
}

int missing(int n, int total)
{

	int miss;
	miss = (n + 1)*(n + 2) / 2 - total;
	return miss;
}
