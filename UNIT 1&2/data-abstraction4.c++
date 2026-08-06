#include <iostream>
using namespace std;
class college{
    private:
    string course; //hidden data.

    public:
    void setcourse(){
        course="SW&MAD";
    }
    void showcourse(){
        cout<<"course: "<<course<<endl;
    }
};
int main(){
    college c1;
    c1.setcourse();
    c1.showcourse();

    return 0;
}