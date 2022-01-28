#include <iostream>
using namespace std;

double larger(double x, double y);   
double comparethree(double x, double y, double z);


int main() {
	double a, b, c;
	
	cout << "Enter three values seperated by spaces ";
	cin >> a >> b >> c;
	
	cout << "The lagest of the three numbers = " << larger(a, larger(b, c)) << endl;
	
	return 0;
}

double larger(double x, double y)
{
	if(x > y)
        return x;
    return y;
}
   
double comparethree(double x, double y, double z) {
	return larger(x, larger(y, z));
}
	
