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
	static inline void toLowerString(char *s);
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
inline void T::toLowerString(char *s) {
    int i,l=strlen(s);
    FOR(i,0,l) toLower(s[i]);
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
    R(); W();
    int T,i,m,n,j,w_i,x;
    char in[55][55], word[55];
    sfi(T);
    while(T--){
        sfi(m); sfi(n);
        FOR(i,0,m) {
            scanf("%s", in[i]);
            for(j=0;in[i][j]!='\0';j++) in[i][j]=T::toLower(in[i][j]);
            //T::toLowerString(in[i]);
        }
        FOR(i,0,m)
            cout<<in[i]<<endl;
        sfi(x);
        int x_i;
        FOR(x_i,0,x) {
            scanf("%s",word);
            int l_w=strlen(word);
            FOR(j,0,l_w) word[j]=T::toLower(word[j]);
            //T::toLowerString(word);
            //pf1(word); pfl();
            bool found =0;
            w_i=0; int t_i,t_j;
            FOR(i,0,m) {
                FOR(j,0,n) {
                    if(in[i][j]==word[0]) {
                        //pf1(in[i]);
                        pf1(i); pfs(); pf1(j); pfl();
                        t_i=i; t_j=j;
                        //Search right
                        while(!found) {
                            if(in[t_i][t_j]=='\0' || j>=n) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i][t_j]!=word[w_i]) break;
                            t_j++; w_i++;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search left
                        while(!found) {
                            if(t_j<0) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i][t_j--]!=word[w_i++]) break;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search Up
                        while(!found) {
                            if(t_i<0) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i--][t_j]!=word[w_i++]) break;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search down
                        while(!found) {
                            if(in[i][j]=='\0' || i>=m) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i++][t_j]!=word[w_i++]) break;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search LeftDown
                        while(!found) {
                            if(in[i][j]=='\0' || i>=m || j<0) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i++][t_j--]!=word[w_i++]) break;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search RightDown
                        while(!found) {
                            cout<<"YES"<<endl;
                            if(in[i][j]=='\0' || t_i>=m || t_j>=n) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i][t_j]!=word[w_i]) break;
                            t_i++; t_j++; w_i++;
                            cout<<found<<endl;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search RightUp
                        while(!found) {
                            if(in[i][j]=='\0') break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i--][t_j++]!=word[w_i++]) break;
                        }
                        if(found) break;
                        else {
                            t_i=i; t_j=j;
                            w_i=0;
                        }
                        //Search LeftUp
                        while(!found) {
                            if(in[i][j]=='\0' || i<0 || j<0) break;
                            if(word[w_i]=='\0') found=true;
                            if(in[t_i--][t_j--]!=word[w_i++]) break;
                        }
                        if(found) break;
                    }
                }
                if(found) break;
            }
            pf1(i+1); pfs(); pf1(j+1);
            pfl();
        }
        if(T) pfl();
    }
	return 0;
}
