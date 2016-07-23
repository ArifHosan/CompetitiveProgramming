#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int t,f;
    char n[100];
    cin>>t;
    while(t--) {
        cin>>n>>f;
        if(strcmp(n,"Thor")==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
