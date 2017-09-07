#include <iostream>
using namespace std;

int main() {
	char x;
	cout<<"Enter the letter "<<endl;
	cin>>x;
	if((x>='A')&&(x<='Z')){cout<<x<<" is an Upper case letter";}
	else if((x>='a')&&(x<='z')){cout<<x<<" is a lower case letter";}
	
	return 0;
}
