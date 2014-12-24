#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void print_usage()
{
    cerr << "Usage: quad <a> <b> <c>" << endl;
    exit(1);
}


int main(int argc, char* argv[])
{

    if(argc != 4)
        print_usage();

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double root1, root2;

    if( !a || !b || !c) {
	    cerr << "quad: expecting numbers for all parameters\n";
	    print_usage();
    }

    root1 = (-b + sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);

    root2 = (-b - sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);

    if (root1 != root2 && !isnan(root1) && !isnan(root2))
        cout << "The roots are " << root1 << " and " << root2 << endl;

    else if (!isnan(root1) && !isnan(root2))
        cout << "Only one root: " << root1 << endl;

    else
        cout << "Imaginary Roots!" << endl;


    if (a == 1 && root1 != root2 && !isnan(root1) && !isnan(root2) && int(root1)==root1 && int(root2)==root2)
    {
        
        cout << "Warning: the following feature is in beta!" << endl;

        
        cout << "Eqaution can be factored into (x";
        
        if (b>0)
        {
            if (c>0)
                cout << "+" << root1 * -1 << ")(x+" << root2 * -1 << ")" <<endl;
            else if (root1>root2)
                cout << "+" << root2 * -1 << ")(x-" << root1 << ")" << endl;
            else
                cout << "+" << root1 * -1 << ")(x-" << root2 << ")" << endl;
        }
        else if (c>0)
            cout << "-" << root1 << ")(x-" << root2 << ")" << endl;
        else if (root1 > root2)
            cout << "-" << root1 << ")(x+" << root2 * -1 << ")" << endl;
        else
            cout << "-" << root2 << ")(x" << root1 * -1 << ")" << endl;

    }
        

    return 0;
}
