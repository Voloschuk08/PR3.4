#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	double x;// вхідний аргумент 
	double y;// вхідний параметр 
	double R;// радіус 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі 
	if ((x*x+y*y<=R*R && y>0 && y>x) ||
		(x * x + y * y <= R * R && y<0 && x>y))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}