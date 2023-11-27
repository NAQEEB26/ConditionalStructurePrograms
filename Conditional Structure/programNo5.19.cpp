#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter a character ";
	cin>>ch;
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='u'||ch=='U'){
		cout<< "you entered a vowel number ";
	}
	else{
		cout<<"you not entered a vowel number ";
	}
	return 0;
}
