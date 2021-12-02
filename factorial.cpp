#include <iostream>
#include<math.h>

using namespace std;

int count=0;
//recursion computation for n! 

void studentInfo()
{
    cout<< "Hakeem Thompson         415000301"<<endl;
    cout<<"Declaration: I declare that the work submitted is my own and that I have not reproduced the work of another student, friend, or authoritative source."<<endl;
}
double factorial( int n) 
{   
    if (n == 0)
        return 1;
    else{    
    cout <<"Computing factorial " << n << " " <<endl ;
    count++;
    return factorial(n - 1) * n; 
    }
}
int main ()
{
    studentInfo();
    int n= 5;
    double factorialN=factorial(n); //reversive call assigned to variable factorialN
    
   cout << endl << "The Factorial of " << n <<" is " << factorialN << endl;
   cout << "The number of multiplications are " << count ;

    return 0;
}