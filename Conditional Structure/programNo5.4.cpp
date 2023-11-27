#include<iostream>
using namespace std;
int main(){
	int sub1,sub2,sub3;
	float avg;
	cout<<"enter first subject number "<<endl;
	cin>>sub1;
	cout<<"enter second subject number "<<endl;
	cin>>sub2;
	cout<<"enter third subject number "<<endl;
	cin>>sub3;
	avg=sub1+sub2+sub3;
	if(avg=>80){
		cout<<"You are above standard!"<<endl;
		cout<<"Admission granted!"<<endl;
	}
	else{
		cout<<"sorry you are not standrad!"<<endl;
		cout<<"Admission not granted!"<<endl;
}
return 0;
}
