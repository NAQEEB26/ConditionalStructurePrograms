#include<iostream>
using namespace std;
int main(){
	int n;
	n=1;
	loop:
	cout<<n<<": C++"<<endl;
	n++;
	if(n<=5) goto loop;
	cout<<"End of program ";
	return 0;
}
