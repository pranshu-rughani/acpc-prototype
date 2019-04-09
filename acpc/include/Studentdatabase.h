#ifndef STUDENTDATABASE_H
#define STUDENTDATABASE_H
#include"Student.h"

class Studentdatabase
{
    public:
        Studentdatabase();
        void login();
        void signup();
        void view(int r);
        friend class ACPCserver;
    private:
        Student *dbs[1000];
};

#endif // STUDENTDATABASE_H
