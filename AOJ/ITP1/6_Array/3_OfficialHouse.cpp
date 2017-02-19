#include <iostream>
using namespace std;

int main(){
  int n;
  int b, f, r, v;
  int roominfo[4][3][10];
  cin >> n;

  //初期化
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
        roominfo[i][j][k] = 0;
      }
    }
  }

  //人の出入り
  for(int i=0; i<n; i++){
    cin >> b >> f >> r >> v;
    roominfo[b-1][f-1][r-1] += v;
  }

  //出力
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
        cout << " " << roominfo[i][j][k];
      }
      cout << endl;
    }
    if(i != 3) cout << "####################" << endl;
  }

}
