/*
Display this pattern :

*******
     *
    *
   *
  *
 *
*******

*Use nested for only.
Author : @ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;
main()
{
  int i,j;
  int n = 5;
  for(i=1;i<=7;i++) // Loop to print first line
  {
    cout << "*";
  }
  cout << endl;

  for(i=1;i<=7;i++)
  {
      for(j=1;j<=n;j++)
      {
          cout << " ";
      }
      n--;
      cout << "*" << endl;
  }

  for(i=1;i<=7;i++) // Loop to print last line
  {
    cout << "*";
  }
  cout << endl;

}
