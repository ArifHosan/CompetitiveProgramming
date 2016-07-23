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
#include<deque>
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

int main() {
    int i,j,T,sz,n,x;
    string s;
    sfi(T);
    while(T--) {
        CP();
        sfi(sz); sfi(n);
        deque<int> dq;
        cin.ignore();
        FOR(i,0,n) {
            //cin.ignore();
            cin>>s;
            if(s=="pushLeft") {
                sfi(x);
                cin.ignore();
                if(dq.size()>=sz) pf1("The queue is full\n");
                else {
                    printf("Pushed in left: %d\n",x);
                    dq.push_front(x);
                }
            }
            else if(s=="pushRight") {
                sfi(x);
                cin.ignore();
                if(dq.size()>=sz) pf1("The queue is full\n");
                else {
                    printf("Pushed in right: %d\n",x);
                    dq.push_back(x);
                }
            }
            else {
                if(dq.size()<=0) pf1("The queue is empty\n");
                else if(s=="popLeft") {
                    printf("Popped from left: %d\n",dq.front());
                    dq.pop_front();
                }
                else if(s=="popRight") {
                    printf("Popped from right: %d\n",dq.back());
                    dq.pop_back();
                }
            }


        }
    }
	return 0;
}
