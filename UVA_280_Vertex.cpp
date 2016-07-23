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
bool G[110][110];
int main() {
    //R(); W();
    int i,j,k,N,M,u,v;
    while(sfi(N)==1) {
        if(N==0) break;
        memset(G,0,sizeof(G));
        while(1) {
            sfi(u);
            if(u==0) break;
            while(1) {
                sfi(v);
                if(v==0) break;
                G[u][v]=1;
            }
        }
        /*FOR(i,1,N+1) {
            FOR(j,1,N+1) {
                cout<<G[i][j];
            }
            pfl();
        }*/
        int x;
        sfi(x);
        int access[110];
        FOR(i,0,x) {
            memset(access,0, sizeof(access));
            queue<int>Q;
            sfi(u);
            Q.push(u);
            while(!Q.empty()) {
                int uu=Q.front(); Q.pop();
                FOR(j,1,N+1) {
                    if(G[uu][j] && !access[j]) {
                        access[j]=1;
                        Q.push(j);
                    }
                }
            }
            /*FOR(j,1,N+1) {
                if(G[u][j]) access[j]=1;
            }
            FOR(j,1,N+1) {
                if(G[u][j]) {
                    FOR(k,1,N+1) {
                        if(G[i][k]) access[k]=1;
                    }
                }
            }*/
            int c=0;
            FOR(j,1,N+1) {
                if(access[j]==0) c++;
            }
            cout<<c;
            if(c) {
                FOR(j,1,N+1) if(access[j]==0) cout<<' '<<j;
            }
            pfl();
        }

    }
	return 0;
}
