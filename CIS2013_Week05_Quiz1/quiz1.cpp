#include <iostream>
using namespace std;

//#define DEBUG true

void get_prime(int, int);
void get_lcm(int, int);


int main() {
	int first;
	int second;

	cout << "Please enter first number : ";
	cin >> first;
	cout << "Please enter second number : ";
	cin >> second;

	get_prime(first, second);
	get_lcm(first, second);
}

void get_prime(int f, int s) {
	for (int i = f; i <= s; i++) {
		//if (DEBUG) { cout << "Testing " << i << " to see if prime" << endl; }
		bool prime = true;
		for (int p = 2; p < i; p++) {
			//if (DEBUG) { cout << "For " << i << " is divisible by " << p << endl; }
			if (i%p == 0) {
				prime = false;
			}
		}
		if (prime) { cout << i << " is prime" << endl; }
	}
}


void get_lcm(int one, int two) {
	int one_counter = one;
	int two_counter = two;

	while (one != two) {
		if (one < two) {
			one += one_counter;
		}
		else {
			two += two_counter;
		}
	}
	cout << "The LCM is :" << two << endl;
}