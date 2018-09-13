#include <iostream>

using namespace std;

int GCD(int x,int y){
	
	if(y==0){
		return x;
	}
	else{
		
		return(GCD(y, x%y));
		
	}
	
}


int main() {
	
	int a,b;
	
	cout<<"Please enter the first number"<<endl;
	cin>>a;
	
	cout<<"please enter the second number"<<endl;
	cin>>b;
	
	cout<<"The GCD is :"<<GCD(a,b)<<endl;
	
	


	return 0;
}
