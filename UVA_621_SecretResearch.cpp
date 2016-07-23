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

int main() {
    R(); W();
    int T,i,j;
    string s;
    string k[]={"1","4","78"};
    sfi(T);
    cin.ignore();
    while(T--) {
        char x;
        cin>>s;
        if(s=="1" || s=="4" || s=="78") x='+';
        else {
            size_t loc;
            loc=s.find("35");
            if(loc!=string::npos && loc!=0) x='-';
            //if {
                loc=s.find("9");
                if(loc!=string::npos) {
                    size_t vx=s.find("4");
                    if(loc<vx && loc+1!=vx) x='*';
                }
                //if {
                    loc=s.find("190");
                    if(loc!=string::npos && loc+1<s.size()) x='?';
                    //else x='?';
                //}
            //}
        }
        pf1(x);
        pfl();
    }

	return 0;
}
