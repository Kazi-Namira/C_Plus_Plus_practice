#include <iostream>
#include <complex>
using namespace std;
class Complex
{
private:
    double real1,real2,imaginary1,imaginary2;

public:

    std::complex<double> sumcom(double r1,double i1,double r2,double i2)
    {

        return (r1+r2)+(i1+i2)*1i;

    }


    std::complex<double> subcom(double r1,double i1,double r2,double i2)
    {

        return (r1-r2)+(i1-i2)*1i;

    }

    std::complex<double> multicom(double r1,double i1,double r2,double i2)
    {

        return (r1*r2)+(i1*i2)*1i;

    }
};

int main()
{

    double Real1,Real2,Imaginary1,Imaginary2;
    Complex complex;

    cout<<"Enter real and imaginary parts of 1st complex number: "<<endl;
    cin>>Real1 >>Imaginary1;

    cout<<"Enter real and imaginary parts of 2nd complex number: "<<endl;
    cin>>Real2 >>Imaginary2;

    std::complex<double> sum=complex.sumcom(Real1,Real2,Imaginary1,Imaginary2);
    std::complex<double> sub=complex.subcom(Real1,Real2,Imaginary1,Imaginary2);
    std::complex<double> multi=complex.multicom(Real1,Real2,Imaginary1,Imaginary2);

    cout<<"Sum:"<<sum<<'\n'<<"Sub:"<<sub<<'\n'<<"Multi:"<<multi<<endl;
    return 0;
}
