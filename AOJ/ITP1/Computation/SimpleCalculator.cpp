#include <iostream>
using namespace std;

int main(){
	int a, b;
	int answer;
	string op;

	while (true){
		cin >> a >> op >> b;

		if (op == "+"){
			answer = a + b;
		}else if(op == "-"){
			answer = a - b;
		}else if(op == "*"){
			answer = a * b;
		}else if(op == "/"){
			answer = a / b;
		}else if(op == "?"){
			return 0;
		}

		cout << answer << endl;
	}
}
