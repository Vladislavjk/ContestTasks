#include <iostream>
#include <list>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
 
int main() {
	long long L, H;
	cin >> H >> L;
	double A = (pow(L, 2) - pow(H, 2)) / (2. * H);
	cout << setprecision(13) << A;
}
