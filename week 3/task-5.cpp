#include<iostream>
using namespace std;
main() {
	cout<< "Enter the Name of the Person: ";
	string rename;
	cin>>rename;
	cout<< "Enter the target weight loss in kilograms: ";
	int kilograms;
	cin>>kilograms;
	float days;
	days=kilograms*15;
	cout<<rename<< " will need "<<days<< " days "<< "to lose "<<kilograms<< " kg of weight by following the doctor's suggestions";}