/*
Display this pattern :

1 2 3 4 5...
1 2 3 4
1 2 3
1 2
1
till n rows.

*Use nested for only.

Author : @ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;
main()
{
  int rows,i,j;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Pattern : " << endl;
  cout << "12345\n1234\n123\n12\n1\nabove pattern has 5 rows\ntill n rows" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Enter the number of rows : ";
  cin >> rows;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  for(i=rows;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
