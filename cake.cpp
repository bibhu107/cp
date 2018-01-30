#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,avg,plates11, plate12;
	vector<int> v;
	cin >> n;
	cin >> a >> b;
	

	float plates1 = ( (a * n) / ( a + b) ) ;
	int lowePlate = ( (a * n) / ( a + b) ) ;
	int upper = lowePlate + 1;

	float d1 = plates1 - lowePlate;
	float d2 = upper - plate1;

	if(d1 > d2)
		plate11 = upper;
	else
		plate11 = lower;

	int rem = (a* n) % (a + b) ;

	int plates2 = n - plates1;
	int avg1 = a/plates1;
	int avg2 = b/plates2;
	if(avg1 < avg2)
		avg = avg1;
	else
		avg = avg2;
	
	cout << avg;

} 