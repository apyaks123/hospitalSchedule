#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "doctorCheckin.h"

//doctorCheckin::patientCheckin()
//{
//    //ctor
//}

    void doctorCheckin::display()
    {

    string firstName;
    string lastName;
    int hage;
    string mcode;
    static int em;

    cout << "---------------------------------------" << endl;
    cout << "Please enter Patient First name" << endl;
    cin >> firstName;
    cout << "---------------------------------------" << endl;

    cout << "---------------------------------------" << endl;
    cout << "Please enter Patient Last name "<< endl;
    cin >> lastName;
    cout << "---------------------------------------" << endl;
    setpcName(firstName,lastName);
    cout << "Customer name: " << getpcName() << endl;
    cout << "---------------------------------------" << endl;
    cout << "Please enter Patient's age" << endl;
    cin >> hage;
    setage(hage);
    cout << "Customer age:" << getAge() << endl;
    cout << "---------------------------------------" << endl;

    cout << "---------------------------------------" << endl;
    cout <<  "Please enter your med Speciality code : " << endl;
    cout << "---------------------------------------" << endl;
    cout << "---------------For example--------------- " << endl;
    cout << "Pediatrics==PED, General practice==GEN, Internal medicine==INT, " << endl;
    cout <<"Cardiology==CAR, Surgeon==SUR, Obstetrics==OBS, Psychiatry==PSY," << endl;
    cout << "Neurology==NEU, Orthopedics==ORT, Dermatology==DET, Ophthalmology==OPT, Ear|Nose|Throat==ENT" << endl;
    cout << "---------------------------------------" << endl;
    cin >> mcode;
    specialityCOde(mcode);
    cout << getspecialityCode() << "Speciality code" << endl;
   //cout << getspecialityCode() << "Patient enter code" << endl;

    cout << "Please enter 0 for non-emergency case." << endl;
    cout << "Please enetr 1 for emergency case." << endl;
    cin >> em;

switch (em)
    {
    case 0:
        {
            nonEmergencyCase();
        }
        break;


    case 1:
        {

            emergecnyCase();
        }
        break;
    default:
        {
            cout << "---------------------------------------" << endl;
            cout << "Please enter digit from 0 - 1. To indicate. emergency. And Try again" << endl;
            cout << "---------------------------------------" << endl;
            display();
        }

        break;
    }
    }
    void doctorCheckin::setpcName(string x, string k){
    patientFirstName = x;
    patientLastName = k;

    patientFullName = patientFirstName + " " + patientLastName;


    }
    string doctorCheckin::getpcName() const
    {
        return patientFullName;

    }

    void doctorCheckin::setage(int n){
    age = n;


    }
    int doctorCheckin::getAge() const
    {
    return age;


    }
    void doctorCheckin::specialityCOde(string e)

    {

      if (e == "PED")
        {
            patientMCode = "PED";
            patientMedCode.push_back("PED");
            //setDocBook();
        }
    else if (e == "GEN"){
            patientMCode = "GEN";
            patientMedCode.push_back("GEN");
            //setDocBook();
    }
    else if (e == "INT"){
        patientMCode = "INT";
        patientMedCode.push_back("INT");
        //setDocBook();
    }
    else if (e == "CAR"){
        patientMCode = "CAR";
        patientMedCode.push_back("CAR");
        //setDocBook();

    }
    else if (e == "OBS"){
            patientMCode = "OBS";
        patientMedCode.push_back("OBS");
        //setDocBook();

    }
    else if (e == "SUR"){
             patientMCode = "SUR";
        patientMedCode.push_back("SUR");
        //setDocBook();

    }
    else if (e == "PSY"){
           patientMCode = "PSY";
        patientMedCode.push_back("PSY");
        //setDocBook();

    }
    else if (e == "ORT"){
        patientMCode = "ORT";
        patientMedCode.push_back("ORT");
        //setDocBook();

    }
    else if (e == "NEU"){
            patientMCode = "NEU";
        patientMedCode.push_back("NEU");
        //setDocBook();

    }

    else if (e == "DET"){
            patientMCode = "DET";
        patientMedCode.push_back("DET");
        //setDocBook();

    }
    else if (e == "ENT"){
            patientMCode = "ENT";
        patientMedCode.push_back("ENT");
        //setDocBook();

    }
     else if (e == "OPT"){
             patientMCode = "OPT";
             patientMedCode.push_back("OPT");
        //setDocBook();

    }
    else {
        cout << "Please enter speciality code correctly and try again." << endl;
        cout << "It is case sensitive. And All capital letters" << endl;
        display();
    }



        }

    string doctorCheckin::getspecialityCode() const
    {
    return patientMCode;


    }






    void doctorCheckin::nonEmergencyCase()
    {
        static string j = patientMCode;
        vector<string> tmp;
        tmp.push_back(patientMCode);

       cout << "Non-emergency case match" << endl;
       if (medCode.empty()){

       }

//        string x = q.getmedCode();
//        cout << "x" << endl;
//        if (x == patientMCode){
//            cout << "Ok" << endl;
//        }
//        else {
//            cout << "asdasdasdasd" << endl;
//
        cout << med[0] << "doctor med code" << endl;
        cout << patientMedCode[0] << "patient med code" << endl;
        bool result = equal(med.begin(), med.end(), tmp.begin());
        cout << med[0] << "doctor med code" << endl;
        tmp.clear();
        cout << patientMedCode[0] << "patient med code" << endl;
        if (result){

            cout << "Ok" << endl;
            bookPatient();
        }
        else  {
            cout << "Sorry the speciality code you requested is not available right now so we have paired with some other practioner" << endl;
            bookPatient();
        }


    }
    void doctorCheckin::emergecnyCase()
    {
        cout << "emergency case match" << endl;
        display();
    }
    void doctorCheckin::bookPatient(){

    int x = getAge();

    if (x > 16){
        cout << "You're booking have been confirmed" << endl;
        cout << "Below is your confirmation" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Doctor name: " << getdcName() << "Patient name: " << getpcName() << "Speciality code: " << getmedCode() << endl;
        cout << "Please go to this room" << getRoomNumber() << endl;
        cout << "---------------------------------------" << endl;
    }
    else if (x <= 16){
        string k = getmedCode();
        string g = getspecialityCode();
        vector<string> tmmm;
        vector<string> eeeee;
        tmmm.push_back("PED");
        eeeee.push_back("GEN");
        bool result1 = equal(med.begin(), med.end(), tmmm.begin());
        bool result2 = equal(med.begin(), med.end(), eeeee.begin());

        if (result1){
            cout << "Below is your confirmation" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Doctor name: " << getdcName() << "Patient name: " << getpcName() << "Speciality code: " << getmedCode() << endl;
            cout << "Please go to this room" << getRoomNumber() << endl;
            cout << "---------------------------------------" << endl;

        }
        else if (result2){
            cout << "Below is your confirmation" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Doctor name: " << getdcName() << "Patient name: " << getpcName() << "Speciality code: " << getmedCode() << endl;
            cout << "Please go to this room" << getRoomNumber() << endl;
            cout << "---------------------------------------" << endl;

        }


    }




    }

    void doctorCheckin::waitlist(){
            cout << "Below is your confirmation" << endl;
            cout << "------You've been placed in the waitlist---------------------------------" << endl;
            cout <<  "Patient name: " << getpcName() << "Speciality code: " << getmedCode() << endl;
            //cout << "Please go to this room" << getRoomNumber() << endl;
            cout << "---------------------------------------" << endl;



    }




