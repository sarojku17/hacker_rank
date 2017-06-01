#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	string x[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	if (n<10)
		cout << x[n - 1] << endl;
	else
		cout << "Greater than 9" << endl;
	getchar();
	getchar();
}
