#include <bits/stdc++.h>
using namespace std;
vector< pair <int,int> > v[12345];
bool vis[12345];
int level[12345];
std::map<int, int> mp;

int main()
{
	int n,a,b,c;
	cin>>n;
	for(int i=1;i<=n-1;i++){
	cin>>a>>b>>c;
	v[a].push_back(make_pair(b,c));
	v[b].push_back(make_pair(a,c));
	} 
	queue < pair<int,int> > q;
    q.push(make_pair(1,0));
    level[ 1] = 0 ;  //Setting the level of the source node as 0
    vis[1] = true;
    mp[1]=0;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ].first] == false)
                {
            //Setting the level of each node with an increment in the level of parent node
                    //level[ v[ p ][ i ].first ] = level[ p ]+1; 
                    cout<<  v[ p ][ i ].first<<" "<< v[ p ][ i ].second<<endl;              
                     q.push(make_pair(v[ p ][ i ].first,);
                     mp[1]=mp[1]+q.second+v[p][i].second;
                     vis[ v[ p ][ i ].first] = true;
    			  }
            }
        }

        cout<<endl<<mp[1];


}