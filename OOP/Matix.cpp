#include<bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int row,column;
    char a[5][5];

public:
    Matrix(int r,int c)
    {
        row=r;
        column=c;


    }

    int getrows()
    {
        return row;
    }

    int getcolumns()
    {
        return column;
    }

    void setelements(int i,int j,int value)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                a[i][j]=value;
            }
        }
    }

    Matrix add(Matrix other)
    {
        Matrix result(row,column);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                result.a[i][j]=a[i][j] + other.a[i][j];
            }
        }
        return result;
    }

    Matrix multi(Matrix other)
    {
        Matrix result(row,other.column);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<other.column; j++)
            {
                for(int k=0;k<column;k++)
                {
                result.a[i][j]=a[i][k] * other.a[k][j];
                }
            }
        }
        return result;
    }



    void display()
    {
    for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Matrix mat1[3][3];

    mat1.setelements(0,0,1);
    mat1.setelements(0,1,2);
    mat1.setelements(0,2,3);
    mat1.setelements(1,0,4);
    mat1.setelements(1,1,5);
    mat1.setelements(1,2,6);
    mat1.setelements(2,0,7);
    mat1.setelements(2,1,8);
    mat1.setelements(2,2,9);
    cout<<"Matrix1 : "<<endl;
    mat1.display();

    Matrix mat2[3][3];
    mat2.setelements(0,0,1);
    mat2.setelements(0,1,2);
    mat2.setelements(0,2,3);
    mat2.setelements(1,0,4);
    mat2.setelements(1,1,5);
    mat2.setelements(1,2,6);
    mat2.setelements(2,0,7);
    mat2.setelements(2,1,8);
    mat2.setelements(2,2,9);
    cout<<"Matrix2 : "<<endl;
    mat2.display();

    return 0;
}
