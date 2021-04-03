#include<bits/stdc++.h>
#include<fstream>
using namespace std;
void homepage();
void sign_in();
void log_in();
void homepage()
{
    cout<<"          $ $ $ $ $ $ WELCOME TO ELECTRONIC PAY $ $ $ $ $ $"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"       1. SIGN IN "<<endl;
    cout<<" "<<endl;
    cout<<"       2. LOG IN "<<endl;
    cout<<" "<<endl;
    int choice_H;         ///H=Homepage || Choices in Homege
    cout<<"What You Wanted To Do: ";
    cin>>choice_H;
    if(choice_H==1)
    {
        sign_in();
    }
    if(choice_H==2)
    {
        log_in();
    }
}
void sign_in()
{
    system("cls");
    cout<<"               $ $ CREATING AN ELECTRONIC PAY ACCOUNT $ $ "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    string name1,name2,fname,mname,nid,mnum,gender,mail,pass,pass2;
    cout<<"Enter Your Name(Small Letters): ";
    cin>>name1;
    cout<<"Enter Your Name(CAPITAL LETTERS): ";
   getline (cin, name2);
    cout<<"Enter Your Father's Name: ";
    cin>>fname;
    cout<<"Enter Your Mother's Name: ";
    cin>>mname;
    cout<<"Enter Your National ID Card Number: ";
    cin>>nid;
    cout<<"Enter Your Mobile Number: ";
    cin>>mnum;
    cout<<"Enter Your Gender: ";
    cin>>gender;
    cout<<"Enter Your Email Address: ";
    cin>>mail;
    cout<<"Enter Your Password: ";
    cin>>pass;
    cout<<"Confirm Your Password: ";
    cin>>pass2;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"------------------------------------------------------- "<<endl;
    cout<<"------------------------------------------------------- "<<endl;
    system("cls");
    cout<<" "<<endl;
    cout<<"CONGRATULATIONS , YOUR ACCOUNT HAS BEEN CREATED BY THE GIVEN INFORMATION "<<endl;
    cout<<"Your Name(Small): "<<name1<<endl;
    cout<<"Your Name(Capital): "<<name2<<endl;
    cout<<"Your Father's Name: "<<fname<<endl;
    cout<<"Your Mother's Name: "<<mname<<endl;
    cout<<"Your NID Card Number: "<<nid<<endl;
    cout<<"Your Gender: "<<gender<<endl;
    cout<<"Your Email ID: "<<mail<<endl;
    cout<<"Your Confirmed Password: "<<pass2<<endl;
    ofstream file;
    file.open("Record List.txt");
    file<<"Your Name(Small): "<<name1<<endl;
    file<<"Your Name(Capital): "<<name2<<endl;
    file<<"Your Father's Name: "<<fname<<endl;
    file<<"Your Mother's Name: "<<mname<<endl;
    file<<"Your NID Card Number: "<<nid<<endl;
    file<<"Your Gender: "<<gender<<endl;
    file<<"Your Email ID: "<<mail<<endl;
    file<<"Your Confirmed Password: "<<pass2<<endl;

}
void log_in()
{
    system("cls");
    cout<<"      LOGGING IN PANEL"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"1. LOG IN(BY NID) "<<endl;
    cout<<"2. LOG IN(BY EMAIL) "<<endl;
    cout<<" "<<endl;
    int choice_log;   ///log = LOGGING IN || Choices in LOGGING IN MENU
    cout<<"What You Wanted T Do: ";
    cin>>choice_log;
    if(choice_log==1)
    {
        system("cls");
        int nid2,pass;   ///nid2 = NID Card in this menu ||| Pass = Password
        cout<<"Enter Your NID Card Number: ";
        cin>>nid2;
        if(nid2=='1001')
        {
            cout<<"HAHA";
        }
        else
        {
            cout<<"Incorrect NID Card Number "<<endl;
            cout<<" "<<endl;
            cout<<"Please Try Again "<<endl;
            cout<<" "<<endl;
        }
    }
    if(choice_log==2)
    {
        system("cls");
    }
}
int main()
{
    homepage();
}
