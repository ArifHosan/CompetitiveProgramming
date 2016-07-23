#include<iostream>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case #%d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define sfi(_i) scanf("%d",&_i)
#define sfc(_c) scanf("%c",&_c)
#define pf1(_i) cout<<_i
#define pfl() cout<<endl
#define pfs() printf(" ")
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;
#define SZ 20010
#define MX 1<<30
int N,E,S,D;
int G[SZ][SZ], dis[SZ];
void dij(int);
int main() {
    R(); W();
    int i,j,u,v,w,T;
    sfi(T);
    while(T--) {
        memset(G,-1,sizeof(G));
        //memset(dis,MX,sizeof(dis));
        FOR(i,0,SZ) dis[i]=MX;
        sfi(N); sfi(E);
        sfi(S); sfi(D);
        FOR(i,0,E) {
            sfi(u); sfi(v); sfi(w);
            G[u][v]=w;
            G[v][u]=w;
        }
        dij(S);
        CP();
        if(dis[D]!=MX) cout<<dis[D]<<endl;
        else cout<<"unreachable"<<endl;
    }

	return 0;
}

void dij(int s) {
    dis[s]=0;
    pair<int,int> nd;
    priority_queue<pair<int,int> >PQ;
    nd.first=0;
    nd.second=s;
    PQ.push(nd);
    while(!PQ.empty()) {
        nd=PQ.top();
        PQ.pop();
        int v,u=nd.second;
        //cout<<u<<endl;
        FOR(v,0,N) {
            if(G[u][v]>=0 && dis[v]>dis[u]+G[u][v]) {
                dis[v]=dis[u]+G[u][v];
                nd.first=-dis[v];
                nd.second=v;
                PQ.push(nd);
            }
        }
    }
}
