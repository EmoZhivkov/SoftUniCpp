#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, D, x1, x2;
	cin >> a >> b >> c;

	D = (b * b) - 4 * a * c;
	
	

	if (D > 0)
	{
		x1 = ((-1.0)*b + sqrt(D)) / (2.0 * a);
		x2 = ((-1.0)*b - sqrt(D)) / (2.0 * a);
		cout << x2 << " " << x1 << endl;
	}
	else if(D == 0)
	{
		x1 = ((-1.0)*b) / (2.0 * a);
		cout << x1 << endl;
	}
	else { cout << "no roots" << endl; }
    return 0;
}

