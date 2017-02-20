#include <iostream>
using namespace std;

int main(){
	char sentence;

	while(true){
		scanf("%c", &sentence);

		cout << sentence << endl;

		if(sentence == '\n') break;
	}
}