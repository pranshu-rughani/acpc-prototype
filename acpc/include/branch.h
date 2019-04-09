#ifndef BRANCH_H
#define BRANCH_H


class branch
{
    public:
        branch(char *n,int id,int s);
        void details();
        int available();
        void alot();
        friend class ACPCserver;
    protected:

    private:
        int branch_id;
        char branch_name[10];
        int seat;
        int seatl;
        //getresult();

};

#endif // BRANCH_H
