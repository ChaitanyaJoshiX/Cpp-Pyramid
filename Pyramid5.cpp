/*
Display this pattern till n terms:

A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G...

*Use nested for only.

Author : @ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;
main()
{
    int rows,i,j,letter = 65;
    cout << "Pattern is :\nA\nB B\nC C C\nD D D D\nE E E E E\nF F F F F F\ntill n terms\nAbove has 6 rows" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter no. of rows : ";
    cin >> rows;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    if(rows<=26)
    {
      for(i=1;i<=rows;i++)
      {
          for(j=1;j<=i;j++)
          {
              cout << char(letter);
          }
          letter++;
          cout << endl;
      }
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
    else
    {
      cout << "Max input = 26 (26 alphabets only!)" << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
}

/*
Author : @ChaitanyaJoshiX
*/
