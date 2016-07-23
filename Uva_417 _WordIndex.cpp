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
    int i,j,k,l,m,n;
    char key[] = "0abcdefghijklmnopqrstuvwxyz";
    key[0]=0;
    string A;
    int c=1;
    map<string,int> word;

    for(i=0;i<27;i++){
        if(i==0) j=0;
        else j=i+1;

        for(j;j<27;j++) {
            if(j==0) k=0;
            else k=j+1;

            for(k;k<27;k++) {
                if(k==0) l=0;
                else l=k+1;

                for(l;l<27;l++) {

                    for(m=l+1;m<27;m++) {
                        if(i) A+=key[i];
                        if(j) A+=key[j];
                        if(k) A+=key[k];
                        if(l) A+=key[l];
                        A+=key[m];
                        //A+='\0';
                        word[A]=c++;
                        //cout<<A<<' '<<c<<' '<<word[A]<<endl;;
                        //getchar();
                        A.clear();
                    }
                }
            }
        }
    }
    char in[10];
    while(scanf("%s", in)!=EOF) cout<<word[in]<<endl;
	return 0;
}
