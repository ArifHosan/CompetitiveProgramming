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
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

string add(string a,string b) {
    int i,j,car=0;
    if(a.size()<b.size())
        while(a.size()!=b.size()) a.insert(0,"0");
    else if(b.size()<a.size())
        while(b.size()!=a.size()) b.insert(0,"0");
    string res="";
    REV(i,a.size()-1,0) {
        car+=a[i]-48+b[i]-48;
        if(car>9) {
            res+=car%10+48;
        }
        else res+=car+48;
        car/=10;
    }
    if(car) res+=car+48;
    reverse(res.begin(),res.end());
    while(res[0]=='0') res.erase(res.begin());
    if(res.size()==0) res="0";
    return res;
}

string multiply(string a,string b) {
    int x=0;
    int sz=max(a.size(),b.size());
    int i,j,c=0,rem=0;
    string t="",res="";
    REV(i,a.size()-1,0) {
        t=""; rem=0;
        FOR(j,0,c) t+="0";
        x=a[i]-48;
        REV(j,b.size()-1,0) {
            int ttx=b[j]-48;
            if(ttx*x+rem>9) {
                t+=((ttx*x+rem)%10+48);
                rem=(ttx*x+rem)/10;
            }
            else {
                t+=((ttx*x+rem)+48);
                rem=0;
            }
        }
        c++;
        t+=rem+48;
        reverse(t.begin(),t.end());
        res=add(t,res);
    }
    while(res[0]=='0') res.erase(res.begin());
    if(res.size()==0) res="0";
    return res;
}
int main() {
    //RW;
    string a,b;
    while(cin>>a>>b) {
        cout<<multiply(a,b)<<endl;
        //cout<<add(a,b)<<endl;
    }
	return 0;
}
