#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
bool isDifferent(int n) {
	int a[10]{};
	while (n) {
		a[n % 10]++;
		n /= 10;
	}
	for (int var : a) {
		if (var > 1) {
			return 0;
		}
	}
	return 1;
}
 
int main() {
	int y;
	cin >> y;
 
	y++;
	while (true) {
		if (isDifferent(y)) {
			cout << y;
			return 0;
		}
		y++;
	}
}
