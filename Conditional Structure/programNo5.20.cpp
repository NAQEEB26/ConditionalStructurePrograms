#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter any character ";
	cin>>ch;
	if((ch>='A')&&(ch<='Z')){
		cout<<ch<<" is capital character "<<endl;
	}
	else if((ch>='a')&&(ch<='z')){
		cout<<ch<<" is smallest character "<<endl;
		
	}
	else if((ch>=0)&&(ch<=10)){
		cout<<ch<<" is the digit ";
	}
	else {
		cout<<ch<<" is symbol";
	}
}
