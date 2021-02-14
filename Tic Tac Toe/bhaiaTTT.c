#include <bits/stdc++.h>
using namespace std;

 char s[10]={'0','1','2','3','4','5','6','7','8','9'};


void board()
{
    cout << "         Tic Tac Toe" << endl;
    cout << endl << "Player 1 (X)        Player 2 (O)" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << s[1] << "  |  " << s[2] << "  |  " << s[3] << endl;

    cout << "||" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[4] << "  |  " << s[5] << "  |  " << s[6] << endl;

    cout << "||" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[7] << "  |  " << s[8] << "  |  " << s[9] << endl;

}


int main()
{

    board();
   int num;

   cout<<"Enter your Number:"<<endl;
   cin>>num;

   system("cls");
   s[num]='X';


   cout<<endl;
   board();


}
