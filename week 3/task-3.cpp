#include<iostream>
using namespace std;
main() {
	cout<< " Enter Initial Velocity (m/s): ";
	int velocity;
	cin>>velocity;
	cout<< " Enter Acceleration (m/s^2): ";
	int acceleration;
	cin>>acceleration;
	cout<< " Enter Time (s): ";
	int tm;
	cin>>tm;
	float final_velocity;
	final_velocity=(acceleration*tm)+velocity;
	cout<< " Final Velocity (m/s): "<<final_velocity;}