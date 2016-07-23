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
    string s;
    int key[128];
    int i,j,T;
    sfi(T);
    cin.ignore();
    while(T--) {
        memset(key,0,sizeof(key));
        getline(cin,s);
        FOR(i,0,s.size()) {
            if(isalpha(s[i])) {
                int x= int(toupper(s[i]));
                key[x]++;
            }
        }
        getline(cin,s);
        FOR(i,0,s.size()) {
            if(isalpha(s[i])) {
                int x= int(toupper(s[i]));
                key[x]--;
            }
        }
        bool f=1;
        FOR(i,0,128)
            if(key[i]!=0) f=0;

        CP();
        if(!f) pf1("No\n");
        else pf1("Yes\n");

    }

	return 0;
}
