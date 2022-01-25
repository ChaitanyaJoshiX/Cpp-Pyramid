/*
Display this pattern :

0
12
345
6789

@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

main()
{
  int i,j,k=0;
  for(i=1; i<=4; i++)
  {
    for(j=1; j<=i; j++)
    {
      cout << k;
      k++;
    }
    cout << endl;
  }
}
