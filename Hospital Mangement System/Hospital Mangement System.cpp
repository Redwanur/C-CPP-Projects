#include<bits/stdc++.h>
#include<fstream>
using namespace std;
void homepage();                ///Front Page
void list_Member();             ///For viewing all Members
void addMember();
void admin_menu();              ///Login Menu
void admin_menu2();             ///Main admin panel
void homepage()
{
    cout<<"     * * * * * WELCOME TO HOSPITAL MANAGEMENT SYSTEM * * * * *"<<endl;
    cout<<" "<<endl;
    string categorie_show;
    ifstream file("Functions.txt");
    while(getline(file,categorie_show))
    {
        cout<<categorie_show<<endl;
    }
    cout<<"Select Your Menu According To Your Catagorie: ";
    int choice_H;       ///H=Homepage
    cin>>choice_H;
    if(choice_H==1)
    {
        admin_menu();
    }
}
void list_Member()
{
    system("cls");
    cout<<"               * * * * * MEMBERS MANAGEMENT * * * * * "<<endl;
    cout<<" "<<endl;
    string list_show;
    ifstream file("Member Lists.txt");
    while(getline(file,list_show))
    {
        cout<<list_show<<endl;
    }
}
void addMember()
{
    system("cls");
    cout<<"               * * * * * ADD MEMBERS * * * * * "<<endl;
    cout<<" "<<endl;
    string name, id, position, roomgiven, department;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Position: ";
    cin>>position;
    cout<<" "<<endl;
    cout<<" "<<endl;
    /*string add_show;
    ofstream file("Added Members.txt");
    cout<<add_show<<endl;
    file<<"Name: "<<name<<endl;
    file<<"ID: "<<id<<endl;
    file<<"Position: "<<position<<endl;*/
}
void admin_menu()
{
    system("cls");
    cout<<"       * * * ADMIN PANEL * * * "<<endl;
    string username,passwords;
    string setusername = "1";
    string setpass = "1";
    cout<<"Enter Your Username: ";
    cin>>username;
    cout<<"Enter your Password: ";
    cin>>passwords;
    if(username==setusername)
    {
        if(passwords==setpass)
        {
            cout<<"\n     LOGGED IN SUCCESSFULLY"<<endl;
            system("pause");
            system("cls");
            admin_menu2();
        }
        else
        {
            cout<<" ! ! ! PASSWORD INCORRECT ! ! ! "<<endl;
            admin_menu();
        }
    }
    else
    {
        cout<<" ! ! ! USERNAME IS INCORRECT ! ! ! "<<endl;
        admin_menu();
    }
}
void admin_menu2()
{
    cout<<"       * * * ADMIN PANEL * * * "<<endl;
    cout<<" "<<endl;
    cout<<" 1. ADD PHYSICIANS / DOCTORS "<<endl;
    cout<<" 2. REMOVE ANY MEMBERS "<<endl;
    cout<<" 3. LIST OF ALL MEMEBERS "<<endl;
    cout<<" 4. DETAILS ABOUT DOCTORS/STAFFS AND PATIENTS "<<endl;
    cout<<" 5. LIST OF APPOINTMENTS "<<endl;
    cout<<" 6. MANAGE THE HOSPITAL "<<endl;
    cout<<" Select Anyone From The Above Options: ";
    int choice_AD2;            ///AD2=admin_menu2
    cin>>choice_AD2;
    if(choice_AD2==1)
    {
        addMember();
    }
    if(choice_AD2==2)
    {
        cout<<"ERROR OCCURED"<<endl;
    }
    if(choice_AD2==3)
    {
        list_Member();
    }
    if(choice_AD2==4)
    {
        cout<<"ERROR OCCURED"<<endl;
    }
    if(choice_AD2==5)
    {
        cout<<"ERROR OCCURED"<<endl;
    }
    if(choice_AD2==6)
    {
        cout<<"ERROR OCCURED"<<endl;
    }
}
int main()
{
    homepage();
}
