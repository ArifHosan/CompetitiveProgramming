#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W();
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i) scanf("%d",&_i)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFI(_i) printf("%d",_i)
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
}*/

//Converts Decimal to Binary
string decToBin(int n) {
    string r="";
    while(n) {
        r=((n%2==0)?"0":"1")+r;
        n/=2;
    }
    return r;
}
/*
//Converts Decimal to Hex
string decToHex(unsigned int n) {
    stringstream ss;
    ss<<uppercase<<hex<<n;
    return ss.str();
}

//Converts Binary to Decimal
long binToDec(string s) {
    long res=0;
    long fact=1;
    int i=0;
    REV(i,s.size()-1,0) {
        res+=(s[i]-48)*fact;
        fact*=2;
    }
    return res;
}

//Converts Binary to Hex
string binToHex(string s) {
    bitset<32> b(s);
    stringstream ss;
    ss<<uppercase<<hex<<b.to_ulong();
    return ss.str();
}
*/
//Converts Hex to Binary
string hexToBin(string s){
    string r="";
    stringstream ss;
    ss<<hex<<s;
    unsigned n;
    ss>>n;
    bitset<32>b(n);
    return b.to_string();
}
/*
//Converts Hex to Decimal
long hexToDec(string s) {
    long i;
    stringstream ss;
    ss<<s;
    ss>>hex>>i;
    return i;
}

//Converts Octal to Decimal
long octToDec(long i) {
    stringstream ss;
    ss<<i;
    ss>>oct>>i;
    return i;
}

//Converts Decimal to Octal
long decToOct(long i) {
    stringstream ss;
    ss<<oct<<i;
    ss>>dec>>i;
    return i;
}
*/
//Converts Integer values to String
string itos(int n) {
    stringstream ss;
    ss<<n;
    return ss.str();
}

//Converts Strings to Longs
long stoi(string s) {
    stringstream ss;
    ss<<s;
    long i;
    ss>>i;
    return i;
}

int main() {
    //RW;
    int T,x,r;
    SFI(T);
    while(T--) {
        SFI(x);
        string s=decToBin(x);
        //cout<<s<<endl;
        string S=hexToBin(itos(x));
        PFI(count(s.begin(),s.end(),'1')); SPC; PFI(count(S.begin(),S.end(),'1')); NL;
    }
	return 0;
}
