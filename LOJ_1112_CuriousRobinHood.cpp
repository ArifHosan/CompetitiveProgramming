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

void init(int node,int b,int e) {
	if (b == e) {
		tree[node] = arr[b];
		return;
	}
	int l = node * 2, r = node * 2 + 1, mid = (b + e) / 2;

	init(l, b, mid); init(r, mid + 1, e);

	tree[node] = tree[l] + tree[r];
}

void update(int node,int b,int e,int i,int val,int type) {
	if (i<b || i>e) return;
	if (b == e) {
		if (type == 1) {
			PFIL(tree[node]);
			tree[node] = 0;
		}
		else tree[node]+= val;
		return;
	}
	int l = node * 2, r = node * 2 + 1, mid = (b + e) / 2;

	update(l, b, mid, i, val,type); update(r, mid + 1, e, i, val,type);

	tree[node] = tree[l] + tree[r];
}

int query(int node, int b, int e, int i, int j) {
	if (j<b || i>e) return 0;
	if (b >= i && j >= e) return tree[node];

	int l = node * 2, r = node * 2 + 1, mid = (b + e) / 2;

	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
	//RW;
	int T;
	SFI(T);
	while (T--) {
		CP();
		int n, q, i, j,type,x,I,J;
		SFII(n, q);
		FOR(i, 1, n+1) SFI(arr[i]);
		init(1, 1, n);
		FOR(i, 0, q) {
			SFI(type);
			if (type == 1) {
				SFI(x);
				update(1, 1, n, x+1, 0, 1);
			}
			else if (type == 2) {
				SFII(I, x);
				update(1, 1, n, I+1, x, 2);
			}
			else {
				SFII(I, J);
				PFIL(query(1, 1, n, I+1, J+1));
			}
		}
	}
	return 0;
}