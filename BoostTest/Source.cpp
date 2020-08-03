#include <iostream>
#include <cmath>


void equation(double a, double b, double c)
{
	double x1, x2, d;
	d = pow(b, 2) - (4 * a * c);
	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);
	if (d > 0)
		std:: cout << "D = " << d << "\nX1 = " << x1 << "\nX2 = " << x2 << std:: endl;
	else if (d == 0)
	{
		x1 = -(b / 2 * a);
		std:: cout << "X1 = X2 = " << x1;
	}
	else
		throw std::underflow_error("D < 0");
}

int main(int arqc, char* argv[])
{

	double x, y, z;
	std:: cout << "You need write a,b,c in your equation: " << std:: endl;
	std:: cin >> x;
	std:: cin >> y;
	std:: cin >> z;
	if (!double(x) || !double(y) || !double(z))
		throw std::invalid_argument("This is not number");
	equation(x, y, z);

	return 0;
}