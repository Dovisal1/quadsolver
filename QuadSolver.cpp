#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char **argv)
{

    if(argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <a> <b> <c>\n";
        exit(1);
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
   
    if(!a)
	    std::cerr << argv[0] << ": invalid arguments\n";

    double discriminant = b*b - 4*a*c;
    double root1 = (-b + sqrt(discriminant) ) / (2 * a);
    double root2 = (-b - sqrt(discriminant) ) / (2 * a);

    if (discriminant < 0)
    	std::cout << "Imaginary Roots!" << endl;
    	
    else if(discriminant > 0)
        std::cout << "The roots are " << root1 << " and " << root2 << endl;

    else
        std::cout << "Only one root: " << root1 << endl;
  
    return 0;
}
