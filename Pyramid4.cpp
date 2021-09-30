/*
Display this pattern :
1
12
123
1234
12345

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
      cout << j;
    }
    cout << endl;
  }
}

/*
Author : @ChaitanyaJoshiX
*/
