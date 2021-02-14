#include<bits/stdc++.h>
using namespace std;
void addbook();
void removeBook();
void admin_Menu();
void admin();
void student();
void homepage ();
void records();
void searching();
struct library_manegement
{
    string book_name,book_information;
    int book_shelf;
} book[10000000];      ///This is the Max///
int n;
int bookNumber;
void addbook()
{
    system("cls");
    cout<<"   ****** PANEL OF ADDING BOOKS ****** "<<endl;
    cout<<"How many books you want to add: ";
    cin>>bookNumber;
    n+=bookNumber;
    for(int i=0; i<bookNumber; i++)
    {
        cout<<"Book Name:";
        cin>>book[i].book_name;
        cout<<"Book Information:";
        cin>>book[i].book_information;
        cout<<"Book Shelf:";
        cin>>book[i].book_shelf;
        cout<<"******Book Created******"<<endl;
        system("cls");
        records();
        cout<<"   ****** PANEL OF ADDING BOOKS ****** "<<endl;
    }
}
void records()
{
    system("cls");
    cout<<"***********List Of All Books Available in the Library***********"<<endl;
    for(int i=0; i<bookNumber; i++)
    {
        cout<<book[i].book_name<<book[i].book_information<<book[i].book_shelf<<endl;
    }
    system("cls");
    system("pause");
    homepage();
}

void removeBook()
{
    system("cls");
    cout<<"   ****** PANEL OF REMOVING BOOKS ****** "<<endl;
    int bookNumber;
    cout<<"How many books you want to remove: ";
    cin>>bookNumber;
    for(int i=0; i<=bookNumber; i--)
    {
        cout<<"Enter The Book Name You Wanted To Remove:";
        cin>>book[0].book_name;
        cout<<"Book Shelf:";
        cin>>book[0].book_shelf;
        cout<<"******Book Removed******"<<endl;
        system("pause");
        system("cls");
        cout<<"   ****** PANEL OF REMOVING BOOKS ****** "<<endl;
    }
}
void logOut()
{
    system("pause");
    system("cls");
    cout<<"                     ^^^^^^^^^LIBRARY MANGEMENT SYSTEM^^^^^^^^^\n"<<endl;
    homepage();
}
void admin_Menu()
{
    cout<<"                            * * * ADMIN PANEL * * * \n"<<endl;
    cout<<"1. Add book \n"<<endl;
    cout<<"2. Remove book \n"<<endl;
    cout<<"3. Log Out \n"<<endl;
    cout<<"4. View All Nooks \n"<<endl;
    cout<<"Enter Your Choice: ";
    int adminmenu;
    cin>>adminmenu;
    cout<<"What You Wanted To Do: "<<endl;
    switch(adminmenu)
    {
    case 1:
        addbook();
        break;
    case 2:
        removeBook();
        break;
    case 3:
        logOut();
        break;
    case 4:
        records();
        break;
        cout<<"                     ^^^^^^^^^LIBRARY MANGEMENT SYSTEM^^^^^^^^^\n"<<endl;
    default:
        cout<<"Sorry \n"<<endl;
    }
}
void admin()
{
    cout<<"            *******ADMIN'S PANEL OPENED*******\n"<<endl;
    string username,password;
    string setusername = "r";
    string setpass = "1";
    cout<<"Enter Your Username : ";
    cin>>username;
    cout<<"Enter Your Passwaord : ";
    cin>>password;
    if(username==setusername)
    {
        if(password==setpass)
        {
            cout<<"\n                                 * * Logged in Successfully * *\n"<<endl;
            system("pause");
            system("cls");
            admin_Menu();
        }
        else
        {
            cout<<"Password Incoorect"<<endl;
        }
    }
    else
    {
        cout<<"Username is Incorrect"<<endl;
    }
}
void student()
{
    cout<<"                  ! ! ! ! ! ! 404 Not Found | Under Construction | We are sorry ! ! ! ! ! ! "<<endl;
    cout<<" "<<endl;
    system("pause");
    system("cls");
    cout<<"                     ^^^^^^^^^LIBRARY MANGEMENT SYSTEM^^^^^^^^^\n"<<endl;
    homepage();
}
void homepage ()
{
    cout<<"1. Admin\n\n2. Student\n"<<endl;
    cout<<"\nEnter Your Choice :- ";
    int num;
    cin>>num;
    system("cls");
    switch (num)
    {
    case 1:
        admin();
        break;
    case 2:
        student();
        break;
    default:
        cout<<"! ! ! ! ! !AN ERROR OCCURED! ! ! ! ! !"<<endl;
    }
}
void searching()
{
   int r,bookname;
   int m;
   cout<<" Search Engine"<<endl;
   cout<<"Which book You want to find: "<<endl;
   cin>>bookname;
   for(i=0; i<bookNumber; i++)
   {

   }


}
int main()
{
    cout<<"                     ^^^^^^^^^WELCOME TO LIBRARY MANGEMENT SYSTEM^^^^^^^^^\n"<<endl;
    cout<<"                      Created By: Redwanur"<<endl;
    cout<<"                                                                                                                                                         "<<endl;
    homepage();
}
