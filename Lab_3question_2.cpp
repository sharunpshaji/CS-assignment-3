#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the first number "<<endl;
	cin>>x;
	cout<<"Enter the second number "<<endl;
	cout<<"Enter the third number "<<endl;
	cin>>z;
	cin>>y;
	cout<<"The Largest amoung these is ";
	if(x<y<z){cout<<z;}
	else if(x<z<y){cout<<y;}
	else{cout<<x;}
	return 0;
}
