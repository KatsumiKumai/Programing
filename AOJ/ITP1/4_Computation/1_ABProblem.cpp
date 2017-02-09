#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    int d;
    int r;
    double f;

    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = (double)a/b;

    cout << d << " " << r << " " << fixed << setprecision(8) << f << endl;

}
