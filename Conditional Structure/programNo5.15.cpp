#include<iostream>
using namespace std;
int main(){
	int salary;
	cout<<"enter your salary ";
	cin>>salary;
	if (salary>=20000){
		cout<<"your net salary is: "<<salary-70/100<<endl;
	}
	else if(salary>=10000){
		cout<<"your net salary is: "<<salary-1000<<endl;
	}
	else{
		cout<<"your net salary is: "<<salary;
	}
	
	return 0;
}
