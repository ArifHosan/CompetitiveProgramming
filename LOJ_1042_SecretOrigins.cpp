#include<iostream>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<bits/stdc++.h>
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

int bits(int x) {
    int c=0,i;
    FOR(i,0,32) {
        if(x&1==1) c++;
        x>>=1;
    }
    return c;
}

int main() {
    R(); W();
    int T,i,j,x;
    sfi(T);
    while(T--) {
        sfi(x);
        int k=bits(x);
        //cout<<k<<endl;
        //bitset<32> in(x);
        //int k=in.count();
        for(i=x+1;;i++) {
            if(bits(i)==k) break;
        }
        CP();
        pf1(i);
        pfl();
    }

	return 0;
}
