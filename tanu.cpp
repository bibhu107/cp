#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t,n;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int tanu = 0;
		int manu = 0;
		int arr[n+10];
		int count = 0;
		for(int i = 1 ; i <= n ; i++){
				if(s[i-1] == '1')
					arr[i]= 1;
				else
					arr[i]=0;
			}
		int prev = arr[1];
		if(arr[1] == 0)
			manu+=5;
		else
			tanu+=5;
		count = 1;
		
		for(int i = 2 ; i <= n ; i++){
			if(arr[i] == 1){
				if(prev == 1)
					count++;
				else
					{
						count = 1;
						prev = 1;
					}
				if(count == 5){
					tanu = tanu+15;
					manu = manu-5;
				}
				else{
					tanu = tanu + 5;
				}
				
			}
			else{
				if(prev == 0)
					count++;
				else{
					count = 1;
					prev = 0;
				}
				if(count == 5){
					manu = manu + 15;
					tanu = tanu - 5;
				}
				else{
					manu = manu + 5;
				}
			
			}
		}
		if(tanu > manu)
			cout << "Tanu"<<endl;
		else if(manu > tanu)
			cout << "Manu"<<endl;
		else
			cout<<"Draw"<<endl;

		
	}
}