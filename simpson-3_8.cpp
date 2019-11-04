#include <iostream>
#include <cmath>

using namespace std;

double integrando(double);

int main()
{
	double a, b, h, x1, x2;
	a = -1;
	b = 1;
	h = (b - a)/3;
	x1 = a + h;
	x2 = a + 2*h;
	double I;
	
	I = (3.0/8)*h*(integrando(a) + 3*(integrando(x1) + integrando(x2)) + integrando(b));
	
	cout << "I = " << I << endl;
	
	return 0;

}

double integrando(double x)
{
	return exp(-x);
}
