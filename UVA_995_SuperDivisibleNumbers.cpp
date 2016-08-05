/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

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
int base;
bool A[10];
bool isDiv(string s) {
    int rem=0,i;
    FOR(i,0,s.size()) {
        rem*=base;
        rem+=s[i]-48;
        rem=rem%s.size();
    }
    return rem==0;
}

string fn="";
int fl=0;

void rec(string s) {
    if(fl<s.size()) {
        fn=s;
        fl=s.size();
    }
    int i,j;
    REV(i,base-1,0) {
        if(A[i] && isDiv(s+(char)(i+48))) {
            if(s.size()==0 && i==0) continue;
            //cout<<i<< ' '<<isDiv(s+(char)(i+48))<<endl;
            rec(s+(char)(i+48));
        }
    }
}

int main() {
    string S;
    int i;
    while(SFI(base)==1) {
        cin>>S;
        FOR(i,0,S.size()) {
            A[S[i]-48]=1;
        }
        S.clear();
        //cout<<S.size()<<endl;
        rec(S);
        cout<<fn<<endl;
        fn.clear();
        fl=0;
        fill(A,A+10,0);
    }

	return 0;
}
