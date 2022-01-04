#include<iostream>
class bad_arguments{};
int area(int length, int width){
	if(length<0 || width<0) throw bad_arguments{};
	return length*width;
}
int main(void){
	using namespace std;
	int a,b;
	cout<<"Enter length: ";
	cin>>a;
	cout<<"Enter width: ";
	cin>>b;
	try{
		cout<<"area = "<<area(a,b)<<endl;
	}
	catch(bad_arguments){
		cerr<<"\nimproper arguments\n";
	}
	return 0;
}
