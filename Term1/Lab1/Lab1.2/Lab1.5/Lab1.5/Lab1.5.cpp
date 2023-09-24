
#include <iostream>
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	
	

	
	cout << "Paste a number more than 0" << endl;
	while (true) {
		cin >> x;
		y = 365 * 24 * 3600 * x;
		if (x <= 0) {
			cout << "I said, more than 0"<< endl;
			continue;
		}
		else {
			cout << "In this year "<< y <<" seconds" << endl;
		}
	}
	return 0;
}

