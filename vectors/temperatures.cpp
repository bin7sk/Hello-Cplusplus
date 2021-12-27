#include<iostream>
#include<vector>
#include<algorithm>
int main(void){
	using namespace std;
	// read some temperatures into a vector
	vector<double> temps;
	for(double temp;cin>>temp;)
		temps.push_back(temp);
	//compute mean
	double sum = 0;
	for(double x:temps) sum +=x;
	cout<<"Average temperature: "<<sum/temps.size()<<'\n';
	//compute median
	sort(temps.begin(), temps.end());
	cout<<"Median:"<<temps[temps.size()/2]<<'\n';
	return 0;
}
