#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "doctorCheckin.h"

//doctorCheckin::doctorCheckin()
//{
//    //ctor
//    //cout << "Hello!" << endl;
//}

void doctorCheckin::menudr()
{
    //doctorCheckin m;

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
    setdcName(fname,lname);

    cout << "---------------------------------------" << endl;
    cout <<  "Please enter your Examination room number : " << endl;
    cout <<  "Please enter your Examination room number from 1 to 20 : " << endl;
    cout << "---------------------------------------" << endl;
    cin >> rNo;
    cout << rNo;
    setRoomNumber(rNo);
    //cout << "Doctor room no." << getRoomNumber()<< endl;
    //cout << "Doctor name: " << getdcName() << endl;
    cout << "---------------------------------------" << endl;
    cout <<  "Please enter your med Speciality code : " << endl;
    cout << "---------------------------------------" << endl;
    cout << "---------------For example--------------- " << endl;
    cout << "Pediatrics==PED, General practice==GEN, Internal medicine==INT, " << endl;
    cout <<"Cardiology==CAR, Surgeon==SUR, Obstetrics==OBS, Psychiatry==PSY," << endl;
    cout << "Neurology==NEU, Orthopedics==ORT, Dermatology==DET, Ophthalmology==OPT, Ear|Nose|Throat==ENT" << endl;
    cout << "---------------------------------------" << endl;
    cin >> code;
    setmedCOde(code);

    cout << "DOctor medical code :" << getmedCode() << endl;

    //ctor
    //cout << "Hello!" << endl;
}




void doctorCheckin::setdcName(string n, string y){
     //doctorName = n;
        fullName = n + " " + y;




}
string doctorCheckin::getdcName() const{
    //ss = n;
    return fullName;





}

void doctorCheckin::setRoomNumber(int p)
{




    int temp = p;
    //vector <int>  temps;
    bool err = false;
    if (p > 0 & p <= 20)
        {

    for(size_t i=0; i<rm.size(); i++){
    if(temp==rm[i])
        {
        cout << "I'm sorry the room is currently booked" << endl;
        cout << "Please try again. Thank you." << endl;
        err = true;
        menudr();
        break;
    }
    }
    if(!err) {
        roomNumber = p;
        rm.push_back(p);


    }


}

    else {
        cout << "Please enter number between 1-20. And Try again." << endl;
        menudr();

    }





}
int doctorCheckin::getRoomNumber() const{
    return roomNumber;

}

void doctorCheckin::setmedCOde(string w){

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

string doctorCheckin::getmedCode() const{


     return medCode;

}

    void doctorCheckin::setDocBook(){
        cout <<"---------------------------------------------------------------" << endl;
        cout << "Congratulation Doctor you're booking have been confirmed." << endl;
        cout << "-------------Below is your confirmation------------------" << endl;
        cout <<"---------------------------------------------------------------" << endl;
        cout <<"Doctor's name: " <<  getdcName()<<"Room number: " << getRoomNumber()<< "Medical code: " << getmedCode() << endl;
        cout <<"---------------------------------------------------------------" << endl;
        menu();


    }





