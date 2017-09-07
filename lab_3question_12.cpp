#include <iostream>
using namespace std;

int main() {
	int x;
	cout<<"Enter the week day number  "<<endl;
	cin>>x;
	if((x==1)||(x==3)||(x==5)||(x==7)||(x==8)||(x==10)||(x==12)){cout<<"This month has 31 days";}
	else if(x==2){cout<<"The month has 28 days";}
	else if(x<12){cout<<"this month has 30 days";}
	
	return 0;
}
