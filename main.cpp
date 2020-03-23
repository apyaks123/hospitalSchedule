#include <iostream>
#include "doctorCheckin.h"
#include <fstream>

using namespace std;

// Global variable
char scanner;
char scan;
void print();
void printIn();


int main()
{

    doctorCheckin o;

    o.menu();




    }

    void doctorCheckin::menu()
    {

    cout << "---------------------------------------" << endl;
    cout << "Welcome to hospital Appointement Program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Type D for doctor " << endl;
    cout << "Type P for for Patient " << endl;
    cout << "Type R for Quit and Print Schedule to file" << endl;
    cout << "Type M for Print the Schedule to output" << endl;
    cout << "---------------------------------------" << endl;
    cout << "It is case-sensitive so enter as it appears." << endl;
//    cout << "Please enter 2 for Doctor Checkout" << endl;
//    cout << "Please enter 3 for patient Checkout" << endl;
    cout << "---------------------------------------" << endl;
    cin >> scanner;


    switch (scanner)


    {
        case 'D':
        {
            cout << "---------------------------------------" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Type I for doctor Checking in" << endl;
            cout << "Type O for for doctor checking out" << endl;
            cin >> scan;

            switch (scan){

            case 'I':
                {
                 menudr();
                }
                break;
            case 'O':
                {
                    dcChoutMenu();
                }
                break;
            default :
                {
                cout << "It is case-sensitive. Please try again" << endl;
                menu();

                }
                break;

            }


        }

            break;

        case 'P':
            {

               cout << "---------------------------------------" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Type I for patient Checking in" << endl;
            cout << "Type O for for patient checking out" << endl;
            cin >> scan;

            switch (scan){

            case 'I':
                {
                 display();
                }
                break;
            case 'O':
                {
                    pcChoutMenu();
                }
                break;
            default :
                {
                cout << "It is case-sensitive. Please try again" << endl;
                menu();

                }
                break;

            }





            }

            break;
        case 'R':
            {
            print();

            }
            break;
        case 'M':
            {
                printIn();
            }
            break;

        default:
            {
                cout << "It is case-sensitive. Please try again" << endl;
                menu();
            }

        break;




    }




    }


    void print()
    {

        ofstream myfile;

        myfile.open("trans.txt", ios::in | ios::out );

        myfile << "======================================================================" << endl;

            myfile << "                         ---SCHEDULE----                                   " << endl;

            myfile << "                         DISCLAIMER            " <<endl;

            myfile << "Booked people will appear as it should in the status. The empty after DoctorName, Room Number, and Speciality code is slot left to be filled."<< endl;

            myfile << "Thank you!!!" << endl;

            myfile << "======================================================================" << endl;




            myfile << endl;

            myfile << "======================================================================" << endl;






    myfile.close();

    }
    void printIn(){

            cout << "======================================================================" << endl;

            cout << "                         ---SCHEDULE----                                   " << endl;

            cout << "                         DISCLAIMER            " <<endl;

            cout << "Booked people will appear as it should in the status. The empty after DoctorName, Room Number, and Speciality code is slot left to be filled."<< endl;

            cout << "Thank you!!!" << endl;

            cout << "======================================================================" << endl;




            cout << endl;



    }

