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
    //R(); W();
    int i,j,x,N,f,a,T;
    sfi(T);

    while(T--) {
        sfi(N);
        queue<int> q,q2,q3,q4;
        //priority_queue<int> pq,pq2;
        stack<int> s,s2;
        FOR(i,0,N) {
            //sfi(a);
            sfi(x);
            //if(a==1) {
                q.push(x);
                //pq.push(x);
                s.push(x);
            }
            FOR(i,0,N) {
                sfi(x);
                q2.push(x);
                //pq2.push(x);
                q4.push(x);
                //s2.push(x);
                q3.push(x);
            }
        //}
        f=0;
        while(!q.empty() && q2.front()==q.front()) {
            q2.pop(); q.pop();
        }
        if(q2.empty()) f++;

        while(!s.empty() && s.top()==q3.front()) {
            s.pop(); q3.pop();
        }
        if(q3.empty()) f++;

        /*while(!pq.empty() && q4.front()==pq.top()) {
            q4.pop(); pq.pop();
        }
        if(q4.empty()) f++;*/

        if(f==0) pf1("neither\n");
        if(f>1) pf1("both\n");
        else {
            if(q2.empty()) pf1("queue\n");
            //else if(q4.empty()) pf1("priority queue\n");
            else if(q3.empty()) pf1("stack\n");
        }
    }
}
















            /*
            else {
                f=0;
                if(q.front()==x) {
                    q.pop();
                    f++;
                }
                if(pq.top()==x) {
                    pq.pop();
                    f++;
                }
                if(s.top()==x) {
                    s.pop();
                    f++;
                }
                if(f==1) continue;
                if(f==0) sure=2;
                else sure=0;
            }
        }
        if(sure==0) pf1("not sure\n");
        else if(sure==2) pf1("impossible\n");
        else {
            if(q.empty()) pf1("queue\n");
            else if(pq.empty()) pf1("priority queue\n");
            else if(s.empty()) pf1("stack\n");
            else pf1("impossible\n");
        }
    }
	return 0;
}
*/
