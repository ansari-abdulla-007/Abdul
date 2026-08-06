//write getter and setter methods for marks.
#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    void setmarks(int m){
        marks=m;
    }
    int getmarks(){
        return marks;
    }
};
int main(){
    student s1;
    s1.setmarks(85);
    cout<<"Marks: "<<s1.getmarks()<<endl;

    return 0;
}