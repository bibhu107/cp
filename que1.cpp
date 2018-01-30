#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int ONE = 0;
	int ZERO = 0;

	for(int i = 0 ; i< s.size() ; i++)
	{
		if(s[i] == '1')
			ONE++;
		else
			ZERO++;
	}
	int fp = -1;
	int lp = -1;
	char wanted ='0';
	if(ONE == s.size() || ZERO == s.size()){
		cout << 0 << endl;
		return(0);
	}
	if(ZERO == ONE)
	{
		cout<<s.size()<<endl;
		return(0);
	}
	if(ZERO < ONE)
		wanted = '1';
	if(ZERO < ONE){
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == '0'){
				if(fp == -1)
					fp = i;
				lp = i;
			}
		}
	}
	else{
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == '1'){
				if(fp == -1)
					fp = i;
				lp = i;
			}
		}
	}

	int count = 0;
	//cout<<fp<<" "<<lp<<endl;
	for(int i = fp ; i <= lp ;i++){
		if(s[i] == wanted)
			count++;
	}
	//cout << count <<" "<< lp-fp+1<<endl;
	if(count == 0){
		cout << 2*(lp-fp+1)<<endl;
	}
	else if(count <=(lp-fp+1-count ) ){
		cout << 2*(lp-fp+1) -2*count<<endl;
	}
	else{
		int ans,ans1;
		int nonwanted = lp-fp+1 - count;
		// cout<<nonwanted<<endl;
		int count2 = count;
		int nonwanted2 = nonwanted;
		for(int  i = lp ; i>= fp ; i--){
			if(count == nonwanted){
				ans = count;
				break;
			}
			else{
				if(s[i] == wanted){
					count--;
				}
				else
					nonwanted--;
			}
		}
		count = count2;
		nonwanted = nonwanted2;
		for(int  i = fp ; i<= lp ; i++){
			if(count == nonwanted){
				ans1 = count;
				break;
			}
			else{
				if(s[i] == wanted){
					count--;
				}
				else
					nonwanted--;
			}
		}


		cout<<max(ans,ans1)*2;
	}
}