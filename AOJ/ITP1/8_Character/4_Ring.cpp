#include <iostream>
using namespace std;

int main(){
  string s, p;
  int flag = 0;
  cin >> s;
  cin >> p;

  string check = s+s;
  for(int i=0; i<s.size(); i++){
    //pの先頭が一致したら
    if(check[i] == p[0]){
      //sにpが一致する部分があるかチェック
      for(int j=0; j<p.size(); j++){
        flag = 1;
        if(check[i+j] != p[j]){
          flag = 0;
          break;
        }
      }
      //フラグが立ったらyesを出力して終了
      if(flag == 1) break;
    }
  }

  if(flag == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
