#include<iostream>
using namespace std;

// class Parent{
//     public:
//     Parent(){
//         cout<<"Inside base class 1."<<endl;
//     }

// };

// class Parent1{
//     public:
//     Parent1(){
//         cout<<"Inside base class 2."<<endl;
//     }
// };
// class derived: public Parent, public Parent1{
//     public:
//     derived(){
//         cout<<"Inside derived class.";
//     }
// };

// int main(){
//     derived obj;
//     return 0;
// }

class F{};
class B: public F{};
class A: public B{};
class C: private B{};
class G{};
class E: public F, public G{};

