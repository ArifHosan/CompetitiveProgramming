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
#define valid(_x,_y) _x>=0 && _x<R && _y>=0 && _y<C
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
int visF[210][210];
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
string G[210];
int vis[201][201],fire[210][210],lvl[210][210];
int R,C;
void BFS(int i,int j);

int main() {
    //R(); W();
    int T,i,j,k,x,y,nx,ny;
    sfi(T);
    while(T--) {
        sfi(R); sfi(C);
        FOR(i,0,R) cin>>G[i];
        memset(fire,-1, sizeof(fire));
        memset(vis,0, sizeof(vis));
        memset(lvl,-1, sizeof(lvl));
        memset(visF,0, sizeof(visF));
        FOR(i,0,R) {
            FOR(j,0,C) {
                if(G[i][j]=='F') {
                    BFS(i,j);
                }
                if(G[i][j]=='J'){
                    x=i;y=j;
                }
            }
        }
        bool exit=false;
        queue<int>X,Y;
        if(x==0 || y==0 || x+1==R || y+1==C) {
                exit=true;
                lvl[x][y]=0;
                nx=x; ny=y;
        }
        else {
            X.push(x); Y.push(y);
            vis[x][y]=1;
            lvl[x][y]=0;
        }

        while(!X.empty()) {
            x=X.front(); X.pop();
            y=Y.front(); Y.pop();
            FOR(j,0,4) {
                nx=x+dx[j];
                ny=y+dy[j];
                if(valid(nx,ny) && G[nx][ny]!='#' &&vis[nx][ny]==0 && (fire[nx][ny]<0 || lvl[x][y]+1<fire[nx][ny])) {
                    X.push(nx);
                    Y.push(ny);
                    lvl[nx][ny]=lvl[x][y]+1;
                    vis[nx][ny]=1;
                    if(nx==0 || ny==0 || nx+1==R || ny+1==C) {
                        exit=true;
                        break;
                    }
                }
            }
            if(exit) break;
            vis[x][y]=2;
        }
        CP();
        if(exit) pf1(lvl[nx][ny]+1);
        else pf1("IMPOSSIBLE");
        pfl();
    }
	return 0;
}
void BFS(int i,int j) {
    int x,y,nx,ny;
    queue<int>X,Y;
    X.push(i); Y.push(j);
    visF[i][j]=1;
    fire[i][j]=0;
    while(!X.empty()) {
        x=X.front(); X.pop();
        y=Y.front(); Y.pop();
        FOR(j,0,4) {
            nx=x+dx[j];
            ny=y+dy[j];
            if(valid(nx,ny) && G[nx][ny]!='#' && (visF[nx][ny]==0 || fire[x][y]+1<fire[nx][ny])) {
                X.push(nx);
                Y.push(ny);
                visF[nx][ny]=1;
                fire[nx][ny]=fire[x][y]+1;
            }
        }
        visF[x][y]==2;
    }
}
