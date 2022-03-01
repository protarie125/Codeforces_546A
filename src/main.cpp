#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k, n, w;
	cin >> k >> n >> w;

	auto ans = k * (w * (w + 1) / 2) - n;
	if (ans < 0) {
		ans = 0;
	}
	cout << ans;

	return 0;
}