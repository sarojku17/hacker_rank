#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int marks;

	for (register int i = 0; i<n; i++)
	{
		cin >> marks;
		if ((marks<38) || ((marks % 5)<3))
		{
			;
		}
		else
		{
			marks = ((marks / 5) + 1) * 5;

		}
		cout << marks << endl;
	}
	getchar();
	getchar();
}
