#include <iostream>
#include <list>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
 
bool isPrimeNumber(int n) {
	if (n == 1) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
 
int main() {  // T-простые числа - числа вида p^2, где p - простое число.
	long long n, a;
	long double k;
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		cin >> a;
		k = sqrt(a);
		if (k == int(k)) {
			if (isPrimeNumber(k)) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
}
