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
#define CP() printf("Case %d:\n",caseno++)
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

int A[110],n;

void rev() {
    reverse(A,A+n);
}

void add(int x) {
    int i;
    FOR(i,0,n) A[i]+=x;
}

void mul(int x) {
    int i;
    FOR(i,0,n) A[i]*=x;
}

void div(int x) {
    int i;
    FOR(i,0,n) A[i]/=x;
}

int main() {
    //R(); W();
	int i,j,k,x,T,q;
	char c;
	sfi(T);
	while(T--) {
        sfi(n); sfi(q);
        //cout<<q<<endl;
        FOR(i,0,n)
            sfi(A[i]);
        int ii;
        for(ii=0;ii<q;ii++) {
            cin.ignore();
            sfc(c);
            //cout<<c<<endl;
            if(c=='R') rev();
            else if(c=='P') {
                //cin.ignore();
                sfi(j);
                //cin.ignore();
                sfi(k);
                swap(A[j],A[k]);
            }
            else if(c=='S') {
                //cin.ignore();
                sfi(j);
                add(j);
            }
            else if(c=='M'){
                //cin.ignore();
                sfi(j);
                mul(j);
            }
            else if(c=='D') {
                //cin.ignore();
                sfi(j);
                div(j);
            }
        }
        CP();
        if(n>0) printf("%d",A[0]);
        FOR(i,1,n) printf(" %d",A[i]);
        pfl();
	}

	return 0;
}
