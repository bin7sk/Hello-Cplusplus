#include<iostream>
#include<vector>
int main(void){
	using namespace std;
	//creating vectors
	vector<int> vect = {1,2,3,4,5,6,7,8,9};
	vector<string> names = {"John", "Robert", "Alex"};
	cout<<"Hello, "<<names[2]<<endl;

	//traversing a vector
	for(int i=0;i<vect.size();i++)
		cout<<vect[i]<<' ';
	cout<<'\n';
	//way of traversing a vector
	for(int x:vect)
		cout<<x<<' ';
	cout<<'\n';
	
	//push_back
	vect.push_back(10);
	for(int x:vect)
		cout<<x<<' ';
	cout<<endl;



}
