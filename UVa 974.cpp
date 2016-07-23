#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
    int t,csn=1,i,j,a,b,f;
    int key[19]={9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962};
    scanf("%d", &t);
    while(t--) {
        f=0;
        scanf("%d%d", &a, &b);
        if(csn!=1) printf("\n");
        printf("case #%d\n", csn++);
        for(i=a;i<=b;i++) {
            for(j=0;j<19;j++) {
                if(i==key[j]) {
                    printf("%d\n", i);
                    f=1;
                }
            }
        }
        if(!f) printf("no kaprekar numbers\n");
    }
    return 0;
}






















/*int lst[20], lst_i=0;

int main() {
    int x=4879,t,i=0,j,k;
    long long int n;
    for(x=1;x<40001;x++) {
    n=x*x;
    char s[30];
    i=0;
    //cout<<n;
    while(n)  {
        s[i++]=(n%10)+48;
        n/=10;
    }
    s[i]='\0';
    t=ceil(strlen(s)/2.0);
    //cout<<t;
    j=0;
    for(i=t-1;i>=0;i--) {
        j*=10;
        j+=s[i]-48;
    }
    //if(j%10==0) j/=10;
    //cout<<j;
    k=0;
    for(i=strlen(s)-1;i>=t;i--) {
        k*=10;
        k+=s[i]-48;
    }
    //if(k%10==0) k/=10;
    //cout<<k;
    if(j+k==x && j && k) lst[lst_i++]=x;
}
for(i=0;i<lst_i;i++) {
    printf("%d\n", lst[i]);
}
}*/
