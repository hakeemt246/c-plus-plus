#include <iostream>
#include<time.h>
using namespace std;

void studentInfo()
{
    cout<< "Hakeem Thompson         415000301"<<endl;
    cout<<"Declaration: I declare that the work submitted is my own and that I have not reproduced the work of another student, friend, or authoritative source."<<endl;
}

int consecIntCheck(int num1, int num2)
{   
    studentInfo();
    int min =0;
    min = num1 < num2 ? num1 : num2;
    int count = 0, remainder=0;
    while (min>0)
    {
        
        if (num1% min==0 && num2%min==0)
        {
            cout << "Number of times loop executed is: " << count << endl;
            return min;            
        }
        else
        {   
            min--;
        }
        
        count++;
    }


}

int main ()
{
    int gcd = 0;
    

    srand (time(NULL));

    int random1=0, random2=0;
    for (int i=0; i<19; i++)
    {
        random1 = rand() % 50000 + 50;
        random2 = rand() % 50000 + 50;
    
        cout << "Random numbers " << random1 << endl << random2 << endl;
    
        gcd = consecIntCheck(random1, random2);
        cout << "The GCD is: " << gcd << endl;
    }
    return 0;
}