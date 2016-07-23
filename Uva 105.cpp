#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int C[10000];

int main() {
    //freopen("in.txt", "r", stdin);
    int L,H,R,i,m_R=0;
    while(scanf("%d%d%d", &L, &H, &R)!=EOF) {
        if(R>m_R) m_R=R;
        for(i=L;i<R;i++) {
            if(C[i]<H) C[i]=H;
        }
    }
    for(i=1;i<m_R;i++) {
        if(C[i]==C[i-1]) continue;
        printf("%d %d ", i, C[i]);
    }
    printf("%d 0\n",m_R);
    return 0;
}
