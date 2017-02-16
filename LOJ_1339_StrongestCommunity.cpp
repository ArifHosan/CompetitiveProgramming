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
#include<queue>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include<functional>
#include<stack>
#include<set>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno = 1;
#define CP() printf("Case %d:\n",caseno++)
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
#define valid(nx,ny) nx>=0 && nx<30 && ny>=0 && ny<30
using namespace std;

int arr[100005], tree[500005];

int main() {
	int T;
	SFI(T);
	while (T--) {
		int n, c, q, i, j, x;
		SFII(n, c); SFI(q);
		FOR(i, 1, c + 1) arr[i] = 0;
		FOR(i, 1, n + 1) {
			SFI(x);
			arr[x]++;
		}

	}
	return 0;
}