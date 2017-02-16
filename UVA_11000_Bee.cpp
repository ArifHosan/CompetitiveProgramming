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
#define SFII(_i,_ii) scanf("%d %d",&_i,&_ii)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%u",_i)
#define PFSL(_i) printf("%s\n",_i)
#define PFS(_i) printf("%s",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

int main() {
    //RW;
    unsigned int fib[]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,
            2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,
            832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,
            63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903,2971215073};
    int N;
    while(SFI(N)==1 && N!=-1) {
        PFI(fib[N]-1); SPC;
        PFI(fib[N+1]-1); NL;
    }
	return 0;
}
