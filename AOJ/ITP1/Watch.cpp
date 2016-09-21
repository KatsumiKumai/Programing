#include <iostream>
using namespace std;

int main(){
	int second;
	int h,m,s;
	int amari1, amari2;

	cin >> second;

	h = second/3600;
	amari1 = second%3600;
	m = amari1/60;
	amari2 = amari1%60;
	s = amari2;

	cout << h << ":" <<  m << ":" << s << endl;


}
