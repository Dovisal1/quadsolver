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

void promptUser(float &a, float &b, float &c) 
{    
    cout << endl;
    cout << "Enter values a, b, and c, of a qaudratic equation with the "
    << "form ax^2*bx+c" << endl;
    cout << "Enter all zeros to quit" << endl;
    
    cout << "a = ";
    cin >> a;
    
    cout <<"b = ";
    cin >> b;
    
    cout << "c = ";
    cin >> c;
    
    cout << endl;
}

int main()
{
    float a, b, c, root1, root2;
    
    void promptUser(float &, float &, float &);
    
    promptUser(a,b,c);


    //Program will continue to run until the user supplies an invalid 
    //coefficient for the term 'a'.
    while ( a!=0) {

        root1 = (-b + sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);

        root2 = (-b - sqrt(pow(b,2) - 4 * a * c) ) / (2 * a);
        if (root1 != root2 && !isnan(root1) && !isnan(root2))
                cout << "The roots are " << root1 << " and " << root2 << endl;
        else if (!isnan(root1) && !isnan(root2))
            cout << "Only one root: " << root1 << endl;
	else
            cout << "Imaginary Roots!" << endl;
        
        cout << endl;
        
        //The following feature will factor the equation using the root
	//This will only be done if if the coefficient of the highest power
	//is 1. For examply: x^2-x-2

        if (a==1 && root1 != root2 && !isnan(root1) && !isnan(root2)) {
		
            cout << "Warning: the following feature is in beta!" << endl;

		
            cout << "Eqaution can be factored into (x";
        
            if (b>0) {
                if (c>0)
                    cout << "+" << root1*-1 << ")(x+" << root2*-1 << ")" <<endl;
                else if (root1>root2)
                    cout << "+" << root2*-1 << ")(x-" << root1 << ")" << endl;
                else
                    cout << "+" << root1*-1 << ")(x-" << root2 << ")" << endl;
            }
            else if (c>0)
                cout << "-" << root1 << ")(x-" << root2 << ")" << endl;
            else if (root1 > root2)
                cout << "-" << root1 << ")(x+" << root2 * -1 << ")" << endl;
            else
                cout << "-" << root2 << ")(x" << root1 * -1 << ")" << endl;

        }//end if
        
	//function call
        promptUser(a,b,c);

    }//end while
    
    return 0;
}
