#include <iostream>
#include "test1.h"
#include "test2.h"

#include "chicken_rabbits.h"
#include "temperature.h"
#include "TwoCarsMeeting.h"

using namespace std;

int main(int argc, char* argv[])
{
	cout << "hello,James,go gogo!" << endl;

	//test1();
	//test2();

	//test22();

	//find_chicken_rabbits(4,7);
	//temperature();
	TwoCarsMeeting(10, 20, 45);

	return 0;
}