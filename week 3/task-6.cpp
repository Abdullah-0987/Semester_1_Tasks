#include<iostream>
using namespace std;
main() {
	cout<< " Enter the size of the fertilizer bag in pounds: ";
	int size;
	cin>>size;
	cout<< " Enter the cost of the bag: $";
	int cost;
	cin>>cost;
	cout<< " Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin>>area;
	int per_cost;
	per_cost=cost/size;
	cout<< " Cost of fertilizer per pound: $"<<per_cost<<endl;
	int per_foot;
	per_foot=cost/area;
	cout<< " Cost of fertilizer per square foot: $"<<per_foot;}