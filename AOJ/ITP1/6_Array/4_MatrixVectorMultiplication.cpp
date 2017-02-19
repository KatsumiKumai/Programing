#include <iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int a[n][m];
  int b[m];
  int c[n];

  //行列A入力
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> a[i][j];
    }
  }

  //行列B入力
  for(int i=0; i<m; i++){
    cin >> b[i];
  }

  //行列C初期化
  for(int i=0; i<n; i++){
    c[i] = 0;
  }

  //行列計算
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      c[i] += a[i][j] * b[j];
    }
  }

  //計算結果出力
  for(int i=0; i<n; i++){
    cout << c[i] << endl;
  }

}
