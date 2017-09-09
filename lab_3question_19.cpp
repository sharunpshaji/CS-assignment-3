#include <iostream>
using namespace std;

int main() {
	float a,b,c,d,e,f;
	cout<<"Enter the marks scored in Physics out of hundred  "<<endl;
	cin>>a;
	cout<<"Enter the marks scored in Chemistry out of hundred  "<<endl;
	cin>>b;
	cout<<"Enter the marks scored in Biology out of hundred  "<<endl;
	cin>>c;
	cout<<"Enter the marks scored in Mathematics out of hundred  "<<endl;
	cin>>d;
	cout<<"Enter the marks scored in Computer out of hundred  "<<endl;
	cin>>e;
	f=((a+b+c+d+e)/5);
	cout<<"You have scored "<<f<<" percentage"<<endl;
	if(f>=90){cout<<"Your grade is A ";}
	else if(f>=80){cout<<"Your grade is B ";}
	else if(f>=70){cout<<"Your grade is C ";}
	else if(f>=60){cout<<"Your grade is D ";}
	else if(f>=40){cout<<"Your grade is E ";}
	else{cout<<"Your grade is F ";}
	return 0;
}
