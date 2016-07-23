#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
    char c;
    while(scanf("%c", &c)!=EOF) {
        if(c=='\n') printf("%c", c);
        else printf("%c", c-7);
    }
    return 0;
}
