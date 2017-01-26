#include <iostream>
using namespace std;

int main() {

	double gas;
	double tank;

	cout << "What is the price of gas?" << endl;
	cin >> gas;
	cout << "What is the size of your tank?" << endl;
	cin >> tank;
	cout << "The cost would be " << gas*tank << " dollars" << endl;

}