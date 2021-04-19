#include <bits/stdc++.h>

using namespace std;

int GetDistance(int x1, int y1, int x2, int y2) {
	return ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

bool CheckRightTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
	int a = GetDistance(x1, y1, x2, y2);
	int b = GetDistance(x2, y2, x3, y3);
	int c = GetDistance(x1, y1, x3, y3);
	return ((2 * max({a, b, c})) == (a + b + c));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	// view the image in this repository for the derivation of the formula
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		if (CheckRightTriangle(x1, y1, x2, y2, x3, y3)) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
