#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int N,d[1001],i,j,c;
    while(scanf("%d", &N)!=EOF) {
        c=0;
        for(i=0;i<N;i++) {
            scanf("%d", &d[i]);
        }
        for(i=0;i<N;i++) {
            for(j=0;j<N-i-1;j++) {
                if(d[j]>d[j+1]) {
                        swap(d[j], d[j+1]);
                        c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", c);
    }
    return 0;
}
