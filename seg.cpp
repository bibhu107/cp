#include <bits/stdc++.h>
#define ll long long int
const int N = 1e5+5;
int A[N];
int tree[N];
using namespace std;
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
int main()
{
	ll n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cin>>m;
	build(1, 0, n-1);
	// while(m--)
	// {

	// }
    for(int i=1;i<2*n;i++)
       cout<<tree[i]<<" ";
    cout<<endl;

}