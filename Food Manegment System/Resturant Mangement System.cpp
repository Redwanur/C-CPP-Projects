#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int total_price,totalBurger,totalSandwich,totalChicken,totalCocacola,totalSprite,totaldew,totalfanta,menuprice;
void homepage();
void burger();
void Sandwich();
void Chicken_Broast();
void soft_Drinks();
void setMenu();
void orderList();
void totalAmount();
void homepage()
{
    cout<<"-------------------MENU-------------------"<<endl;
    string menu_show;
    ifstream file("menu.txt");
    while(getline(file,menu_show))
    {
        cout<<menu_show<<endl;
    }
    cout<<"Enter What you want: ";
    int  your_choice;
    cin>>your_choice;
    if(your_choice==1)
    {
        burger();
    }
    if(your_choice==2)
    {
        Sandwich();
    }
    if(your_choice==3)
    {
        Chicken_Broast();
    }
    if(your_choice==4)
    {
        soft_Drinks();
    }
    if(your_choice==5)
    {
        setMenu();
    }
}
void burger()
{
    cout<<"Enter Burger Quantity: ";
    int BurgerQuantity;
    cin>>BurgerQuantity;
    totalBurger += BurgerQuantity;
    total_price= total_price+ 60.00*BurgerQuantity;
    cout<<" "<<endl;
    cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
    cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
    cout<<" "<<endl;
    cout<<"Enter your choice: ";
    int num;
    cin>>num;
    if(num==1)
    {
        system("cls");
        homepage();
    }
    else if(num==2)
    {
        orderList();
    }
}
void Sandwich()
{
    cout<<"Enter amount of Sandwich:";
    int sandwich_quantity;
    cin>>sandwich_quantity;
    totalSandwich+= sandwich_quantity;
    total_price= total_price+ 45.00*sandwich_quantity;
    cout<<" "<<endl;
    cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
    cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
    cout<<" "<<endl;
    cout<<"Enter your choice: ";
    int num;
    cin>>num;
    if(num==1)
    {
        system("cls");
        homepage();
    }
    else if(num==2)
    {
        orderList();
    }
}
void Chicken_Broast()
{
    cout<<"Enter pieces of Chicken:";
    int chicken_quantity;
    cin>>chicken_quantity;
    totalChicken+= chicken_quantity;
    total_price= total_price+ 50.00*chicken_quantity;
    cout<<" "<<endl;
    cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
    cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
    cout<<" "<<endl;
    cout<<"Enter your choice: ";
    int num;
    cin>>num;
    if(num==1)
    {
        system("cls");
        homepage();
    }
    else if(num==2)
    {
        orderList();
    }
}
void soft_Drinks()
{
    cout<<"Enter which drink you want: ";
    int drinks;
    cin>>drinks;
    if(drinks==1)
    {
        cout<<"Enter Number of Glasses: ";
        cin>>drinks;
        totalCocacola+= drinks;
        total_price=total_price+ 10.00*drinks;
        cout<<" "<<endl;
        cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
        cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
        cout<<" "<<endl;
        cout<<"Enter your choice: ";
        int num;
        cin>>num;
        if(num==1)
        {
            system("cls");
            homepage();
        }
        else if(num==2)
        {
            orderList();
        }
    }
    if(drinks==2)
    {
        cout<<"Enter Number of Glasses: ";
        cin>>drinks;
        totalSprite+= drinks;
        total_price=total_price+ 10.00*drinks;
        cout<<" "<<endl;
        cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
        cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
        cout<<" "<<endl;
        cout<<"Enter your choice: ";
        int num;
        cin>>num;
        if(num==1)
        {
            system("cls");
            homepage();
        }
        else if(num==2)
        {
            orderList();
        }
    }
    if(drinks==3)
    {
        cout<<"Enter Number of Glasses: ";
        cin>>drinks;
        totaldew+= drinks;
        total_price=total_price+ 12.00*drinks;
        cout<<" "<<endl;
        cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
        cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
        cout<<" "<<endl;
        cout<<"Enter your choice: ";
        int num;
        cin>>num;
        if(num==1)
        {
            system("cls");
            homepage();
        }
        else if(num==2)
        {
            orderList();
        }
    }
    if(drinks==4)
    {
      cout<<"Enter Number of Glasses: ";
        cin>>drinks;
        totalfanta+= drinks;
        total_price=total_price+ 12.00*drinks;
        cout<<" "<<endl;
        cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
        cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
        cout<<" "<<endl;
        cout<<"Enter your choice: ";
        int num;
        cin>>num;
        if(num==1)
        {
            system("cls");
            homepage();
        }
        else if(num==2)
        {
            orderList();
        }
    }
}
void setMenu()
{
    cout<<"Enter Number Of Plate: ";
    int menu;
    cin>>menu;
    menuprice+= menu;
    total_price=total_price+ 150.00*menu;
    cout<<" "<<endl;
    cout<<"IF YOU WANT TO ORDER OTHER FOODS, PRESS 1"<<endl;
    cout<<"IF YOU WANT TO CONFIRM YOUR ORDER, PRESS 2"<<endl;
    cout<<" "<<endl;
    cout<<"Enter your choice: ";
    int num;
    cin>>num;
    if(num==1)
    {
        system("cls");
        homepage();
    }
    else if(num==2)
    {
        orderList();
    }
}
void orderList()
{
    system("cls");
    ofstream file;
    file.open("Order List.txt");
    string username;
    cout<<"Enter Your Name: ";
    cin>>username;
    system("cls");
    file<<"Date:  13 / 02 / 2021"<<endl<<endl;
    file<<"Order Name: "<<username<<endl;
    file<<"Total Burgers: "<<totalBurger<<endl;
    file<<"Total Sandwiches: "<<totalSandwich<<endl;
    file<<"Total Pieces Of Chicken: "<<totalChicken<<endl;
    file<<"Total Glasses Of Soft-Drinks: "<<totalCocacola<<endl;
    file<<"Total Glasses Of Soft-Drinks: "<<totalSprite<<endl;
    file<<"Total Glasses Of Soft-Drinks: "<<totaldew<<endl;
    file<<"Total Glasses Of Soft-Drinks: "<<totalfanta<<endl;
    file<<"Total Plates of Set-Menu: "<<menuprice;
    totalAmount();
}
void totalAmount()
{
    int VAT=10;
    cout<<"* * * CHECKOUT MENU * * *"<<endl;
    cout<<" "<<endl;
    cout<<"Total Burgers Ordered: "<<totalBurger<<" * 60.00/="<<endl;
    cout<<" "<<endl;
    cout<<"Total Sandwiches Ordered: "<<totalSandwich<<" * 45.00/="<<endl;
    cout<<" "<<endl;
    cout<<"Total Chickens Ordered: "<<totalChicken<<" * 50.00/="<<endl;
    cout<<" "<<endl;
    cout<<"Total Soft-Drinks Ordered: "<<totalCocacola<<" * 10.00/="<<endl;
    cout<<" "<<endl;
    cout<<"                         : "<<totalSprite<<" * 10.00/="<<endl;
    cout<<" "<<endl;
    cout<<"                         : "<<totaldew<<" * 12.00/="<<endl;
    cout<<" "<<endl;
    cout<<"                         : "<<totalfanta<<" * 12.00/="<<endl;
    cout<<" "<<endl;
    cout<<"Total Set-Menus Ordered: "<<menuprice<<" * 150.00/="<<endl;
    cout<<" "<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<" "<<endl;
    cout<<"YOUR TOTAL PRICE IS = TK. "<<total_price<<endl;
    cout<<"VAT Included = TK. 10 "<<endl;
    cout<<" "<<endl;
    cout<<"YOUR TOTAL PRICE IS(WITH VAT) = TK. "<<total_price+VAT<<endl;
}
int main()
{
    homepage();
}
