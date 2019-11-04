#include <iostream>
#include <cmath>

using namespace std;

double func(double);

int main(){
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	
	double A[5], x[5];
	
	A[0] = 0.06667134;
	A[1] = 0.14945134;
	A[2] = 0.21908636;
	A[3] = 0.26926671;
	A[4] = 0.29552422;
	
	x[0] = 0.97390652;
	x[1] = 0.86506336;
	x[2] = 0.67940956;
	x[3] = 0.43339539;
	x[4] = 0.14887433;
	
	double a = 0, b = 2, h, c;
	h = b - a;
	c = (a + b) / 2.0;
	
	double I = 0;
	
	for(int i = 0; i < 5; i++)
	{
		I += A[i]*func((h/2.0)*x[i] + c);
	}
	for(int i = 4; i >= 0; i--)
	{
		I += A[i]*func(-(h/2.0)*x[i] + c);
	}
	
	cout << "I = " << (h/2.0)*I << endl;
	
	return 0;
}

double func(double x){
	
	return exp(-x*x);
	
}
