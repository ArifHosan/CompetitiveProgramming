#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int N, P[100],m_i,m;
    while(cin>>N) {
        m=101;
        for(int i=0;i<N;i++) {
            cin>>P[i];
            if(P[i]<m) {
                m=P[i];
                m_i=i;
            }
        }
        printf("%d\n", m_i+1);
    }
    return 0;
}

