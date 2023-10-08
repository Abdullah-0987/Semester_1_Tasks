#include<iostream>
using namespace std;
main() {
	cout<< " Enter Imposter Count: ";
	float Imposter;
	cin>>Imposter;
	cout<< " Enter Player Count: ";
	float Player;
	cin>>Player;
	float animposter;
	animposter=100*(Imposter/Player);
	cout<< " Chance of being an imposter: "<<animposter<<"%";}