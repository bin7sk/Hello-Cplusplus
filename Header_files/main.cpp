#include "./headers/head.h"
/*
Program that finds least common multiple
consist of 2 .cpp file and 1 header file
*/
int main(void){
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	
	try{
		cout<<find_least_common_multiple(a, b)<<endl;
	}
	catch(bad_arguments){
		cerr<<"Bad arguments!\n"
				"Try again\n";
		return 1;

	}
	return 0;
}

