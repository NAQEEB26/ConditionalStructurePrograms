#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers ";
	cin>>a>>b>>c;
	if(a==b){
		if(a==c){
			cout<<" numbers are equal ";
		}
		else{
			cout<<" numbers are different ";
		}
	}
	else {
		cout<<" numbers are different ";
	}
	return 0;
}
