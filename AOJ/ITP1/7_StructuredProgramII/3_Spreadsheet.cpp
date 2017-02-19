#include <iostream>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  int inputs[r+1][c+1];

  //初期化
  for(int i=0; i<r+1; i++){
    for(int j=0; j<c+1; j++){
      inputs[i][j]=0;
    }
  }

  //入力する
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin >> inputs[i][j];
    }
  }

  //計算する
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      inputs[i][c] += inputs[i][j];
      inputs[r][j] += inputs[i][j];
      inputs[r][c] += inputs[i][j];
    }
  }

  //出力する
  for(int i=0; i<r+1; i++){
    for(int j=0; j<c+1; j++){
      if(j == c){
        cout << inputs[i][j] << endl;
      }else{
        cout << inputs[i][j] << " ";
      }
    }
  }
}
