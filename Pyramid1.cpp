/*
Display this pattern :

1
22
333
4444
55555

*Use nested for only.

Author : @ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;
main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout << i;
    }
    cout << "" << endl;
  }
}

/*
Author : @ChaitanyaJoshiX
*/
