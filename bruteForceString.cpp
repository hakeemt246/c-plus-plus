#include <iostream>
#include<string.h>

using namespace std;

void studentInfo()
{
    cout<< "Hakeem Thompson         415000301"<<endl;
    cout<<"Declaration: I declare that the work submitted is my own and that I have not reproduced the work of another student, friend, or authoritative source."<<endl;
}


//Checks for a specific pattern in a string 
void stringMatch (string T, string P, int n, int m)
{
    int count = 0;
    for (int i=0; i <= (n-m); i++)
    {
        int j=0;
        
        while (j < m && P[j] == T[i+j])
        {   
            count++;
            j+=1;
        }

        if (j==m)
        {
            cout << "Pattern found at index "<< i << endl;
        }
        else
        {
             cout << "Pattern not found" << endl;
        }

        
    }
    cout << "Comparison was done " << count << " times" << endl;
     return ;
}
int main ()
{
    studentInfo();
    
    string text = "aaaaaaaaaaaaaaaaaaab";
    string pattern= "aab";

    // Questions 1 - 5

    /* for (int i=14; i<=16; i++) //Pattern choosing
    {   
        pattern += text[i];
    } */
    int num = text.size();
    int patternNum = pattern.size();
    
    stringMatch(text, pattern, num, patternNum);
    cout << "Pattern: "<< pattern;
    cout << endl;
    cout << "Text: " << text << endl;
    return 0;
}   