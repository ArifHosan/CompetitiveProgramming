/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define SFII(_i,_ii) scanf("d",&_i,&_ii)
#define CP() printf("Case %d: ",caseno++)
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
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

int cmp(char a) {
    if(isupper(a)) return (a-65)*2;
    else return (a-97)*2+1;
}

bool myCmp(string a,string b) {
    int i=0;
    while(i<a.size() && cmp(a[i]==cmp(b[i]))) i++;
    if(i==a.size()) return true;
    return cmp(a[i])<cmp(b[i]);
}

int main() {
    int T;
    string s;
    SFI(T);
    while(T--) {
        set<string>S;
        set<string>::iterator it;
        cin>>s;
        S.insert(s);
        string s2=s;
        while(prev_permutation(ALL(s2))) {
            S.insert(s2);
        }
        while(next_permutation(ALL(s))) {
            S.insert(s);
        }
        vector<string>V;
        for(it=S.begin();it!=S.end();it++) {
            V.push_back(*it);
        }
        sort(ALL(V),myCmp);
        for(int i=0;i<V.size();i++)
          cout<<V.at(i)<<endl;

    }
	return 0;
}
