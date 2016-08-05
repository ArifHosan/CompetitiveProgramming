/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 50
#define endl '\n'
int caseno=1;
#define SFII(_i,_ii) scanf("d",&_i,&_ii)
#define CP() printf("Case %d:\n",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

bool P[SIZE];
int taken[17]={0};
int k;
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}

void Rec(vector<int>v) {
    int i;
    //FOR(i,0,v.size()) printf("%d ",v[i]);
    //NL;
    if(v.size()==k && P[v[0]+v[v.size()-1]]) {
        PFI(v[0]);
        FOR(i,1,v.size()) printf(" %d",v[i]);
        NL;
        return;
    }
    FOR(i,1,k+1) {
        if(!taken[i] && P[v[v.size()-1]+i]) {
            taken[i]=1;
            v.push_back(i);
            Rec(v);
            v.pop_back();
            taken[i]=0;
        }
    }
}

int main() {
    //RW;
    primeSieve();
    bool f=1;
    while(SFI(k)==1) {
        vector<int>v;
        v.push_back(1);
        taken[1]=1;
        if(f) f=!f;
        else NL;
        CP();
        Rec(v);
    }
	return 0;
}
