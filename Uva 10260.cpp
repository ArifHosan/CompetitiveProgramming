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
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i,len;
    char in[20];
    while(scanf("%s", in)==1){
        len=strlen(in);
        for(i=0;i<len;i++) {
            if(in[i]=='B' || in[i]=='F' || in[i]=='P' || in[i]=='V') in[i]='1';
            if(in[i]=='C' || in[i]=='G' || in[i]=='J' || in[i]=='K') in[i]='2';
            if(in[i]=='Q' || in[i]=='S' || in[i]=='X' || in[i]=='Z') in[i]='2';
            if(in[i]=='D' || in[i]=='T') in[i]='3';
            if(in[i]=='L') in[i]='4';
            if(in[i]=='M' || in[i]=='N') in[i]='5';
            if(in[i]=='R') in[i]='6';
        }
        //cout<<in<<endl;
        if(T::isNum(in[0])) printf("%c", in[0]);
        for(i=1;i<len;i++) {
            if(T::isNum(in[i]) && in[i]!=in[i-1])
                printf("%c", in[i]);
        }
        printf("\n");
    }
	return 0;
}
