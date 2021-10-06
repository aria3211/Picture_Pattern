
#include <iostream>
#include <stdlib.h>


using namespace std;


void PicturePattern(int x);


int main()
{
  PicturePattern(7);

}


void PicturePattern(int x)
{
  
  for (int i = x; i >= 1; i--)
  {
    for (int j = 1; j <= x+5-i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout <<j;
    }
    for (int j = i-1; j >= 1; j--) {
      cout << j;
    }


    cout << endl;

  }
}
