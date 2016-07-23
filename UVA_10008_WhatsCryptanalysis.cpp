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

struct csort{
    char cx;
    int ix;
}ST[26];

bool myCmp(csort A,csort B) {
    if(A.ix==B.ix) return A.cx<B.cx;
    return A.ix>B.ix;
}

int main() {
    R(); W();
    int T,i;
    int k[30];
    sfi(T);
    memset(k,0,sizeof(k));
    string s;
    cin.ignore();
    while(T--) {
        getline(cin,s);
        //cout<<s<<endl;
        FOR(i,0,s.size()) {
            if((s[i]>=65 && s[i]<=90) ||(s[i]>=97 && s[i]<=122)) {
                char x=s[i];
                if(x>90) x-=32;
                x-=65;
                k[x]++;
            }
        }
    }
        int st_i=0;
        FOR(i,0,30) {
            if(k[i]) {
                ST[st_i].cx=i+65;
                ST[st_i].ix=k[i];
            }
            st_i++;
        }
        sort(ST,ST+26,myCmp);
        for(i=0;i<26;i++) {
            if(ST[i].ix) cout<<ST[i].cx<<' '<<ST[i].ix<<endl;
        }


	return 0;
}
