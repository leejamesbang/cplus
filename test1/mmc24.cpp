#include "mmc24.h"

#include <iostream>
using namespace std;

/*
The letters A, P, Q, R, and Z represent five distinct base-ten digits. If the product of the
three-digit numbers APZ and AQZ is the five-digit number 3ARZ4, what is the value
of A ¡¤ (P + Q + R) ¡¤ Z?
*/
int mmc14()
{
	int n = 0;
	int A = 0, P = 0, Z = 0, Q = 0, R = 0;
	bool bSuccess = false;
	for (A = 1; A < 10; A++)
	{
		//std::cout << "A=" << A << endl;
		for (P = 0; P < 10; P++)
		{
			//std::cout << "P=" << P << endl;
			for (Q = 0; Q < 10; Q++)
			{
				//std::cout << "Q=" << Q << endl;
				for (R = 0; R < 10; R++)
				{
					//std::cout << "R=" << R << endl;
					for (Z = 0; Z < 10; Z++)
					{
						int x = 100 * A + 10 * P + Z;
						int y = 100 * A + 10 * Q + Z;
						int z = 30000 + 1000 * A + 100 * R + 10 * Z + 4;

						//std::cout << "Z=" << Z << endl;
						//std::cout << "x=" << x << endl;
						//std::cout << "y=" << y << endl;
						//std::cout << "x*y=" << x*y << endl;
						//std::cout << "z=" << z << endl;

						if (x * y == z)
						{
							std::cout << "A=" << A << ",P=" << P << ",Q=" << Q << ",R=" << R << ",Z=" << Z << endl;
							bSuccess = true;
							break;
						}

						n++;
					}
					if (bSuccess) break;
				}
				if (bSuccess) break;
				//std::cout << endl;
			}
			if (bSuccess) break;
		}
		if (bSuccess) break;
		//std::cout << endl;
	}
	std::cout << "n=" << n << endl;
	//std::cout << "A=" << A << ",P=" << P << ",Q=" << Q << ",R=" << R << ",Z=" << Z << endl;
	int result = A * (P + Q + R) * Z;
	std::cout << "result=" << result << endl;
	return result;
}