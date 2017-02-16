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
#include<set>
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
#define PFIL(_i) cout<<_i<<endl
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
#define valid(nx,ny) nx>=0 && nx<3 && ny>=0 && ny<N
using namespace std;

struct Trie {
	Trie *child[10];
	//char data;
	bool isLeaf = false;
};

bool insert(Trie *root, string s) {
	int i, j;
	Trie *curr = root;
	FOR(i, 0, s.size()) {
		bool flag = false;
		if (curr->child[s[i] - 48] == NULL) {
			Trie t;
			curr->child[s[i] - 48] = new Trie();
		}
		else if (curr->child[s[i] - 48]->isLeaf == true) return false;
		curr = curr->child[s[i] - 48];
	}
	curr->isLeaf = true;
	return true;
}

int main() {
	//RW;
	int N, T;
	SFI(T);
	while (T--) {
		Trie *root = new Trie();
		vector<string>S;
		int i, j, x;
		string num;
		SFI(N);
		FOR(i, 0, N) {
			cin >> num;
			S.push_back(num);
			//cout << insert(root, num) << endl;
		}
		sort(ALL(S));
		bool flag = 0;
		FOR(i, 0, S.size()) {
			if (!insert(root, S[i])) {
				PFSL("NO");
				flag = 1;
				break;
			}
		}
		if (!flag) {
			PFSL("YES");
		}
	}
	return 0;
}