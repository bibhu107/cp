#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	int count = 0;
	int hr,mm;
	cin >> x;
	cin >> hr >> mm;
	if(hr == 7 || hr == 17 || mm == 7 || mm == 17 || mm == 27 || mm == 37 || mm == 47 || mm == 57){
		cout<<0<<endl;
		return(0);
	}
	else{
		while((hr != 7  && hr != 17 && mm != 7 && mm != 17 && mm != 27 && mm != 37 && mm != 47 && mm != 57)){
			count++;
			// cout<<hr<<":"<<mm<<endl;
			int p = mm- x;
			if(p >= 0 )
				mm = mm - x;
			else if(p < 0){
				mm = 59 + (mm - x)+1;
				hr = hr - 1;
				if(hr < 0)
					hr = 23 + hr + 1;
			}
			
		}
	}
	// cout<<hr<<":"<<mm<<endl;
	cout<<count<<endl;
}