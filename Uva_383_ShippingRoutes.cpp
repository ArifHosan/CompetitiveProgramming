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
    int M[31][31],vis[31],level[31];
    int m,n,p,i,j,k,x,y,T,sz;
    map<string,int>C;
    sfi(T);
    string st;
    printf("SHIPPING ROUTES OUTPUT\n\n");
    while(T--) {
        printf("DATA SET  %d\n\n",caseno++);
        int C_i=1;
        memset(M,0,sizeof(M));
        sfi(m); sfi(n); sfi(p);
        FOR(i,0,m) {
            cin>>st;
            C[st]=C_i++;
        }
        FOR(i,0,n) {
            cin>>st;
            x=C[st];
            cin>>st;
            y=C[st];
            M[x][y]=1; M[y][x]=1;
        }
        /*FOR(i,0,7) {
            FOR(j,0,7) {
                cout<<M[i][j]<<' ';
            }
            cout<<endl;
        }*/
        //for(auto& it:C) cout<<it.first<<' '<<it.second<<endl;
        FOR(i,0,p) {
            sfi(sz);
            cin>>st;
            x=C[st];
            cin>>st;
            y=C[st];
            //cout<<x<<' '<<y<<endl;
            memset(vis,0,sizeof(vis));
            memset(level,-1,sizeof(level));
            queue<int>Q;
            Q.push(x);
            vis[x]=1;
            level[x]=0;
            int c=0;
            while(!Q.empty()) {
                x=Q.front(); Q.pop();
                FOR(k,0,31) {
                    if(M[x][k]==1 && (vis[k]==0 || (level[k]>=0 && level[k]<level[x]-1))) {
                        vis[k]=1;
                        level[k]=level[x]+1;
                        Q.push(k);
                        c++;
                        //if(k==y) break;
                    }
                }
                vis[x]=2;
            }
            //if(c==0) pf1("NO");
            //else pf1(c);
            if(level[y]<0) printf("NO SHIPMENT POSSIBLE\n");
            else printf("$%d\n",sz*level[y]*100);
        }
        pfl();

    }
    printf("END OF OUTPUT\n");
	return 0;
}
