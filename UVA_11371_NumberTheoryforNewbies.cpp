/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
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
long long  Stoi(string s) {
    stringstream ss;
    ss<<s;
    long long i;
    ss>>i;
    return i;
}

int main() {
    //RW;
    string S,S2;
    long long int N,X;
    while(cin>>S) {
        //N=stoi(S);
        sort(S.begin(),S.end());
        S2=S;
        //cout<<S<<endl;
        int i=0;
        if(S[0]=='0') {
            while(S[i]=='0') i++;
            swap(S[i],S[0]);
        }
        //cout<<S<<endl;
        N=Stoi(S);
        reverse(S2.begin(),S2.end());
        //cout<<S2<<endl;
        //NL;
        X=Stoi(S2);
        long long int R=X-N;
        printf("%lld - %lld = %lld = 9 * %lld\n",X,N,R,R/9);
    }
	return 0;
}
