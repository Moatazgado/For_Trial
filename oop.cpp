#include <iostream>
/*#include <string>*/
using namespace std;

class car {
public:
    string color;
    status(){
        cout<<"the car is running"endl;
    }
};
car(string color){
    string color = color;
}

int main() {
    new car car1("red");
    cout<<car1.color <<endl;
    car1.status;
    return 0;
}
