/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
#define SFIII(_i,_ii,_iii) scanf("%d%d%d",&_i,&_ii,&_iii)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define PFSL(_s) printf("%s\n",_s)
#define NL printf("\n")
#define SPC printf(" ")
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

/*bool P[SIZE];
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}
*/

int main() {
    //RW;
    int i,j,T,N,x,B,NB,NG;
    SFI(T);
    while(T--) {
        priority_queue<int>QG,QB;
        SFIII(B,NG,NB);
        FOR(i,0,NG) {
            SFI(x);
            QG.push(x);
        }
        FOR(i,0,NB) {
            SFI(x);
            QB.push(x);
        }
        while(!QG.empty() && !QB.empty()) {
            int ii=min(QG.size(),QB.size());
            vector<int>VB,VG;
            FOR(i,0,min(B,ii)) {
                VB.push_back(QB.top());
                QB.pop();
                VG.push_back(QG.top());
                QG.pop();
            }
            FOR(i,0,VB.size()) {
                if(VB[i]>VG[i]) QB.push(VB[i]-VG[i]);
                else if(VG[i]>VB[i]) QG.push(VG[i]-VB[i]);
            }
        }
        if(QB.empty() && QG.empty()) {
            PFSL("green and blue died");
        }
        else if(QB.empty()) {
            PFSL("green wins");
            while(!QG.empty()) {
                PFIL(QG.top());
                QG.pop();
            }
        }
        else if(QG.empty()) {
            PFSL("blue wins");
            while(!QB.empty()) {
                PFIL(QB.top());
                QB.pop();
            }
        }
        if(T)NL;
    }


	return 0;
}
