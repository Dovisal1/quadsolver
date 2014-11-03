/*
    Name: Quatratic Solver
    Author: Dovi Salomon
    Date: 9/12/14
    Description: This program will calculate the roots of a quadratic
                 equation, with the form ax^2*bx+c, given the values
                 for a, b, and c. This program implements the well known
                 quadratic formula.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, root1, root2;


    cout << "Enter values a, b, and c, of a qaudratic eqaution with the "
         << "form ax^2*bx+c" << endl;
    cout << "Enter all zeros to quit" << endl;

    cout << "a = ";
    cin >> a;

    cout <<"b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    while ( a!=0 || b!=0 ) {

        root1 = (-b + sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);

        root2 = (-b - sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);
	if (root1 != root2 && !isnan(root1) && !isnan(root2))
        	cout << "The roots are " << root1 << " and " << root2 << endl;
	else if (!isnan(root1) && !isnan(root2))
		cout << "Only one root: " << root1 << endl;
	else
		cout << "Imaginary Roots!" << endl;

	if (a==1 && root1 != root2 && !isnan(root1) && !isnan(root2)) {
		
		cout << "\nWarning: the following feature is in beta!" << endl;		

		if (b>0) {
			if (c>0)
				cout << "Equation can be factored into (x+" << root1*-1 << ")(x+" << root2*-1 << ")" <<endl;
			else if (root1>root2)
				cout << "Equation can be factored into (x+" << root2*-1 << ")(x-" << root1 << ")" << endl;
			else
				cout << "Equation can be factored into (x+" << root1*-1 << ")(x-" << root2 << ")" << endl;
		}
		else if (c>0)
			cout << "Equation can be factored into (x-" << root1 << ")(x-" << root2 << ")" << endl;
		else if (root1 > root2)
			cout << "Equation can be factored into (x-" << root1 << ")(x+" << root2 * -1 << ")" << endl;
		else
			cout << "Equation can be factored into (x-" << root2 << ")(x" << root1 * -1 << ")" << endl;

	}

		/*
		cout << "Eqaution can be factored into (x";
		if (root1>=0)
			cout << "+";
		cout << root1 << ")(x";
		if (root2>=0)
			cout << "+";
		cout << root2 << ")" << endl;
	}*/

        cout << "\nEnter values a, b, and c, of a qaudratic eqaution with the "
             << "form ax^2*bx+c" << endl;
        cout << "Enter all zeros to quit" << endl;
	

        cout << "a = ";
        cin >> a;

        cout <<"b = ";
        cin >> b;

        cout << "c = ";
        cin >> c;


    }
    return 0;
}
