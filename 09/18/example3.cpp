#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ctr1, ctr2;


	for (ctr1 = 1; ctr1 <= 6; ctr1 = ctr1 + 2)
	{
		for (ctr2 = 2; ctr2 <= 5; ctr2 = ctr2 + 3)
		{
			cout << "ctr1 = " << ctr1 << " , ctr2 = " << ctr2 << endl;
		}
	}

			return 0;

}

/* output is ctrl1=1, ctrl2=2; ctrl1=1, ctrl2=5; ctrl1=3, ctrl2=2; ctrl1=3, ctrl2=5; ctrl1=5, ctrl2=2; ctrl1=5, ctrl2=5 */
