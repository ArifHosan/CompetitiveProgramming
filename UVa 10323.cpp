#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int x;
    long long int f;
    while(scanf("%d", &x)!=EOF) {
        if(x<0) {
            if(x&1) printf("Overflow!\n");
            else printf("Underflow!\n");
        }
        else if(x<=7) printf("Underflow!\n");
        else if(x>=14) printf("Overflow!\n");
        else {
            switch(x) {
            case 8:
                f=40320;
                break;
            case 9:
                f=362880;
                break;
            case 10:
                f=3628800;
                break;
            case 11:
                f=39916800;
                break;
            case 12:
                f=479001600;
                break;
            case 13:
                f=6227020800;
            }
            printf("%lld\n", f);
        }
    }
    return 0;
}
