#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	double values[] = { 2.4, 1.3, 2.4, 4.5, 6.7, 4.5, 9.0 };
	ostream_iterator<double> out(cout, " ");
	cout << "Before sorting values: " << endl;
	copy(values, values + 7, out);
	sort(values, values + 7);

	cout << endl << "After sorting values: " << endl;
	copy(values, values + 7, out);
	cout << endl;
	if (binary_search(values, values + 7, 6.7)) {
		cout << "6.7 found." << endl;
	}
	else {
		cout << "6.7 not found." << endl;
	}

	if (binary_search(values, values + 7, 4.3)) {
		cout << "4.3 found." << endl;
	}
	else {
		cout << "4.3 not found." << endl;
	}

	return 0;
}