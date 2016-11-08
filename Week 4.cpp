

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x = 23.56, y = -123.5;
	bool b1, b2, b3;
	b1 = true;
	b2 = !b1;
	b3 = b1 || b2;
	cout << (sin(x) + ceil(y) * x > 12398) << endl;
	cout << b1 && b2 || b3 << endl;



	
	return 0;
}

