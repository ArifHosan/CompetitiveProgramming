#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int a,b,c;
    while(cin>>a>>b) {
        if(a>b) c=a;
        else c=b;
        printf("%d\n",c);
    }
    return 0;
}
