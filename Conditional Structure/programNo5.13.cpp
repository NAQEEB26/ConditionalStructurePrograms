#include<iostream>
using namespace std;
int main(){
	int units;
	float bill;
	cout<<"enter units consumed ";
	cin>>units;
	if(units<=300)
{
	bill=units*2;
	
}
else if(units<=500){
	bill=units*5;
}
else {
bill=units*7;}

if(bill>2000)
{
	bill=units*50/100;
}
bill=bill+150;
cout<<"total bill "<<bill;
return 0;
}
















