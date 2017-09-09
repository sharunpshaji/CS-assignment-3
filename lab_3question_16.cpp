#include <iostream>
using namespace std;

int main() {
	float x,y,z;
	cout<<"Enter the first side "<<endl;
	cin>>x;
	cout<<"Enter the second side"<<endl;
	cin>>y;
	cout<<"Enter the third side"<<endl;
	cin>>z;
	if(x==y==z){cout<<"This is an equilateral triangle";}
	else if((x==y)||(y==z)||(x==z)){cout<<"This is an isosceles triangle";} 
	else{cout<<"this is a scalene triangle";}
	
	return 0;
}
