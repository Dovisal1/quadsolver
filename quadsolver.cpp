#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char *argv[])
{

    if(argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <a> <b> <c>\n";
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
   
    if(!a)
    {
    	std::cerr << argv[0] << ": invalid arguments\n";
    	return 2;
    }

    double discriminant = b*b - 4*a*c;
    
	if (discriminant < 0)
    	std::cout << "Imaginary Roots!\n";
    	
    else if(discriminant > 0)
	{
	    double root1 = (-b + sqrt(discriminant) ) / (2 * a);
	    double root2 = (-b - sqrt(discriminant) ) / (2 * a);
		std::cout << "The roots are " << root1 << " and " << root2 << '\n';
	}
	
	else
	{
		double root = (-b + sqrt(discriminant) ) / (2 * a);
		std::cout << "Only one root: " << root << '\n';
	}
        
    return 0;
}
