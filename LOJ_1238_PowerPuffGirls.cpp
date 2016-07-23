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
#define CP() printf("Case %d: ",caseno++)
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

int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
int c=0;
queue<int> X,Y;
int vis[21][21];
int depth[21][21];
string M[21];
void BFS(int m,int n) {
    c=0;
    int i,ux,nx,uy,ny;
    while(!X.empty()) {
        //cout<<X.size()<<endl;
        ux=X.front(); X.pop();
        uy=Y.front(); Y.pop();
        FOR(i,0,4) {
            nx=ux+dx[i]; ny=uy+dy[i];
            if(nx>=0 && ny>=0 && nx<m && ny<n && vis[nx][ny]!=2 && M[nx][ny]!='#' && M[nx][ny]!='m') {
                X.push(nx); Y.push(ny);
                vis[nx][ny]=1;
                depth[nx][ny]=depth[ux][uy]+1;
                if(M[nx][ny]=='h') {
                    c=depth[nx][ny];
                    break;
                }
            }
        }
        vis[ux][uy]=2;
    }
}

int main() {
    //R(); W();
    int i,j,m,n,T;
    int ppx[4], ppy[4];
    sfi(T);
    while(T--) {
        sfi(m); sfi(n);
        FOR(i,0,m) {
            cin>>M[i];
            FOR(j,0,n) {
                if(M[i][j]=='a'){
                    //cout<<i<<endl;
                    ppx[0]=i;
                    ppy[0]=j;
                }
                if(M[i][j]=='b'){
                    ppx[1]=i;
                    ppy[1]=j;
                }
                if(M[i][j]=='c'){
                    ppx[2]=i;
                    ppy[2]=j;
                }
            }
        }
        //cout<<ppx[0]<<" "<<ppy[0]<<endl;
        int MAX=-1;
        FOR(i,0,3){
            while(!X.empty()) X.pop();
            while(!Y.empty()) Y.pop();
            memset(vis,0, sizeof(vis));
            memset(depth,0,sizeof(depth));
            X.push(ppx[i]); Y.push(ppy[i]);
            vis[ppx[i]][ppy[i]]=1; depth[ppx[i]][ppy[i]]=0;
            BFS(m,n);
            //pf1(c); pfs();
            if(c>MAX) MAX=c;
        }
        CP(); pf1(MAX); pfl();
    }
	return 0;
}
