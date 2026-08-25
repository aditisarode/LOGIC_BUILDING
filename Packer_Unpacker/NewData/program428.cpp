#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        SinglyCL();

};
SinglyCL::SinglyCL(){
    cout<<"Inside constructor";
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}

int main(){
    SinglyCL Sobj;

    return 0;
}
