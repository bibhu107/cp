#include <bits/stdc++.h>
using namespace std;
const int N=510,M=1e5+10;
vector<int> e[N];
int n,m,U[M],V[M],q[N],deg[N],size;
bool check(int u,int v){
    for (int i=1;i<=n;i++) deg[i]=0,e[i].clear();
    for (int i=1;i<=m;i++)
    if (U[i]!=u||V[i]!=v){
        e[U[i]].push_back(V[i]);
        deg[V[i]]++;
    }
    size=0;
    for (int i=1;i<=n;i++)
    if (!deg[i]) q[++size]=i;
    for (int i=1;i<=size;i++){
        int x=q[i];
        for (auto v:e[x])
        if (!--deg[v]) q[++size]=v;
    }
    return size==n;
}
bool ins[N],vis[N];int fa[N];
void findcir(int x){
    ins[x]=vis[x]=1;
    for (auto v:e[x])
    if (ins[v]){
        if (check(x,v)) puts("YES"),exit(0);
        for (int i=x;i!=v;i=fa[i])
        if (check(fa[i],i)) puts("YES"),exit(0);
        puts("NO");exit(0);
    }
    else if (!vis[v]) fa[v]=x,findcir(v);
    ins[x]=0;
}
int main()
{
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++){
		scanf("%d%d",&U[i],&V[i]);
		e[U[i]].push_back(V[i]);
	}
	for (int i=1;i<=n;i++)
	if (!vis[i]) findcir(i);
	puts("YES");
	return 0;
}