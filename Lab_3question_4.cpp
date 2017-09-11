#include <iostream>
using namespace std;

int main() {
	int x;
	cout<<"Enter the number "<<endl;
	cin>>x;
	if((x%5==0)&&(x%11==0)){cout<<"It is devisible by 5 and 11";}
	else{
	cout<<"It is not devisible by 5 and 11";
	}
	return 0;
}
