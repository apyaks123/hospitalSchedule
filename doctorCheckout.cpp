#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "doctorCheckin.h"

        void doctorCheckin::dcChoutMenu(){
            string fname;
            string lname;
            string code;
            //vector<string> rmCode;
            int rNo;
            //    vector<string> doctorName(20);
            cout << "---------------------------------------" << endl;
            cout <<  "Please enter Doctor's Fist name: " << endl;
            cout << "---------------------------------------" << endl;
            cin >> fname;

            cout << "---------------------------------------" << endl;
            cout <<  "Please enter Doctor's last name: " << endl;
            cout << "---------------------------------------" << endl;
            cin >> lname;
            dcChoutsetdcName(fname, lname);
            cout << "---------------------------------------" << endl;
            cout <<  "Please enter your Examination room number : " << endl;
            cout <<  "Please enter your Examination room number from 1 to 20 : " << endl;
            cout << "---------------------------------------" << endl;
            cin >> rNo;
            dcChoutRoom(rNo);
            cout << "---------------------------------------" << endl;
            cout <<  "Please enter your med Speciality code : " << endl;
            cout << "---------------------------------------" << endl;
            cout << "---------------For example--------------- " << endl;
            cout << "Pediatrics==PED, General practice==GEN, Internal medicine==INT, " << endl;
            cout <<"Cardiology==CAR, Surgeon==SUR, Obstetrics==OBS, Psychiatry==PSY," << endl;
            cout << "Neurology==NEU, Orthopedics==ORT, Dermatology==DET, Ophthalmology==OPT, Ear|Nose|Throat==ENT" << endl;
            cout << "---------------------------------------" << endl;
            cin >> code;
            dcChoutSpecial(code);



        }
        void doctorCheckin::dcChoutRoom(int k){
            dCkroomNumber = k;

        }
        void doctorCheckin::dcChoutSpecial(string w){

        if (w == "PED")
        {
            medCode = "PED";
            med.push_back("PED");
            setDocBook();
        }
    else if (w == "GEN"){
            medCode = "GEN";
            med.push_back("GEN");
            setDocBook();
    }
    else if (w == "INT"){
        medCode = "INT";
        med.push_back("INT");
        setDocBook();
    }
    else if (w == "CAR"){
        medCode = "CAR";
        med.push_back("CAR");
        setDocBook();

    }
    else if (w == "OBS"){
            medCode = "OBS";
        med.push_back("OBS");
        setDocBook();

    }
    else if (w == "SUR"){
             medCode = "SUR";
        med.push_back("SUR");
        setDocBook();

    }
    else if (w == "PSY"){
           medCode = "PSY";
        med.push_back("PSY");
        setDocBook();

    }
    else if (w == "ORT"){
        medCode = "ORT";
        med.push_back("ORT");
        setDocBook();

    }
    else if (w == "NEU"){
            medCode = "NEU";
        med.push_back("NEU");
        setDocBook();

    }

    else if (w == "DET"){
            medCode = "DET";
        med.push_back("DET");
        setDocBook();

    }
    else if (w == "ENT"){
            medCode = "ENT";
        med.push_back("ENT");
        setDocBook();

    }
     else if (w == "OPT"){
             medCode = "OPT";
        med.push_back("OPT");
        setDocBook();

    }
    else {
        cout << "Please enter speciality code correctly and try again." << endl;
        cout << "It is case sensitive. And All capital letters" << endl;
        menudr();
    }






        }
        void doctorCheckin::dcChoutsetdcName(string xxx, string yyy){
            fullCkName = xxx + " " +  yyy;
        }
