#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "doctorCheckin.h"

        void doctorCheckin::pcChoutMenu(){
        string firstName;
        string lastName;
        int hage;
        string mcode;
        int rm;
        //static int em;

        cout << "---------------------------------------" << endl;
        cout << "Please enter Patient First name" << endl;
        cin >> firstName;
        cout << "---------------------------------------" << endl;

        cout << "---------------------------------------" << endl;
        cout << "Please enter Patient Last name "<< endl;
        cin >> lastName;
        cout << "---------------------------------------" << endl;
        pcChoutsetName(firstName,lastName);
        //cout << "Customer name: " << getpcName() << endl;
        cout << "---------------------------------------" << endl;
        cout << "Please enter Patient's age" << endl;
        cin >> hage;
        pcAge(hage);
        //cout << "Customer age:" << getAge() << endl;
        cout << "---------------------------------------" << endl;
        cout << "Please enter room number" << endl;
        cin >> rm;
        pcChoutRoom(rm);
        cout << "---------------------------------------" << endl;
//        cout <<  "Please enter your med Speciality code : " << endl;
//        cout << "---------------------------------------" << endl;
//        cout << "---------------For example--------------- " << endl;
//        cout << "Pediatrics==PED, General practice==GEN, Internal medicine==INT, " << endl;
//        cout <<"Cardiology==CAR, Surgeon==SUR, Obstetrics==OBS, Psychiatry==PSY," << endl;
//        cout << "Neurology==NEU, Orthopedics==ORT, Dermatology==DET, Ophthalmology==OPT, Ear|Nose|Throat==ENT" << endl;
        cout << "---------------------------------------" << endl;
        //cin >> mcode;
        //specialityCOde(mcode);
        //cout << getspecialityCode() << "Speciality code" << endl;
   //cout << getspecialityCode() << "Patient enter code" << end

        }
        void doctorCheckin::pcChoutRoom(int w){
        pcRomm = w;

        }
        void doctorCheckin::pcAge(int k){
            ageCk = k;
        }
        void doctorCheckin::pcChoutsetName(string c, string v){
            patientCkMCode = c + " " +  v;
        }
