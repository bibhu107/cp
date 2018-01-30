// #include <bits/stdc++.h>
// using namespace std;

// 	vector<string> create_strings(string s,int i)
// 	{	
// 		  std::vector<string> v;
// 		  for(int j= i;j<s.size();j++)
//   		  v.push_back(s.substr(i,s.size()-j));
//   		return(v);
			    
	
// 	}

// int main()
// {
// 	int t,k;
// 	string s;
// 	std::vector<string> v;
// 	std::vector<string>final;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>s;
// 		int arr[s.size()];
// 		cin>>k;
	
// 		for(int i=0;i<s.size();i++)
// 		{
			
// 			v=create_strings(s,i);
// 			for(int j=0;j<v.size();j++)
// 			final.push_back(v[i]);
// 		}
// 		 sort(final.begin(),final.end());


// 		 // for(int i=0;i<final.size();i++)
// 		 // 	cout<<final[i];


// }
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    int t;
    cin>>t;
    while(t--)
	 {
	    cin >> s;
	    cin>>k;
	    vector<string> v;
	    vector<char> f;
	    for(int i = 0; i < s.size();i++)
	    {	int r=s.size()-i;
	    	while(r>0)
	        {
	        	v.push_back(s.substr(i,r));
	        	r--;
	        }
	    }
	    sort(v.begin(),v.end());
	    for(int i = 0; i < v.size();i++)
	    {
	    	string temp=v[i];
	        for(int j=0;j<temp.size();j++)
	        	f.push_back(temp[j]);
	    }
	    // for(int i=0;i<f.size();i++)
	    // 	cout<<f[i];
	cout<<f[k-1];
	}
	    
}
