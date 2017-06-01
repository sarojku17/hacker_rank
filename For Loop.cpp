#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	string x[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (int i = a; i <= b; i++)
	{

		if (i<10)
			cout << x[i - 1] << endl;
		else if (i % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;


	}
	getchar();
	getchar();
}
