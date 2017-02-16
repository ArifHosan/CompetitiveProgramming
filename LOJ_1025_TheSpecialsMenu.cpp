/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
#include<cstdlib>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno = 1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define PFSL(_i) printf("%s\n",_i)
#define PFS(_i) printf("%s",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

int dp[64][64];
string T;

int rec(int i,int j) {
	if (j < i) return 0;
	if (i == j) return 1;
	if (dp[i][j] != -1) return dp[i][j];

	int r1 = 0;
	if (T[i]==T[j]) { 
		r1 = 1 + rec(i + 1, j) + rec(i, j - 1);
	}
	else r1 = rec(i + 1, j) + rec(i, j - 1) - rec(i + 1, j - 1);
	return dp[i][j] = r1;
}

int main() {
	int i,N;
//	string T;
	SFI(N);
	FOR(i, 0, N) {
		MEM(dp, -1);
		T.clear();
		cin >> T;
		CP();
		cout << rec(0,T.size()-1) << endl;
	}
	return 0;
}