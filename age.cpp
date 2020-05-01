#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age>=150 || age<1){
        cout<<"Invalid age\n";
    }
    else if(age>=18){
        cout<<"Congrats! You are eligible to vote\n";
    }
    else{
        cout<<"Sorry you are not eligible to vote\n";
    }
    return 0;
}
