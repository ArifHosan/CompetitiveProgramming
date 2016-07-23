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
int G[110][110], taken[110], take[110], ind[110];
int main() {
    //bool first=1;
    //R(); W();
    int N,M,i,j,k, m_i;
    string bev1,bev2;
    map<string,int> M1;
    while(sfi(N)==1) {
        M1.clear();
        m_i=1;
        FOR(i,0,N) {
            cin>>bev1;
            if(!M1.count(bev1)) M1[bev1]=m_i++;
        }
        memset(ind,0,sizeof(ind));
        memset(G,0,sizeof(G));
        sfi(M);
        FOR(i,0,M) {
            cin>>bev1>>bev2;
            //cout<<bev1<<' '<<bev2<<endl;;
            int u=M1[bev1];
            int v=M1[bev2];
            //cout<<u<<' '<<v<<endl;
            if(!G[u][v]) ind[v]++;
            G[u][v]=1;
        }
        memset(taken,0,sizeof(taken));
        memset(take,0,sizeof(take));
        /*FOR(i,1,m_i) {
            FOR(j,1,m_i) {
                cout<<G[i][j];
            }
            pfl();
        }*/
        FOR(i,1,m_i) {
            FOR(j,1,m_i) {
                if(!ind[j] && !taken[j]) {
                    //cout<<i<< ' '<<j<<endl;
                    taken[j]=1;
                    take[i]=j;
                    FOR(k,1,m_i) {
                        if(G[j][k]) ind[k]--;
                    }
                    break;
                }
            }
        }
        printf("Case #%d: Dilbert should drink beverages in this order:",caseno++);
        map<string,int>::iterator it;
        FOR(i,1,m_i) {
            for(it=M1.begin(); it!=M1.end(); it++) {
                if(it->second==take[i]) {
                        pfs();
                        pf1(it->first);
                }
            }
            //cout<<take[i]<< ' ';
        }
        pf1(".\n");
        pfl();
    }

	return 0;
}
