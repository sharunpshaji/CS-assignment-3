#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the cost of manufacture  "<<endl;
	cin>>x;
	cout<<"Enter the Maximum retail price "<<endl;
	cin>>y;
	z=y-x;
	if(z>=0){cout<<"You have profit ";}
	else if(z==0){cout<<"There is no profit or loss";}
	else{cout<<"Sorry you have loss";}
	
	return 0;
}
