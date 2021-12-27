#include<iostream>
#include<vector>
#include<algorithm>

int main(void){
	using namespace std;
	vector<string> words;
	for(string tmp;cin>>tmp;)
		words.push_back(tmp);
	sort(words.begin(),words.end());
	for(int i =0; i<words.size();i++){
		if(i==0||words[i-1]!=words[i])
			cout<<words[i]<<'\n';
	}		
	return 0;
}
