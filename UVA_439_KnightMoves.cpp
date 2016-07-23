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
int vis[10][10],level[10][10];
int main() {
    //R(); W();
    int dx[]={-2,-2,2,2,1,1,-1,-1}, dy[]={1,-1,1,-1,-2,2,2,-2};
    string a,b;
    int su,sv,du,dv;
    int i,j,k;
    while(cin>>a) {
        cin>>b;
        //cout<<a<<' '<<b<<endl;
        su=a[0]-96;
        sv=a[1]-48;
        du=b[0]-96;
        dv=b[1]-48;
        //cout<<su<< ' '<<sv<<' '<<du<<' '<<dv<<endl;
        queue<int>U,V;
        int u,v;
        memset(vis,0,sizeof(vis));
        memset(level,0, sizeof(level));
        U.push(su); V.push(sv);
        vis[su][sv]=1; level[su][sv]=0;
        while(!U.empty())  {
            u=U.front(); U.pop();
            v=V.front(); V.pop();
            if(u==du && v==dv) break;
            FOR(j,0,8) {
                int nu=u+dx[j];
                int nv=v+dy[j];
                if(nu>0 && nv>0 && nu<9 && nv<9 && vis[nu][nv]==0) {
                    U.push(nu);
                    V.push(nv);
                    level[nu][nv]=level[u][v]+1;
                    vis[nu][nv]=1;
                }
            }
            vis[u][v]=1;
        }
        cout<<"To get from "<<a<<" to "<<b<<" takes " <<level[du][dv]<<" knight moves.\n";

    }
	return 0;
}
