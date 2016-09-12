#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char *argv[])
{

	if(argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <a> <b> <c>\n";
		return 1;
	}

	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);

	if(!a) {
		std::cerr << argv[0] << ": invalid arguments\n";
		return 2;
	}

	double discriminant = pow(b,2) - 4*a*c;


	if(discriminant == 0) {
		double root = -b / (2 * a);
		std::cout << "One root: " << root << '\n';
	}
	else if(discriminant > 0) {
		double root1 = (-b + sqrt(discriminant) ) / (2 * a);
		double root2 = (-b - sqrt(discriminant) ) / (2 * a);
		std::cout << "Two roots: " << root1 << " and " << root2 << '\n';
	}
	else if (discriminant < 0) {
		double real = -b / (2*a);
		double imag1 = sqrt(std::abs(discriminant))  / (2 * a);
		double imag2 = -sqrt(std::abs(discriminant)) / (2 * a);

		std::cout << "Imaginary roots: ";

		if(real == 0) {
			std::cout << imag1 << "i and " << imag2 << 'i';
		}
		else if(real > 0) {
			std::cout << imag1 << "i + " << real << " and "
				<< imag2 << "i + " << real;
		}
		else if(real < 0) {
			real = std::abs(real);
			std::cout << imag1 << "i - " << real << " and "
				<< imag2 << "i - " << real;
		}
		std::cout << '\n';
	}

	return 0;
}
