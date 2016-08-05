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
#define SFII(_i,_ii) scanf("d",&_i,&_ii)
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

int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
long long int dp[11][30005];
long long int rec(int i,int make) {
    if(make==0) return 1;
    if(i>10) return 0;
    if(dp[i][make]!=-1) return dp[i][make];

    long long int r1=0,r2=0;
    if(make-coin[i]>=0) r1=rec(i,make-coin[i]);
    r2=rec(i+1,make);
    return dp[i][make]=r1+r2;
}

int main() {
    //RW;
    MEM(dp,-1);
    int N;
    string S;
    while(cin>>S && S!="0.00") {
        N=0;
        int i;
        FOR(i,0,S.size()) {
            if(S[i]>=48 && S[i]<=57) {
                N*=10;
                N+=(S[i]-48);
            }
        }
        //cout<<N<<endl;
        long long int M=rec(0,N);
       //cout<<M<<endl;
        cout<<setw(6)<<S;
        cout.width(17);
        cout<<right<<M<<endl;
    }
	return 0;
}

