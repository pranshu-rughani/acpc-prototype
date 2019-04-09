#ifndef STUDENT_H
#define STUDENT_H

//using namespace std;

class Student{
    private:
        char name[25];
        int rnk;
        char password[10];
        int choice[10];
        char result[25];

    public:
        Student();
        Student(char *n,int r,char *ps);
        bool check_authentication(char *p1,int r);
        void printdetails();
        void enterchoice();
        void enterchoice(int *c);
        void printchoice();
        void getalot(char *c);
        void displayresult();
        friend class ACPCserver;

};


#endif // STUDENT_H
