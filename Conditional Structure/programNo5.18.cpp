#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers ";
	cin>>a>>b>>c;
	if(a>b&&a>c){
cout<<a<<" is the greater number ";		
	}
	else if(b>c&&b>a){
		cout<<b<<" is the greater number ";
	}
	else{
		cout<<c<<" is the greater number ";
	}
	return 0;
}
