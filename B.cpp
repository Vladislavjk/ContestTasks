#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
int min(int a, int b) {
	return (a < b) ? a : b;
}
 
int Factorial(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}
 
int main() {
	int a, b;
	cin >> a >> b;
 
	cout << Factorial(min(a, b));
}
