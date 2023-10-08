#include<iostream>
using namespace std;
main() {
	cout<< " Enter vegetable price per kilogram (in coins): ";
	float vegprice;
	cin>>vegprice;
	cout<< " Enter fruit price per kilogram (in coins): ";
	float fruprice;
	cin>>fruprice;
	cout<< " Enter total kilograms of vegetables: ";
	int kiloveg;
	cin>>kiloveg;
	cout<< " Enter total kilograms of fruits: ";
	int kilofru;
	cin>>kilofru;
	float totalear;
	totalear=(vegprice*kiloveg)+(fruprice*kilofru);
	float totalearn;
	totalearn=totalear/1.94;
	cout<< " Total earnings in Rupees (Rps): "<<totalearn;}
	