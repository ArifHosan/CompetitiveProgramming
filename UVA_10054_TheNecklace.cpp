/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case #%d\n",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

int G[1001][1001];
int N,t;
int vis[1001],dis[1001];

void DFS(int i){
    vis[i]=1;
    dis[t++]=i;
    if(G[i][i]==1) dis[t++]=i;
    //cout<<t<<' '<<i<<endl;
    int j;
    FOR(j,1,N+1) {
        if(G[i][j] && !vis[j]) {
            DFS(j);
        }
    }
    vis[i]=2;
}

int main() {
    RW;
    int T,i,x,y;;
    SFI(T);
    while(T--) {
        t=0;
        MEM(vis,0);
        MEM(dis,0);
        MEM(G,0);

        SFI(N);
        FOR(i,0,N) {
            SFI(x); SFI(y);
            G[x][y]=1; G[y][x]=1;
        }
        DFS(x);
        //cout<<G[dis[N-1]][x]<<endl;
        if(!G[dis[N-1]][x])
            printf("some beads may be lost\n");
        else {
            printf("%d %d\n",dis[0],dis[1]);
            FOR(i,1,N-1)
                printf("%d %d\n",dis[i],dis[i+1]);
            printf("%d %d\n",dis[N-1],dis[0]);
        }
    }
	return 0;
}
