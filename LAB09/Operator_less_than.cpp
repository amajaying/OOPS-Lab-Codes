 #include <iostream>
 using namespace std;

 class Complex{
    private:
    int real; 
    int img;
    public:
    Complex(int r= 0, int i=0){
        real=r;
        img=i;
    }
    friend ostream& operator << (ostream& o, Complex& c);
    friend istream& operator >> (istream& i, Complex& c);
 };

 ostream& operator << (ostream& o, Complex & c){
    o << c.real <<" + " << c.img <<"i";
    return o;
 }

istream& operator >> (istream& i, Complex& c){
    i >> c.real >> c.img;
    return i;
}

 int main(){
    Complex c1;
    cin >> c1;
    cout << c1;
 }