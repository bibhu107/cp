#include <bits/stdc++.h>
using namespace std;
int main(){
	int n , k;
	cin >> n >> k;
	int a;
	int sum = 0;
	int ans = 0;
	int tempn = n;
	while(n--){
		cin >> a;
		sum = sum + a;
	}
	n = tempn;
	int avg = sum / n ;
	float avg2 =(float)sum/n;
	float dif = avg2 - avg;
	if(dif >= 0.5){
		avg = avg + 1;
	}
	//cout<<avg <<" "<<dif<<" "<<avg2<<" "<< sum <<" "<< n<<endl;
	while(avg < k){
		ans++;
		sum  = sum + k;
		avg = sum / ++n;
		avg2 =(float) sum / n;
		dif = avg2 - avg;
		if(dif >= 0.5)
			avg = avg+1;

	}
	cout<<ans<<endl;
}