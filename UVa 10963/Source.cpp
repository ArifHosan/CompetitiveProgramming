#include<iostream>
using namespace std;

int main() {
	int cn,n,i,a,b,dif=0,f=1;
		cin >> cn;
		while(cn--) {
			cout << endl;
			f = 1;
			cin >> n;
			for (i = 0; i < n; i++) {
				cin >> a >> b;
				if(i==0)
					dif = a - b;
				if (dif != (a - b) && -dif != (a - b)) {
					f = 0;
				}
			}
			if (f) cout << "yes" << endl;
			else cout << "no" << endl;
	}
		return 0;
}