#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	vector<int> v;
	vector<int> v2;
	int arr[1000+5]={0};
	int a;
	for(int i = 1 ; i<= n-1 ;i++){
		cin >> a;
		v.push_back(a);
	}
	for(int i = 0 ; i < v.size() ; i++){
		arr[v[i]] = 1;
	}
	for(int i = 0 ; i < 10000 ; i++)
	 v2.push_back(0);
	for(int i = 0 ; i < v.size() ;i++){
		if(arr[i+2]== 0){
			// cout << arr[i+2]<<endl;
			v2[v[i]]++;
		}

	}
	for(int i = 0 ; i<v2.size() ; i++)
	{
		if(v2[i] <3 && v2[i] !=0){
			cout<<"No"<<endl;
			return(0);
		}

	}
	cout<<"Yes"<<endl;
}