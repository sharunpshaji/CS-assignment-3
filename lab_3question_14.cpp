#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the angles "<<endl;
	cin>>x>>y>>z;
	if(x+y+z==180){cout<<"This can form a triangle";}
	else{cout<<"This angles are invalid for a triangle";} 
	
	return 0;
}
