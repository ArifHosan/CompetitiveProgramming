/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
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

int m,n;
int vis[101][101];
string G[101];
int dir_arr[]={-1,0,1};

bool valid(int x,int y) {
    if(x<0 || x>=m) return  false;
    if(y<0 || y>=n) return false;
    return G[x][y] == '@';
}

void DFS(int i,int j){
    vis[i][j]=1;
    int x,y;
    FOR(x,0,3) {
        FOR(y,0,3) {
            if(valid(i+dir_arr[x],j+dir_arr[y]) && vis[i+dir_arr[x]][j+dir_arr[y]]==0)
                DFS(i+dir_arr[x],j+dir_arr[y]);
        }
    }
    vis[i][j]=2;
}

int main() {
    //RW;
    while(SFII(m,n)==2 && m && n) {
        MEM(vis,0);
        int i,j;
        FOR(i,0,m) {
            cin>>G[i];
        }
        int c=0;
        FOR(i,0,m) {
            FOR(j,0,n) {
                if(G[i][j]=='@' && vis[i][j]==0) {
                    //cout<<i<<' '<<j<<endl;
                    DFS(i,j);
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }
    return 0;
}


