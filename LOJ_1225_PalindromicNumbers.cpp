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
    char  s[12],s1[12];
    int i,j,T;
    sfi(T);
    //cin.ignore();
    while(T--) {
        scanf("%s",s);
        int x=strlen(s)-1;
        j=0;
        while(s[x]) {
            s1[j++]=s[x--];
        }
        s1[j]='\0';
        //cout<<s<<' '<<s1<<endl;
        CP();
        if(!strcmp(s1,s)) pf1("Yes\n");
        else pf1("No\n");

    }

	return 0;
}
