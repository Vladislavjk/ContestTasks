#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int n;
	int aX, aY, bX, bY, cX, cY;
	cin >> n >> aX >> aY >> bX >> bY >> cX >> cY;

	int newCoord_bX = bX - aX, newCoord_bY = bY - aY;
	int newCoord_cX = cX - aX, newCoord_cY = cY - aY;

	if (newCoord_cX * newCoord_bX > 0 && newCoord_cY * newCoord_bY > 0) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;

}