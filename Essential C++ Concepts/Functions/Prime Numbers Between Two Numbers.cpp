/* C++ Program to find Prime Numbers between two numbers */

#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "\nEnter 1st positive integer :: ";
    cin >> n1;
    cout << "\nEnter 2nd positive integer :: ";
    cin >> n2;

    cout << "\nPrime numbers between [ " << n1 << " and " << n2 << " ] are :: ";

    for(int i = n1+1; i < n2; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag == true)
            cout << i << "  ";
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
    bool flag = true;

    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}


// ----------------------------- Output ------------------------------
/* C++ Program to find Prime Numbers between two numbers */

Enter 1st positive integer :: 1

Enter 2nd positive integer :: 100

Prime numbers between [ 1 and 100 ] are :: 2  3  5  7  11  13  17  19  23  29  31  37 
41  43  47  53  59  61  67  71  73  79  83  89  97

Process returned 0
