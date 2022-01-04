#include<iostream>
#include<vector>
// program is written to make 'out_of_range' error while traversing a vector
int main(){
	using namespace std;
	try{
		vector<int> v;
		for(int x; cin>>x;)
			v.push_back(x);
		for(int i=0; i<=v.size();i++){
			cout<<"v["<<i<<"] = "<<v[i]<<endl;
		}
	}
	catch(out_of_range){
		cerr<<"Out of range of vector\n";
		return 1;
	}
	catch(...){
		cerr<<"undefined error\n";
		return 1;
	}
	return 0;

}
