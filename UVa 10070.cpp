#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    bool l,h,b,f=0;
    long long int n;
    while(scanf("%lld", &n)!=EOF) {
        if(f) printf("\n");
        l=0; b=0; h=0;
        if(n%4==0) l=1;
        if(n%100==0) l=0;
        if(n%400==0) l=1;
        if(n%15==0) h=1;
        if(l && n%55==0) b=1;
        if(l) printf("This is leap year.\n");
        if(h) printf("This is huluculu festival year.\n");
        if(b) printf("This is bulukulu festival year.\n");
        f=1;
        if(!h && !l &&!b) printf("This is an ordinary year.\n");
    }
    return 0;
}
