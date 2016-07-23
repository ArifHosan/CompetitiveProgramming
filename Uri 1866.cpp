#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    while(t--) {
        cin>>x;
        if(x&1) printf("1\n");
        else printf("0\n");
    }
    return 0;
}
