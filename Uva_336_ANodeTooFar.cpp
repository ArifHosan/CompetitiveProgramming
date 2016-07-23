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

class T {
public:
	template<class X> static inline X Sq(X a) {return a*a;}
	template<class X>static inline X Abs(X a) {return a>0 ? a : a*(-1);}
	template<class X>static inline X Max(X a, X b) {return a>b? a:b;}
	template<class X>static inline X Min(X a, X b) {return (a<b)? a:b;}
	template<class X>static inline X Swap(X &a,X &b) {X c=a; a=b; b=c;}
	static inline bool isNum(char c) {return (c>=48 && c<=57);}
	static inline bool isAlpha(char c) {return ((c>=97 && c<=122)||(c>=65 && c<=90));}
	static inline bool isUpper(char c) {return (c>=65 && c<=90);}
	static inline bool isLower(char c) {return (c>=90 && c<=122);}
	static inline int Gcd(int a, int b) {return (b==0)?a:Gcd(b,a%b);}
	static inline long long int Fact(int x) {return (x==1)?x:(x*Fact(x-1));}
	static inline long long int Atoi(char *s);
	static inline char toLower(char c) {return isUpper(c)?c+=32:c;}
	static inline char toUpper(char c) {return isLower(c)?c-=32:c;}
};
/*bool P[SIZE];
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}
*/
inline long long int T::Atoi(char *s) {
    long long int n=0;
    for(int i=0;s[i]!='\0';i++) {
        if(T::isNum(s[i])) {
            n*=10;
            n+=s[i]-48;
        }
    }
    return n;
}

int main() {
    //R(); W();
    int i,j,NC,x,y,S,TTL,M_i=1;
    map<int,int> M;
    //M.clear();
    int G[100][100],level[100],vis[100];
    while(sfi(NC)==1 && NC>0) {
        M.clear();
        M_i=1;
        memset(G,0, sizeof(G));
        FOR(i,0,NC) {
            sfi(x); sfi(y);
            if(M[x]==0) {
                M[x]=M_i++;
                x=M[x];
            }
            else x=M[x];
            if(M[y]==0) {
                M[y]=M_i++;
                y=M[y];
            }
            else y=M[y];
            //cout<<x<<' '<<y<<endl;
            G[x][y]=1; G[y][x]=1;
        }
        /*FOR(i,0,10){
            FOR(j,0,10) pf1(G[i][j]);
            pfl();
        }*/

        while(1) {
            sfi(S); sfi(TTL);
            if(S==0 && TTL==0) break;
            int src=S, ttl=TTL;
            if(M.count(S)!=0) S=M[S];
            else TTL=-1;
            queue<int>Q;
            memset(vis,0,sizeof(vis));
            memset(level,-1,sizeof(level));
            Q.push(S);
            vis[S]=1; level[S]=0;
            while(!Q.empty()) {
                x=Q.front(); Q.pop();
                FOR(j,0,100) {
                    if(G[x][j]==1 && level[x]+1<=TTL && (level[x]+1<level[j] || vis[j]==0 )){
                        vis[j]=1;
                        level[j]=level[x]+1;
                        Q.push(j);
                    }
                }
                vis[x]=2;
            }
            int c=M.size(),cn=0;
            //cout<<M.size();
            /*FOR(i,0,100) {
                if(Node[i]) c++;
            }*/
            FOR(i,0,100) {
                if(level[i]>=0 && level[i]<=TTL) cn++;
                //pf1(i); pfs();
                //pf1(level[i]); pfl();
            }
            c=c-cn;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",caseno++,c,src,ttl);
        }
    }

	return 0;
}
