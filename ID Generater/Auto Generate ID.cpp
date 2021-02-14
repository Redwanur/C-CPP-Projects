// AnE.cpp : Defines the entry point for the console application.
//
#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


// The maximum number of patients in queue
#define MAXPATIENTS 30


// define structure for patient information
struct patient

{
   char FirstName[50];
   char LastName[50];
   char ID[20];
};


// define class for queue
class queue
{
   public:
   queue (void);
   int RegisterPatien (patient p);
   int RegisterPatientAtBeginning (patient p);
   patient GetNextPatient (void);
   int CancelAll (patient * p);
   void OutputList (void);
   char DepartmentName[50];
   private:
   int ShowAllPatient;
   patient List[MAXPATIENTS];
};


// declare member functions for queue

queue::queue ()
{
   // Constructor
   ShowAllPatient = 0;
}


int queue::RegisterPatien (patient p)
{
   // To add a patient (normally) to the queue (to the end).
   // returns 1 if successful, 0 if queue is full.
  if (ShowAllPatient >= MAXPATIENTS)
   {
      // queue is full
      return 0;
   }
      // put in new patient
      else
      List[ShowAllPatient] = p;  ShowAllPatient++;
      return 1;
}


int queue::RegisterPatientAtBeginning (patient p)
{
   // adds a critically ill patient to the beginning of the queue.
   // returns 1 if successful, 0 if queue is full.
   int i;
   if (ShowAllPatient >= MAXPATIENTS)
   {
      // queue is full
      return 0;
   }

   // move all patients one position back in queue
   for (i = ShowAllPatient-1; i >= 0; i--)
   {
      List[i+1] = List[i];
   }
   // put in new patient
   List[0] = p;  ShowAllPatient++;
   return 1;
}


patient queue::GetNextPatient (void)
{
   // gets the patient that is first in the queue.
   // returns patient with no ID if queue is empty

   int i;  patient p;
   if (ShowAllPatient == 0) {
   // queue is empty
   strcpy(p.ID,"");
   return p;}
   // get first patient
   p = List[0];
   // move all remaining patients one position forward in queue
   ShowAllPatient--;
   for (i=0; i<ShowAllPatient; i++)
   {
      List[i] = List[i+1];
   }
   // return patient
   return p;
}


int queue::CancelAll (patient * p)

{
   // removes a patient from queue.
   // returns 1 if successful, 0 if patient not found
   int i, j, found = 0;
   // search for patient
   for (i=0; i<ShowAllPatient; i++)
    {
            if (stricmp(List[i].ID, p->ID) == 0)
        {
        // patient found in queue
        *p = List[i];  found = 1;
        // move all following patients one position forward in queue
        ShowAllPatient--;

    for (j=i; j<ShowAllPatient; j++)
                {
                        List[j] = List[j+1];
                }
        }
    }
   return found;
}


void queue::OutputList (void)
{
   // lists entire queue on screen
   int i;
   if (ShowAllPatient == 0)
    {
            cout<< "Queue is empty";
    }
   else
    {

        for (i=0; i<ShowAllPatient; i++)
        {
            cout << "First Name : " << List[i].FirstName<<endl;
            cout << "Last Name : " << List[i].LastName<<endl;
        }
    }
}


// declare functions used by main:

patient InputPatient (void)

{
   // this function asks user for patient data.
   patient p;
   cout<<endl<<endl;
   cout << "Please enter the information of the Patient"<<endl<<endl;
   cout << "First name: "<<endl<<endl;
   cin.getline(p.FirstName, sizeof(p.FirstName));
   cout << "Last name: "<<endl<<endl;
   cin.getline(p.LastName, sizeof(p.LastName));
   // check if data valid
   if (p.FirstName[0]==0 || p.LastName[0]==0 || p.ID[0]==0)
    {
            // rejected
            strcpy(p.ID,"");
            cout << "Error: Data not valid. Operation cancelled.";
            getch();
    }
   return p;
}


void OutputPatient (patient * p)
{
   // this function outputs patient data to the screen
   if (p == NULL || p->ID[0]==0)
    {
            cout << "No patient";

    return;
    }
   else
   cout << "Patient Information:"<<endl<<endl;
   cout << "First name: " << p->FirstName<<endl<<endl;
   cout << "Last name: " << p->LastName<<endl<<endl;
}


int ReadNumber()
{
   // this function reads an integer number from the keyboard.
   // it is used because input with cin >> doesn't work properly!
   char buffer[20];
   cin.getline(buffer, sizeof(buffer));
   return atoi(buffer);
}


void DepartmentMenu (queue * q)
{
   // this function defines the user interface with menu for one department
   int choice = 0, success;  patient p;
   while (choice != 6)
    {
        // print menu
           system("CLS");
           cout << "<< || Welcome || >> "<<endl << q->DepartmentName<<endl;
           cout << "Please enter your choice:"<<endl<<endl;
           cout << "1:  Register patient"<<endl;
           cout << "2:  Serve patient "<<endl;
           cout << "3:  Cancel all patients from queue"<<endl;
           cout << "4:  Show all patient"<<endl;
           cout << "5:  Exit"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

           choice = ReadNumber();

        switch (choice)
      {
            case 1:   // Add new patient
        p = InputPatient();
        if (p.ID[0])
           {
                success = q->RegisterPatien(p);
                system("CLS");
                if (success)
                {
                    cout << "Patient added:"<<endl<<endl;

                }
            else
           {
                // error
                cout << "Sorry: The queue is full. We Cannot add any patient:";
           }
                OutputPatient(&p);
                cout << "Press any key";
                getch();
      }
     break;

      case 2:   // Call patient for operation /First Come First Surve
     p = q->GetNextPatient();
     system("CLS");
     if (p.ID[0])
        {
           cout << "Patient to operate:";
           OutputPatient(&p);
     }
     else
        {
           cout << "Currently there is no patient to operate.";
     }
           cout << "Press any key to contiune";
           getch();
           break;

      case 3:   // Cancel all from queue
     p = InputPatient();
     if (p.ID[0])
       {
            success = q->CancelAll(&p);
            system("CLS");
            if (success)
              {
                cout << "Patient removed:";
              }
              else
              {
                // error
                cout << "Sort: We cannot find patient:";
              }
        OutputPatient(&p);
            cout << "Press any key to contiune";
            getch();
       }
     break;

      case 4:   // Show all patient -> queues
          system("CLS");
          q->OutputList();
     cout << "Press any key";
     getch();  break;
     }
      }
}


// the main function defining queues and main menu
void main ()
{
   int i, MenuChoice = 0;
   // define  queue
   queue department[1];
   // set department name
   strcpy_s (department[0].DepartmentName, "To Emergency Department");

   while (MenuChoice != 2)
    {
        system("CLS");

// Cout menu
           cout<<"\n------------------------------------\n";
           cout << "Welcome to Waiting Room Management System"<<endl;
           cout<<"---------------------------------------\n";
           cout << "Please Select a Number from the following menu:"<<endl<<endl;
          for (i = 0; i < 1; i++)

    {
           // write menu item for department i
           cout<< "" << (i+1) << ":  "<< department[i].DepartmentName;
           cout<<endl;
          }
          cout << "2:  Exit"<<endl;
          // get user choice
          MenuChoice = ReadNumber();
          // is it a department name?
            if (MenuChoice >= 1 && MenuChoice <= 1)
            {
            // call submenu for department
            // (using pointer arithmetics here:)
            DepartmentMenu (department + (MenuChoice-1));
            }
    }
}
