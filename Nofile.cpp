#include<iostream>
using namespace std;
double pt(double x) {
	double phtr;
	phtr = (x * x * x - 1.5 * x * x + 0.58 * x - 0.057);
	return phtr;
}
int main()
{
	double a, b, c, f;
	cin >> a >> b >> f;
	do {
		cout << " phtr(a) = "<< pt(a) << endl;
		cout << " phtr(b) = " << pt(b) << endl;
		if (pt(a)*pt(b) < 0) {
			break;
		}
		else {
			cout << "nhap sai khoang phan ly nghiem cua phuong trinh" << endl << "nhap lai khoang phan ly nghiem" << endl;
			cout << "a = ";cin >> a;
			cout << "b = ";cin >> b;
		}

	} while (pt(a)< pt(b));
	do {
		c = (a + b) / 2;
		if ((pt(a) * pt(c)) > 0) {
			a = c;
		}
		else {
			b = c;
		}
	} while (b - a > f);
	cout << "c = " << c;
}