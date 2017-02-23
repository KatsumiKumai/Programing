#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  string x;
  int sum;

  while(true){
    sum = 0;
    cin >> x;
    if(x == "0") break;
    for(int i=0; i<x.size(); i++){
      sum += x[i] - '0';
    }
    cout << sum << endl;
  }
  return 0;
}
