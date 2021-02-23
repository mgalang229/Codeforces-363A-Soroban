#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if (n == 0) {
		// if n is 0, then print this string
		cout << "O-|-OOOO\n";
		return 0;
	}
	vector<int> v;
	while (n != 0) {
		// separate the digits and store them into the vector
		v.emplace_back(n % 10);
		n /= 10;
	}
	for (int i = 0; i < (int) v.size(); i++) {
		if (v[i] < 5) {
			// print this string if the current element is less than 5
			cout << "O-|";
		} else {
			// otherwise, print this
			cout << "-O|";
			// also, get the difference between the current element and 4
			v[i] -= 5;
		}
		// print 'O' (v[i] - 5) times to get the digit needed
		for (int j = 0; j < v[i]; j++) {
			cout << "O";
		}
		// print '-' to separate the used beads from the unused
		cout << "-";
		// lastly, print the unused beads (if there are)
		for (int j = 0; j < (4 - v[i]); j++) {
			cout << "O";
		}
		cout << '\n';
	}
	cout << '\n';
	return 0;
}
