#include "TwoCarsMeeting.h"
#include <iostream>
using namespace std;


double TwoCarsMeeting(double speed1, double	 speed2, double total_distance)
{
	double t = 0;
	t = total_distance / (speed1 + speed2);
	cout << "The total time used for the two cars to meet is " << t << " hours" << endl;

	return t;
}


double test111() {

	double t = TwoCarsMeeting(10, 20, 45);



	return 0;
}
