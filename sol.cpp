#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if ((n - 2) % 3 == 1) {
		cout << "1 1 " << n - 2;
	} else {
		cout << "1 2 " << n - 3;
	}
	cout << '\n';
	return 0;
}
