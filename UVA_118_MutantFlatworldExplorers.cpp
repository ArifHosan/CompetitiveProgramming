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
    int dx[]={0,0,1,-1}, dy[]={1,-1,0,0},d_i;
    char dd[]="NSEW";
    int G[51][51],x,y,c_x,c_y;
    int i,j;
    char d;
    string ins;
    memset(G,0,sizeof(G));
    sfi(x); sfi(y);
    while(sfi(c_x)==1) {
        sfi(c_y);
        cin.ignore();
        sfc(d);
        FOR(d_i,0,4) if(dd[d_i]==d) break;
        cin>>ins;
        //cout<<ins<<endl;
        bool lost=0;
        FOR(i,0,ins.size()) {
            if(ins[i]=='F') {
                int n_x=c_x+dx[d_i];
                int n_y=c_y+dy[d_i];
                if(n_x<0 || n_y<0 || n_x>x || n_y>y) {
                    if(G[c_x][c_y]==0) {
                        G[c_x][c_y]=1;
                        lost=1;
                        break;
                        //c_x=n_x;
                        //c_y=n_y;
                    }
                }
                else {
                    c_x=n_x;
                    c_y=n_y;
                }
            }
            else {
                if(ins[i]=='R') {
                    if(d_i==0 || d_i==1) d_i+=2;
                    else if(d_i==2) d_i--;
                    else d_i=0;
                }
                else {
                    if(d_i==3 || d_i==2) d_i-=2;
                    else if(d_i==1) d_i++;
                    else d_i=3;
                }
            }
        }
        cout<<c_x<<' '<<c_y<<' '<<dd[d_i];
        if(lost) cout<<' '<<"LOST";
        pfl();


    }
	return 0;
}
