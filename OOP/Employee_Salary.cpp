#include<bits/stdc++.h>
using namespace std;
class Employee
{
private:
    long long salary;
    int workhours_perday;

public:
    long long getInfo(long long s,int h)
    {
        salary=s;
        workhours_perday=h;
    }


    void AddSal()
    {
        if(salary<500)
        {
            salary+=10;
        }

    }

    void AddWork()
    {
        if(workhours_perday>6)
        {
            salary+=5;
        }

    }


    long long totalSal()
    {
        return salary;
    }

    void display()
    {
        cout<<"Final Salary : "<<salary<<endl;
    }
};

int main()
{

    Employee SALARY;
    long long salary;

    SALARY.getInfo(499,8); //if salary less then 500$ ,add 10$. If working hour more then 6hrs add 5$.
    SALARY.AddSal();
    SALARY.AddWork();

    SALARY.display();

    return 0;
}


