#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct accountInformation
{
    float totalcash;
    int pin;
} accountHolder;
int main()
{
    accountHolder.pin = 130;
    accountHolder.totalcash = 1000;
     cout<<"Enter You Pin Number = ";
    int loginpin;
    cin>>loginpin;
    system("cls");
    if(accountHolder.pin != loginpin)
    {
        cout<<"!!!!!!!ERROR/INCORRECT PIN!!!!!!!"<<endl;
        return 0;
    }
    else
    {
        cout<<"$ $YOU HAVE LOGGED IN SUCCESSIVELY $ $"<<endl;
        system("cls");

        cout<<"* * * Which Case You Want to Perform * * *"<<endl;
    }
    while(1)
    {
        int optionChoose;
        float DEPOSIT;
        float WITHDRAW;
        float TRANSFER;
        cout<<"1. DEPOSIT"<<endl;
        cout<<"2. WITHDRAW"<<endl;
        cout<<"3. TRANSFER"<<endl;
        cout<<"4. CHECK BALANCE"<<endl;
        cout<<"5. EXIT"<<endl;
        cin>>optionChoose;
        switch(optionChoose)
        {
        case 1:
            cout<<"Enter Ammount To DEPOSIT = "<<endl;
            cin>>DEPOSIT;
            accountHolder.totalcash += DEPOSIT;
            cout<<"Total Balance = "<<accountHolder.totalcash<<endl;
          break;
        case 2:
            cout<<"Enter Ammount You Want To WITHDRAW = "<<endl;
            cin>>WITHDRAW;
            accountHolder.totalcash -= WITHDRAW;
            cout<<"Total Balance = "<<accountHolder.totalcash<<endl;
            break;
        case 3:
            cout<<"TRANSFER Money From Your Account = "<<endl;
            cin>>TRANSFER;
            if(accountHolder.totalcash >= TRANSFER)
            {
                accountHolder.totalcash -= TRANSFER;
                cout<<"Total balance = "<<accountHolder.totalcash<<endl;
                break;
            }
            else
            {
                cout<<" ! ! ! ! OVERLOADED ! ! ! !"<<endl;
                break;
            }
        case 4:
            cout<<"Total Balance = "<<accountHolder.totalcash<<endl;
            break;
        case 5:
            cout<<"Thank You For Choosing US"<<endl;
                exit(0);
            break;
        default:
            cout<<"Thank You"<<endl;
        }
    }
    system("pause");
    system("cls");
}
