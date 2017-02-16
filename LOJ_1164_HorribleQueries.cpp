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
#define PFLL(_i) printf("%lld\n",_i)
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

long long tree[500005],lazy[500005];

void update(int node, int b, int e, int i, int j, int x) {
	if (i > e || j < b) return;
	if (i <= b && j >= e) {
		tree[node] += (e - b + 1)*x;
		lazy[node] += x;
		return;
	}
	int l = node * 2, r = node * 2 + 1, mid = (b + e) / 2;
	update(l, b, mid, i, j, x); update(r, mid + 1, e, i, j, x);

	tree[node] = tree[l] + tree[r] + lazy[node] * (e - b + 1);
}

long long query(int node, int b, int e, int i, int j, long long carry) {
	if (i > e || j < b) return 0;
	if (i <= b && j >= e) 
		return tree[node] + carry*(e - b + 1);

	int l = node * 2, r = node * 2 + 1, mid = (b + e) / 2;
	long long r1 = query(l, b, mid, i, j, carry + lazy[node]);
	long long r2 = query(r, mid + 1, e, i, j, carry + lazy[node]);
	return  r1 + r2;
}

int main() {
	//RW;
	int T;
	SFI(T);
	while (T--) {
		MEM(tree, 0); MEM(lazy, 0);
		int n, q, i,type,x,y,v;
		SFII(n, q);
		CP();
		FOR(i, 0, q) {
			SFI(type);
			SFII(x, y);
			if (type == 0) {
				SFI(v);
				update(1, 1, n, x + 1, y + 1, v);
			}
			else PFLL(query(1, 1, n, x + 1, y + 1, 0));
		}
	}
}