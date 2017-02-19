#include <iostream>
using namespace std;

int main(){
  int n, m, l;
  cin >> n >> m >> l;

  int a[n][m];
  int b[m][l];
  long long c[n][l];

  //行列A入力
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> a[i][j];
    }
  }

  //行列B入力
  for(int i=0; i<m; i++){
    for(int j=0; j<l; j++){
      cin >> b[i][j];
    }
  }

  //行列C初期化
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      c[i][j] = 0;
    }
  }

  //計算する
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      for(int k=0; k<m; k++){
        c[i][j] += a[i][k]*b[k][j];
      }
    }
  }

  //出力する
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      if(j==l-1){
        cout << c[i][j] << endl;
      }else{
        cout << c[i][j] << " ";
      }
    }
  }

}
