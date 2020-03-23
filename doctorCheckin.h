#ifndef DOCTORCHECKIN_H
#define DOCTORCHECKIN_H
#include <iostream>
#include <string>
#include <vector>
#include <functional>


using namespace std;
class doctorCheckin
{
    public:

        // for doctorCheckin();
        void menu();
        void menudr();
        void setdcName(string, string);
        void setRoomNumber(int);
        void setmedCOde(string);
        void setDocBook();

        int getRoomNumber() const;
        string getdcName() const;
        string getmedCode() const;
        int getDocBook() const;

        // for patient checkin
        void display();
        void setpcName(string, string);
        void setage(int);
        void specialityCOde(string);
        void emergencyInd(int);
        void emergecnyCase();
        void nonEmergencyCase();
        void bookPatient();
        void waitlist();

        string getpcName() const;
        int getAge() const;
        string getspecialityCode() const;
        int getEmergency() const;

        // for doctor checkOut
        void dcChoutMenu();
        void dcChoutRoom(int);
        void dcChoutSpecial(string);
        void dcChoutsetdcName(string, string);


        // for patient checkout
        void pcChoutMenu();
        void pcChoutRoom(int);
        void pcAge(int);
        void pcChoutsetName(string, string);



    protected:

    private:
        // for doctor checkin

        int roomNumber;

        string doctorFirstName;
        string doctorLastName;
        string medCode;
        vector <int> rm;
        vector <string> med;
        string fullName;


        // for patient checkin
        string patientFirstName;
        string patientLastName;
        string patientFullName;
        int age;
        string patientMCode;
        int emergncy;
        vector <string> patientMedCode;

         // for doctor checkOut
         int dCkroomNumber;

        string doctorCkFirstName;
        string doctorCkLastName;
        string medCkCode;
        vector <int> Ckrm;
        vector <string> Ckmed;
        string fullCkName;

        // for patient checkout
        string patientCkFirstName;
        string patientCkLastName;
        string patientCkFullName;
        int ageCk;
        int pcRomm;
        string patientCkMCode;
        //int emergncyCk;
        vector <string> patientCkMedCode;


};

#endif // DOCTORCHECKIN_H
