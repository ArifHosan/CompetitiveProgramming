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
#define R() freopen("in.txt","r",stdin);
#define W() freopen("out.txt","w",stdout);
using namespace std;

bool P[SIZE];

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
	static inline void primeSieve();
};
inline void T::primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
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
    priority_queue<int>N;
    int n,i,x;
    while(scanf("%d", &n) && n){
        for(i=0;i<n;i++) {
           scanf("%d", &x);
           N.push(x*(-1));
        }
        int c=0;
        while(N.size()>1){
            int a= N.top();
            N.pop();
            a+=N.top();
            N.pop();
            c+=a;
            N.push(a);
        }
        //c+=N.back();
        printf("%d\n", c*(-1));
        while(!N.empty()) N.pop();
    }
	return 0;
}
