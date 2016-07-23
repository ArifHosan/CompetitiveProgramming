#include<iostream>
using namespace std;

int main() {
	int H, U, D, F, i;
	bool f;
	double height, rate, distance;
	while (cin >> H && H != 0) {
		cin >> U >> D >> F;
		i = 0; height = 0; rate = F / 100.0;
		while (1) {
			distance = U - (U*(rate*i));
			if (distance >= 0) height += distance;
			i++;
			if (height > H) {
				f = true;
				break;
			}
			height -= D;
			if (height < 0) {
				f = false;
				break;
			}
		}
		if (f) cout << "success on day " << i << endl;
		else cout << "failure on day " << i << endl;
	}
	return 0;
}