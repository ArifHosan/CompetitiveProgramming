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
#include<bits/stdc++.h>
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

int main() {
    int T,N;
    sfi(T);
    while(T--) {
        sfi(N);
        int i,c=0;
        bitset<32>b(N);
        //string s=b.to_string<char,string::traits_type,string::allocator_type>();
        FOR(i,0,b.size()){
            if(b.test(i)==1) c++;
        }
        CP();
        if(c&1) pf1("odd\n");
        else pf1("even\n");

    }

	return 0;
}
