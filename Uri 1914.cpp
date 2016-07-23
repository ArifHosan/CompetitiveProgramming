#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int T;
    long long int n1,n2;
    char p1[101],p2[101],c1[6],c2[6];
    cin>>T;
    while(T--) {
        cin>>p1>>c1>>p2>>c2;
        cin>>n1>>n2;
        n1+=n2;
        if(n1&1) {
            if(strcmp(c1,"IMPAR")==0) printf("%s\n", p1);
            else printf("%s\n", p2);
        }
        else {
            if(strcmp(c1,"PAR")==0) printf("%s\n", p1);
            else printf("%s\n", p2);
        }
    }
    return 0;
}
