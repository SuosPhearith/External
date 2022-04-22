#include<iostream>
using namespace std;
class person{
    private:
        int id;
        string name;
        string address;
        string gender;
    public:
        person(int id, string name , string address, string gender){
            this->id=id;
            this->name=name;
            this->address=address;
            this->gender=gender;
        }
        person(){
            cout<<"The king of the legend"<<endl;
        }
        void setid(int id){
            this->id=id;
        }
        int getid(){
            return id;
        }
        void setname(string name){
            this->name=name;
        }
        string getname(){
            return name;
        }
        void setaddress(string address){
            this->address=address;
        }
        string getaddress(){
            return address;
        }
        void setgender(string gender){
            this->gender=gender;
        }
        string getgender(){
            return gender;
        }
};

int main(){

    person phearith(20200662,"phearith","khmer","male");
    cout<<"Your ID is : "<<phearith.getid()<<endl;
    cout<<"Your name is : "<<phearith.getname()<<endl;
    /*ps.setid(100);
    cout<<ps.getid()<<endl;
    ps.setname("Phearith");
    cout<<ps.getname()<<endl;
    ps.setaddress("I live in Cambodia");
    cout<<ps.getaddress()<<endl;
    ps.setgender("Male");
    cout<<ps.getgender()<<endl;*/
return 0;
}
