#include <iostream>
using namespace std;

int main() {
	char x;
	cout<<"Enter the input "<<endl;
	cin>>x;
	if((x>='a')&&(x<='z')||(x>='A')&&(x<='Z')){cout<<x<<" is an alphabet";}
	else if((x<=9)&&(x>=0)){cout<<x<<" is a digit";}
	else{cout<<x<<" is a special charactor";}
	
	return 0;
}
