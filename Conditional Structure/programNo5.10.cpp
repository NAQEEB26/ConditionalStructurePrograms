#include<iostream>
using namespace std;
int main(){
	int salary,grade,bonus1,bonus2;
	bonus1=5000/100;
	bonus2=2500/100;
	cout<<"enter your salary ";
	cin>>salary;
	cout<<"enter your grade ";
	cin>>grade;
	if(grade>=15){
		cout<<"your salary is: "<<salary*bonus1<<endl;
	}
else{
	cout<<"your slary is: "<<salary*bonus2<<endl;
}
return 0;
}
