#include <iostream>
using namespace std;

int main(){
	int n;
	long min = 100000000;
	long max = -100000000;
	long long sum=0;
	long x;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(max < x) max = x;
		if(min > x) min = x;
		sum += x;
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}
