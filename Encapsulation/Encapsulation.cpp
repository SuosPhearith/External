#include<iostream>
using namespace std;
class student{
private:
    int ID;
    string name;
public:
    void setstudentID(int setID)
    {
        cout<<"\nPlease input the ID:"<<setID<<endl;
        ID=setID;
    }
    int getstudentID()
    {
        return ID;
    }
    void setstudentname(string setname)
    {
        name=setname;
    }
    string getstudentname()
    {
        return name;
    }
};
int main(){
    student Obj;
    Obj.setstudentID(1111);
    Obj.setstudentname("babi");
    cout<<Obj.getstudentID()<<endl;
    cout<<Obj.getstudentname()<<endl;

    return 0;
}
