#include <iostream>
#include<time.h>
using namespace std;

void studentInfo()
{
    cout<< "Hakeem Thompson         415000301"<<endl;
    cout<<"Declaration: I declare that the work submitted is my own and that I have not reproduced the work of another student, friend, or authoritative source."<<endl;
}

void compSortArray(int numArray[], int sortedArray[], int num)
{
    studentInfo();
    int countArray[num] = {0};
    int compareCount = 0;
    
    for (int i = 0; i < num ; i++)
    {
        countArray[i] = 0;
    }
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num ; j++)
        {
            if (numArray[i] < numArray[j])
            {
                countArray[j] += 1;
                compareCount += 1;
            }
            else
            {
                countArray[i] += 1;
            }
            
           
        }
        
        
    }

    for (int i = 0; i < num ; i++)
    {
        sortedArray[countArray[i]] = numArray[i];
    }

    cout <<"The count of the comparison is: " << compareCount <<endl;

}

int main()
{
    studentInfo();
    srand (time(NULL));
    int num = 5;    
    int randNumCount = 60;
    int A[5] = {414, 125, 78, 34, 57};
    int S[5] = {};
    int randArray[60]={};
    int randSortArray[60]={};

    compSortArray(A, S, num);
    

    cout << "The unordered list is: " << endl;

    for(int i=0; i < num; i++)  
    {
        cout << A[i] << " ";
    }

    cout << endl;

    cout << "The ordered list is: ";
    
    for (int i = 0; i < num; i++)
    {
        cout << S[i] << " ";
    }

    int random1=0;
    cout << endl << "Random numbers in array are: " << endl;

    for (int i=0; i<randNumCount; i++)
    {
        random1 = rand() % 1000 + 10;

       randArray[i]= random1;
        cout << " " << randArray[i];   

    }

    cout <<endl;
    compSortArray(randArray, randSortArray, randNumCount);

    cout << "The unordered random list is: " << endl;
    
    for(int i=0; i < randNumCount; i++)
    {
        cout << randArray[i] << " ";
    }
    cout <<endl;
    cout << "The ordered random list is: ";
    
    for (int i = 0; i < randNumCount; i++)
    {
        cout << randSortArray[i] << " ";
    }

    
    return 0;   

}