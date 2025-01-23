#include <iostream>
using namespace std;
class Matrix
{
private:
    int m11, m12, m21, m22;

public:
    Matrix(int a, int b, int c, int d)
    {
        m11=a;
        m12=b;
        m21=c;
        m22=d;
    }

    friend Matrix transpose(Matrix mat);

    void displayMatrix()
    {
        cout << m11 << " " << m12 << endl;
        cout << m21 << " " << m22 << endl;
    }
};

Matrix transpose(Matrix mat)
{
    return Matrix(mat.m11, mat.m21, mat.m12, mat.m22);
}

int main()
{
    Matrix mat(1, 2, 3, 4);

    cout << "Original Matrix:" <<endl;
    mat.displayMatrix();

    Matrix transposed = transpose(mat);

    cout << "Transposed Matrix:" <<endl;
    transposed.displayMatrix();

    return 0;
}
