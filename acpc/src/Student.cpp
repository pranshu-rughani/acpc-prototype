#include "Student.h"
#include<string.h>
#include<iostream>
#include<fstream>

using namespace std;
bool Student::check_authentication(char *p1,int r)
{
            if((!strcmp(password,p1))&&(rnk==r)){
                return true;
            }
                return false;
}


Student::Student(char *n,int r,char *ps)
{
            strcpy(name,n);
            strcpy(password,ps);
            rnk=r;
}

Student::Student(){}
void Student::printdetails(){
    cout<<name<<rnk;
}

void Student::enterchoice(){
    int i;
    cout<<"you can enter 5 choices from given college \n please enter the choice id \n ";
    /*

    code avse print college.txt no
    */
    for(i=0;i<10;i++){
        if(i%2==0){
            cout<<"enter college id "<<endl;
            cin>>choice[i];
        }
        else{
            cout<<"enter branch id "<<endl;
            cin>>choice[i];
        }
    }
    ofstream file2;
    file2.open("choice.txt",ios::app);
    file2<<this->rnk;
    file2.put(' ');
    for(i=0;i<10;i++){
        file2<<choice[i];
        file2.put(' ');
    }
    file2<<"\n";
    file2.close();
    //printchoice();
}
void Student::enterchoice(int *c){
    for(int i=0;i<=9;i++){
        choice[i]=c[i];

    }
    return;

}
void Student::printchoice(){
    for(int i=0;i<=9;i++){

        cout<<choice[i]<<" ";
    }
}
void Student::getalot(char *c){
    strcpy(result,c);
}
void Student::displayresult(){
    cout<<endl<<"your result is:";
    cout<<result<<endl;
}
