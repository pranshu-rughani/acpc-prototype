#ifndef ACPCSERVER_H
#define ACPCSERVER_H
#include"Studentdatabase.h"
#include"Collegedatabase.h"

class ACPCserver
{
    public:
        void result(Studentdatabase S,Collegedatabase C);
        void allot(Studentdatabase S,Collegedatabase C,int i);
        int status();
    private:
        int st=0;
};

#endif // ACPCSERVER_H
