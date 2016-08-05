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

vector<int>C;
int m;

bool valid(int n) {
    int i,j,x=1,c=0;
    FOR(i,0,C.size()) {
        if(C[i]>n) return false;
        if(c+C[i]>n) {
            c=0;
            x++;
        }
        c+=C[i];
    }
    if(x>m) return false;
    else return true;
}

int main() {
    //R(); W();
    int i,j,n,t,k,x;
    //sfi(t);

    while(sfi(n)==1) {
        int h=0;
        C.clear();
        //sfi(n);
        sfi(m);
        FOR(i,0,n) {
            sfi(x);
            h+=x;
            C.push_back(x);
        }
        int b;
        int l=1;
        while(l<=h) {
            int mid=(l+h)/2;
            if(valid(mid)) {
                b=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        printf("%d\n",b);
    }

	return 0;
}
