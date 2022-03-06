#include<iostream>
using namespace std;

class Employee
{
    public:
        int wk_hr, sal, ad_sal=0, ad_wk=0, f_sal;
        
        void getInfo()
        {
            cout<<"\nEnter Employee salary - ";
            cin>>sal;
            cout<<"\nEnter working hours of Employee per day - ";
            cin>>wk_hr;
        }
        
        int AddSal(int sal)
        {
            if(sal<500)
            {
                ad_sal = sal+10;
            }
            else
            {
                ad_sal = sal + 0;
            }
            return 0; 
        }
        
        int AddWork(int wk_hr, int ad_sal)
        {
            if(wk_hr>6)
            {
                ad_wk = ad_sal+5;
            }
            else
            {
                ad_wk = 0;
            }
            return 0;
        }
        
        int output(int ad_sal, int ad_wk)
        {
            int f_sal;
            if(ad_wk==0)
            {
                f_sal=ad_sal;
            }
            else
            {
                f_sal=ad_wk;
            }
            cout<<"\n\tFinal salary $"<<f_sal;
            return 0;
        }
};


int main()
{
    Employee e1;
    e1.getInfo();
    e1.AddSal(e1.sal);
    e1.AddWork(e1.wk_hr, e1.ad_sal);
    e1.output(e1.ad_sal, e1.ad_wk);
}