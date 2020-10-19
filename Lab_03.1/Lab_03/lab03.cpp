#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x;
	double y; 
	double A;
	double B;
	cout << "x = "; cin >> x;

	A = x * x / 2.1 + sin(fabs(x));
	
	if (x <= -5)
		B = (1. / tan(exp(x)));
	if (-5 < x && x < 0)
		B = 2 - (x * x * x) / (fabs(x)) + 1;
	if (x >= 0)
		B = log(pow(fabs(x), 1./2 - (x * x) / 2.));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	cin.get();
	return 0;
}