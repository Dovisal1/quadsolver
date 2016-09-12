
#include <iostream>
#include <string>
#include <cmath>

#define ERRARG 1
#define ERRNUM 2

int main(int argc, char *argv[])
{
	argv++;
	argc--;

	if (argc != 3) {
		std::cerr << "Usage: quad <a> <b> <c>" << std::endl;
		return ERRARG;
	}

	double a, b, c;

	try {
		a = std::stod(argv[0]);
		b = std::stod(argv[1]);
		c = std::stod(argv[2]);
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "quad: provide correct coefficients" << std::endl;
		return ERRNUM;
	}

	double discriminant = pow(b,2) - (4 * a * c);


	if (discriminant > 0) {
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
	else {
		double root = -b / (2 * a);
		std::cout << "One root: " << root << '\n';
	}

	return 0;
}
