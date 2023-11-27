#include<iostream>
using namespace std;
int main(){
	float area,r,circum;
	int choice;
	cout<<"enter radius ";
	cin>>r;
	cout<<"enter your chioce ";
	cin>>choice;
	if(choice==1){
		area=r*r*3.141;
		cout<<"area of circle "<<area<<endl;
	}
	else if(choice==2){
		circum=2*3.14*r;
		cout<<"circumference of circle "<<circum<<endl;
	}
	else{
		cout<<"invalid choice ";
	}
	return 0;
}
