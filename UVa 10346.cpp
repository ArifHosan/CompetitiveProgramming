#include<iostream>
#include<cstdio>
using namespace std;

 int main() {
    int s,k,tot,tmp;
    while(scanf("%d%d", &s, &k)!=EOF) {
        tot=s;
        tmp=s;
        //tmp+=tot%k;
        while(tmp>=k) {
            //printf("%d ", tmp);
            tot+=tmp/k;
            tmp=(tmp/k)+(tmp%k);
        }
        printf("%d\n", tot);
    }
    return 0;
 }
