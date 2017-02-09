#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
  double r;
  cin >> r;

  cout << fixed << setprecision(6) << r * r * M_PI << " " << fixed << setprecision(6) << 2 * r * M_PI << endl;

}
