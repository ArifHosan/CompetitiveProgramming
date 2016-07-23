#include<iostream>
using namespace std;

int main() {
	int participant, budget, week, hotels;
	int price, beds;
	int f1 = 1,cost=0;
	cin >> participant >> budget >> hotels >> week;
	while (hotels--) {
		cin >> price;
		f1 = 1;
		for (int i = 0; i < week; i++) {
			cin >> beds;
			if (beds < participant) {
				f1 = 0;
				continue;
			}
			if ((price*participant < cost || cost == 0) && f1!=0) {
				cost = price*participant;
			}
		}
	}
	if (cost < budget && cost != 0) cout << cost << endl;
	else if (!cost) cout << "stay home" << endl;
	return 0;
}