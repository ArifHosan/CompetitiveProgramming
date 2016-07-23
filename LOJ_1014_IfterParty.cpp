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
bool _P[SIZE];
void primeSieve() {
	//for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=sqrt(SIZE);i++ ) {
        if(_P[i]==0) {
            for(int j=2*i;j<=SIZE;j+=i) _P[j]=1;
        }
    }
}

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
    int T,P,L;
    primeSieve();
    sfi(T);
    while(T--) {
        sfi(P); sfi(L);
        P=P-L;
        int i=1;
        vector<int>div;
        if(P==0 && L==0) div.push_back(1);
        else if(P==1 && L<1) div.push_back(1);
        else {
            div.push_back(P);
            div.push_back(1);
        }
        FOR(i,2,sqrt(P)+1) {
            if(P%i==0) {
                div.push_back(P/i);
                div.push_back(i);
            }
        }
        sort(div.begin(), div.end());
        bool f=1,s=0;
        CP();
        if(div.size()>0 && div[0]>L) {
                printf("%d", div[0]);
                f=0; s=1;
        }
        for(i=1;i<div.size();i++) {
            if(div[i]>L) {
                if(s) pfs();
                if(!s) s=1;
                printf("%d", div[i]);
                f=0;
            }
        }
        if(f) pf1("impossible");
        pfl();
    }
	return 0;
}
