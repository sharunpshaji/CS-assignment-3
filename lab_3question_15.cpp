#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the smallest side lenghth "<<endl;
	cin>>x;
	cout<<"Enter the middle length of side"<<endl;
	cin>>y;
	cout<<"Enter the largest of side"<<endl;
	cin>>z;
	if(x+y>=z){cout<<"This can form a triangle";}
	else{cout<<"This sides are invalid for a triangle";} 
	
	return 0;
}
