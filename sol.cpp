#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[4];
		for (int i = 0; i < 4; i++) {
			cin >> a[i];
		}
		// use bit masking to generate all possible subsets and take the sum of these subsets
		bool checker = false;
		for (int mask = 0; mask < (1 << 4); mask++) {
			int sum = 0;
			bool activated = false;
			for (int i = 0; i < 4; i++) {
				if (mask & (1 << i)) {
					sum += a[i];
					activated = true;
				}
			}
			if (sum == 0 && activated) {
				checker = true;
				break;
			}
		}
		cout << (checker ? "Yes" : "No") << '\n';
	}
	return 0;
}
