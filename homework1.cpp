/*****************************************/
/* My Name, My Student Number */
/* Sept 13, 2019. */
/* This program prints out some messages: */
/*****************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double perm_load_margin = 0.6, var_load_margin = 0.2, unit_weight = 25, length, gk, qk, k = 0;
	double depth, width, self_weight, tot_load, Wd, V, M;

	cout << "In order to design a structurally sound rectangular concrete beam, enter the required specifications as prompted:\n";
	while (k != -1){

		cout << "\nEnter the length of the beam in meters: ";
		cin >> length;

		cout << "Enter the permanent load on the beam in kN/m: ";
		cin >> gk;

		cout << "Enter the variable load on the beam in kN/m: ";
		cin >> qk;

	
			depth = (length * 1000) / 14;
			width = 0.4*depth;
			self_weight = (depth*width*unit_weight)/1000000;
			tot_load = self_weight + gk;
			Wd = (1 + perm_load_margin)*gk + (1 + var_load_margin)*qk;
			V = Wd*length / 2;
			M = Wd*length*length / 8;

	
		cout << "Here is a summary of the beam design: \n\n";

		cout << "The minimum values for the size of the beam are:\n";
		cout << "Depth = " << depth << " mm, Width = " << width << " mm \n";
		cout << "The total characteristic load = " << tot_load << " kN/m \n";
		cout << "Shear Force (V) = " << V << " kN \n";
		cout << "Bending Moment (M) = " << M << " kNm \n\n\n";

		cout << "Enter -1 to exit the program, or any other number to repeat: ";
		cin >> k;
	}

	return 0;

}
