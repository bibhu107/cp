#include<iostream>
using namespace std;
int mark[100005];
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int l;int r;
	l=0; r=n-1;
	while(l<=r)
	{
		if(l == r){
			l++;
			r--;
			continue;
		}
		if(s[l] != s[r]){
			if(s[l] >= s[r]){
				mark[r] = 1;
				s[r] = s[l];
				k--;
			}
			else{
				mark[l] = 1;
				s[l] = s[r];
				k--;
			}
		}
		l++;
		r--;
	}
	if(k < 0){
		cout<<"-1"<<endl;
		return 0;
	}
	l = 0, r = n-1;
	while(l <= r){
		if(l == r){
			if(s[l] < '9' && k >= 1)
				s[l] = '9';
			break;
		} 
		if(s[l] < '9'){
			if(mark[l] == 0 && mark[r] == 0 && k >= 2){
				s[l] = s[r] = '9';
				k -= 2;
			}
			else if((mark[l] == 1 || mark[r] == 1) && k >= 1){
				s[l] = s[r] = '9';
				k--;
			}
		}
		l++;
		r--;
	}
	cout<<s<<endl;
}
