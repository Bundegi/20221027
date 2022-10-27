#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main() {
	fast;
	int N, M;
	cin >> N >> M;//N은 3까지 M은 7까지
	if (N == 1) cout << 1;
	else if (N == 2) {
		if (M < 3) cout << 1;
		else if (M < 5) cout << 2;
		else if (M < 7) cout << 3;
		else cout << 4;
	}
	else {
		if (M <= 4) cout << M;
		else if (M == 5) cout << M - 1;
		else cout << M - 2;
	}
}