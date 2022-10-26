// Consider a class of 3 X 3 matrix. Overload the - (unary) which should negate the numbers stored in the object.

#include <iostream>
using namespace std;

class Matrix
{
    int mat[3][3];
    public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[i][j] = 0;
            }
        }
    }
    Matrix(int a[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[i][j] = a[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator-()
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.mat[i][j] = -mat[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    int a[3][3] = {3,4,5,2,-3,7,-8,1,2};
    Matrix m1(a), m2;
    m2 = -m1;
    cout<<"Before negation: "<<endl;
    m1.display();
    cout<<"After negation: "<<endl;
    m2.display();
    return 0;
}
