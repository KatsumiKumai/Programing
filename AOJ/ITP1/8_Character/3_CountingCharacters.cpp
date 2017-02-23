#include <iostream>
#include <cctype>
using namespace std;

int main(){
  int alpha[26] = {0};
  char ch;

  //文章を入力
  while(cin >> ch){
    ch = tolower(ch);
    //if(ch == '.') break;
    if(isalpha(ch)){
      int index = ch - 'a';
      alpha[index]++;
    }
  }

  //出力
  for(int i =0; i<26; i++){
    cout << (char)('a' + i) << " : " << alpha[i] << endl;
  }

  return 0;
}
