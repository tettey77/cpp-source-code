#include <iostream>
using namespace std;

double avrg(double x, double y);


int main() {
	double a, b;
	
	cout << "Enter 1st number \n";
	cin >> a;
	cout << "Enter 2nd number \n";
	cin >> b;
	cout << endl;
	
	cout << "The average of the 1st and 2nd numbers = " << avrg(a, b) << endl;
	
	system("PAUSE");
	return 0;
}

double avrg(double x, double y) {
	return (x, y)/2;
	
}
