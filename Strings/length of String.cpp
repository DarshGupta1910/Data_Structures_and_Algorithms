// method 1 ------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}

// method 2 -----------------------------------------------
#include <iostream>
using namespace std;

int main() {
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}

//method 3 -----------------------------------------------
#include<iostream>
using namespace std;
int main()
{
string str = "Finding The Length Of The String";
int i = 0,count=0;
while (str[i] != '')
{
++i;
}
cout <<"Length Using While Loop: "<< i << endl;
for (i=0; str[i]!=''; i++)
{
count++;
}
cout <<"Length using For Loop: "<< count << endl;
return 0;
}
