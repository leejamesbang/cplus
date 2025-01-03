#include "chicken_rabbits.h"

#include <iostream>
using namespace std;


int find_chicken_rabbits(int head, int feet)
{
	int rabbits = 0;
	int chicken = 0;
	int r = 0;
	int c = 0;
	for (r = 0; r <= head; r++)
	{
		for (c = 0; c <= head; c++)
		{
			if (r + c == head && r * 4 + c * 2 == feet)
			{
				rabbits = r;
				chicken = c;
				cout << "There are " << rabbits << " rabbits and " << chicken << " chickens." << endl;
				break;

			}
		}
	}
	cout <<"head="<<head<<",feet="<<feet<< ",no result!" << endl;
	return rabbits;
}
