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
long long bill(long long t) {
    long long res=0;
    if(t<=100) {
        return res*2;
    }
    else if(t<=10000) {
        res=100*2;
        t-=100;
        res+=(t*3);
        return res;
    }
    else if(t<=1000000) {
        res=(100*2)+(9900*3);
        t-=10000;
        res+=(t*5);
        return res;
    }
    else  {
        res=(100*2)+(9900*3)+(990000*5);
        t-=1000000;
        res+=(t*7);
        return res;
    }
}


int main() {
    //RW;
    int A,B,mid;
    while(SFII(A,B)==2 && A &&B){
        int hi=1e9,lo=0;
        while(lo<=hi) {
            mid=(hi+lo)/2;
            cout<<mid<<' '<<bill(mid+mid-B)<<endl;
            if(bill(mid+mid-B)==A) break;
            else if(bill(mid+mid-B)>A) hi=mid-1;
            else lo=mid+1;
        }
        cout<<mid<<endl;
    }
	return 0;
}
