#include <iostream>

using namespace std;

int fib(int a1);

int main()
{
	int fibonac, num=-1;

	while (num<=0){
	cout << "Enter a non-negative integer.\n";
	cin >> num;
	}

	fibonac = fib(num);

	cout << "The " << num << "th Fibonacci number is "<< fibonac << ".\n";

	system("pause");
	return 0;

}

int fib(int a1)
{
	int i=0, first = 1, second = 1, next;

	for (i = 3; i <= a1;i++){
		next = first + second;
		first = second;
		second = next;
	}


	return (second);
}
