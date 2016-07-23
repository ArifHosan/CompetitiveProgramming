#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<locale>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
    int a,b,c;
    while(scanf("%d%d", &a,&b)!=EOF) {
        c=a^b;
        printf("%d\n", c);
    }
	return 0;
}

