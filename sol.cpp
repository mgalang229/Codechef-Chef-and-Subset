#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	//input
	int a[4];
	for(int i=0; i<4; ++i)
		cin >> a[i];
		
	//perform bit masking
	bool ok=0;
	for(int mk=0; mk<(1<<4); ++mk) {
		int sum=0;
		bool chk=0;
		for(int i=0;i<4; ++i)
			if(mk&(1<<i)) {
				sum+=a[i];
				chk=1;
			}
		if(sum==0&&chk) {
			ok=1;
			break;
		}
	}
	
	//output ans
	cout << (ok?"Yes":"No") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
