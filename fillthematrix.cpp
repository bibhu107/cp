#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,q;
		cin>>n>>q;

		vector< pair <int,int> > mypair;
		vector<int> value;
		vector< pair <int,int> > firstele;
		vector<int> second;
		vector<int>::iterator ind,third_ind;

		int a,b,ele,ele2,ele3,third;
		for(int i=0;i<q;i++)	
		{
			cin>>a>>b>>ele;
			mypair.push_back(make_pair(a,b));
			value.push_back(ele);
			firstele.push_back(make_pair(a,ele));
			second.push_back(b);
		}

		sort(firstele.begin(),firstele.end());
		sort(mypair.begin(),mypair.end());
		cout<<"here is first"<<endl;
		for(int i=0;i<firstele.size();i++)
			cout<<firstele[i].first<<" ";
		cout<<endl;
		char t='y';

		for(int i=0;i<mypair.size();i++)
		{
			a=mypair[i].first;
			b=mypair[i].second;
			ele=value[i];
			if(a==b && ele!=0)//reflexive
			{
				t='n';
				cout<<"in 36"<<" ";
				cout<<"NO"<<endl;
				break;
			}

			if(a !=	b)
			{
				cout<<"in 46"<<" "<<b<<endl;
				
					if(binary_search(firstele.begin(),firstele.end(),b))
						{
							cout<<"in 49"<<b<<endl;
							 ind=lower_bound(firstele.begin(),firstele.end(),b);
							 cout<<*ind<<endl;
							if(mypair[*ind].second==a)//symmetric
							{
								if(value[i]!=value[*ind])
								{
									t='n';
									cout<<"in 48"<<" ";
			
									cout<<"NO"<<endl;
									break;
								}
			
							}
							else //transitive
							{
								 third=mypair[*ind].second;
								 cout<<"in 64"<<third<<endl;
			
								 third_ind=lower_bound(firstele.begin(),firstele.end(),third);
								 cout<<*third_ind<<endl;
								 cout<<mypair[*third_ind].second<<endl;
								if(mypair[*third_ind].second==a)//transitive
								{
									  ele2=value[*ind];
									  ele3=value[*third_ind];
									if(ele3!=(ele+ele2) || ele3!=(abs(ele-ele2)))
									{	t='n';
										cout<<"in 65"<<" ";
										cout<<"NO"<<endl;
										break;
									}
								}
			
							}
			}
			}
			if(t=='n')
				break;
		}
		if(t=='y')
			cout<<"YES"<<endl;
	}
}