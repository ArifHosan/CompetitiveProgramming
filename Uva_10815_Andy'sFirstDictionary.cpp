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
    map<string,int> dic;
    string line;
    int i;
    while(getline(cin,line)){
        /*istringstream ss(line);
        while(!ss.eof()){
            string a;
            getline(ss,a,' ');
            //int l =a.length();
            for(i=0;a[i]!='\0';i++) {
                if(!T::isAlpha(a[i])) {
                    a.erase(a.begin()+i);
                    i--;
                }
                else a[i]=T::toLower(a[i]);
            }
            //cout<<a<<endl;
            if(dic[a]==0) dic[a]=1;
            a.clear();
        }*/
        string w;
        //int wi=0;
        for(i=0;i<line.length();i++) {
            //cout<<line.length()<<' '<<line[i]<<endl;
            if(T::isAlpha(line[i])) w+=T::toLower(line[i]);
            else {
                //wi=0;
                //w[i]='\0';
                if(w.length()) dic[w]=1;
                w.clear();
            }
        }
        if(w.length()) dic[w]=1;
            w.clear();
    }
    for(auto& x:dic){
        cout<<x.first<<endl;
    }
    //map<string,int>::iterator it;
    //for(it=dic.begin();it!=dic.end();it++){
    //    cout<<it->first<<endl;
    //}
	return 0;
}
