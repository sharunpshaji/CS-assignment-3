#include <iostream>
using namespace std;

int main() {
	float b,g,H,D;
	cout<<"Enter basic salary of Employee : "<<endl;
	cin>>b;
	if(b<=10000)
	{H=0.2*b;D=0.8*b;}
	else if(b<=20000){H=0.25*b;D=0.9*b;}
	else{H=0.3*b;D=0.95*b;}
	g= b+H+D;
	cout<<"Gross salary is : "<<g;

	return 0;
}
