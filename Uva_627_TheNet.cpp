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
#include<sstream>
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
    int n,i,j,k,m;
    string st;
    vector<int> G[310];
    int vis[310],level[310], parent[310];
    while(sfi(n)==1) {
        FOR(i,0,310) G[i].clear();
    cin.ignore();
    //cout<<n<<endl;
    FOR(i,0,n) {
        cin>>st;
        //cout<<st<<endl;
        stringstream ss(st);
        int xx,xy=0;
        char cx;
        ss>>xx;
        ss>>cx;
        //cout<<xx<<endl;
        while(ss) {
            ss>>xy>>cx;
            //cout<<xy<<endl;
            if(xy!=0)
                G[xx].push_back(xy);
            xy=0;
        }
    }
    sfi(m);
    int p_x=-1,x,y;
    printf("-----\n");
    FOR(i,0,m) {
        sfi(x); sfi(y);
        queue<int>Q;
        if(p_x!=x) {
            p_x=x;
            Q.push(x);
            memset(vis,0,sizeof(vis));
            memset(level,-1,sizeof(level));
            memset(parent,-1,sizeof(parent));
            vis[x]=1;
            level[x]=0;
            parent[x]=-1;
            while(!Q.empty()) {
                x=Q.front();
                FOR(k,0,G[x].size()) {
                    int nx=G[x][k];
                    if(vis[nx]==0) {
                        level[nx]=level[x]+1;
                        parent[nx]=x;
                        vis[nx]=1;
                        Q.push(nx);
                    }
                }
                vis[x]=2;
                Q.pop();
            }
        }
        if(level[y]>0) {
            stack<int> S;
            S.push(y);
            int pp=parent[y];
            S.push(pp);
            while(parent[pp]>=0) {
                pp=parent[pp];
                S.push(pp);
            }
            printf("%d",S.top()); S.pop();
            while(!S.empty()) {
                printf(" %d", S.top());
                S.pop();
            }
            pfl();
        }
        else if(level[y]==0) printf("%d\n",y);
        else printf("connection impossible\n");
    }
}
	return 0;
}
