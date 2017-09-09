#include <iostream>
using namespace std;

int main() {
	float a,p,s,t;
	cout<<"The units of cunsumption : "<<endl;
	cin>>a;

	if(a<=50){t=.5*a;}
	else if(a<=150){t=((.75*(a-50))+25);}
	else if(a<=250){t=((1.20*(a-150))+100);}
	else {t=((1.50*(a-250))+220);}
	s=.2*t;
	p=s+t;
	cout<<"The total amout is "<<p;

	return 0;
}
