#include <iostream>
using namespace std;

int main(){
  int H, W;

  while(true){
    cin >> H >> W;
    if(H == 0 && W == 0){
      return 0;
    } else {
      for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
          cout << "#" ;
        }
        cout << endl;
      }
      cout << endl;
    }
  }

}
