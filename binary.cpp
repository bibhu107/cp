#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long int n;
	vector<int> v;
	cin >> n;
	int k;
	cin >> k;
	if(n >= 2){
		if(n % 2 != 0){
			n = n - 1 ;
			v.push_back(1);
		}
		while(n!= 0){
			unsigned long long int temp = 1;
			while(temp <= n){
				temp = temp * 2;
			}
			temp = temp / 2;
			int d = n/temp;
			n = n - (d*temp);
			for(int i = 0 ; i < d; i++)
				v.push_back(temp);
		}
		sort(v.begin(),v.end());
		// for(int i = 0 ; i < v.size() ; i++)
		// 	cout<<v[i]<<" ";
	}
	k = k - v.size();

	if(k < 0){
		cout<<"No";
		return(0);
	}

	else{
		while(k!= 0){
				int i = v.size() - 1;
				v[i]=v[i]/2;
				v.push_back(v[i]);
				k--;
				sort(v.begin() , v.end());
			}
		}
		for(int i = 0 ; i < v.size() ; i++)
			cout<<v[i]<<" ";
} 