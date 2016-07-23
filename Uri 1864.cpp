#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    char q[40]="LIFE IS NOT A PROBLEM TO BE SOLVED\0";
    int N,i;
    while(cin>>N) {
        for(i=0;i<N;i++) printf("%c", q[i]);
        printf("\n");
    }
    return 0;
}

