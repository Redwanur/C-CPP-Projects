#include <bits/stdc++.h>
using namespace std;

char s[10]= {'0','1','2','3','4','5','6','7','8','9'};


void board()
{
    cout << "         Tic Tac Toe" << endl;
    cout << endl << "Player 1 (X)        Player 2 (O)" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << s[1] << "  |  " << s[2] << "  |  " << s[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[4] << "  |  " << s[5] << "  |  " << s[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[7] << "  |  " << s[8] << "  |  " << s[9] << endl;

}

int checkWin()
{
    if (s[1] == s[2] && s[2] == s[3])
    {
        return 1;
    }

    else if (s[4] == s[5] && s[5] == s[6])
    {
        return 1;
    }

    else if (s[7] == s[8] && s[8] == s[9])
    {
        return 1;
    }
    else if (s[1] == s[4] && s[4] == s[7])
    {
        return 1;
    }
    else if (s[2] == s[5] && s[5] == s[8])
    {
        return 1;
    }
    else if (s[3] == s[6] && s[6] == s[9])

    {
        return 1;
    }
    else if (s[1] == s[5] && s[5] == s[9])

    {
        return 1;
    }
    else if (s[3] == s[5] && s[5] == s[7])

    {
        return 1;
    }
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3'
             && s[4] != '4' && s[5] != '5' && s[6] != '6'
             && s[7] != '7' && s[8] != '8' && s[9] != '9')
    {
        cout<<"match draw"<<endl;
        return 0;
    }
    else
    {
        return -1;
    }
}


int main()
{


    int player = 1,choice;
    char mark;
    int i=0;
    system("cls");
    board();

    do
    {
        player=(player%2==1)?1:2;


        cout<<"Player "<<player<<",enter a number: ";
        cin>>choice;

        mark = (player==1)?'X':'O';

        if(choice==1 && s[1]=='1')
        {
            s[1]= mark;
        }
        else if(choice==2 && s[2]=='2')
        {
            s[2]= mark;
        }
        else if(choice==3 && s[3]=='3')
        {
            s[3]= mark;
        }
        else if(choice==4 && s[4]=='4')
        {
            s[4]= mark;
        }
        else if(choice==5 && s[5]=='5')
        {
            s[5]= mark;
        }
        else if(choice==6 && s[6]=='6')
        {
            s[6]= mark;
        }
        else if(choice==7 && s[7]=='7')
        {
            s[7]=mark;
        }
        else if(choice==8 && s[8]=='8')
        {
            s[8]= mark;
        }
        else if(choice==9 && s[9]=='9')
        {
            s[9]=mark;
        }
        else
        {
            cout<<"faltu input"<<endl;
            player--;
            cin.ignore();
            cin.get();
        }

        i=checkWin();

        system("cls");
        player++;
        board();


    }
    while(i==-1);


    if(i==1)
    {

        cout<<"player "<<--player<<" win"<<endl;
    }
    else
    {
        cout<<"game draw"<<endl;
    }

    cin.ignore();
    cin.get();
    return 0;




}

