#include <iostream>
#include<time.h>

using namespace std;

void studentInfo()
{
    cout<< "Hakeem Thompson         415000301"<<endl;
    cout<<"Declaration: I declare that the work submitted is my own and that I have not reproduced the work of another student, friend, or authoritative source."<<endl;
}

int euclid (int num1, int num2)
{   
    int dividend = num1 >= num2 ? num1 : num2;
    int divisor = num1 <= num2 ? num1 : num2;
    int count = 0;
    while (divisor !=0){
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
        count++;
    }
    cout << "Number of times loop executed is: " << count << endl;
    cout << "GCD is ";
    return dividend;
}

int main()
{   
    studentInfo();
    srand (time(NULL));

    int random1=0, random2=0;
    for (int i=0; i<19; i++)
    {
        random1 = rand() % 50000 + 50;
        random2 = rand() % 50000 + 50;  
    
        cout << "Random numbers " << random1 << endl << random2 << endl;

        cout << euclid(random1, random2) << endl;
    }
    return 0;
}