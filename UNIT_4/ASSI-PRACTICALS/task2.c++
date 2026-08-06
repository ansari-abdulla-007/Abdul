//Implement a library management system using classes and objects.
#include <iostream>
using namespace std;
class Library{
    private:
    string bookname;
    string authorname;
    public:
    void setData(){
        bookname="C++ programming!";
        authorname="Bjarne Stroustrup!";
    }
    void displaydata(){
        cout<<"Book Name: "<<bookname<<endl;
        cout<<"Author Name: "<<authorname<<endl;
    }
};
int main(){
    Library l1;
    l1.setData();
    l1.displaydata();
    return 0;
}