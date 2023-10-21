#include <iostream>

using namespace std;

template <typename R, typename T, typename U> // template ���� ����

R const add(T const& a, U const& b) {
	return a + b;
}

int main() {
	int i = 5;
	double j = 10.2;

	cout << i << "+" << j << "=" << add<double>(i, j) << endl;
	return 0l;
}