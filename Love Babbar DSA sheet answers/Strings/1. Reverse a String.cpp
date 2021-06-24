// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}

// ------------------------------------ 
// A quickly written program for reversing a string
// using reverse()
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "geeksforgeeks";

	// Reverse str[begin..end]
	reverse(str.begin(), str.end());

	cout << str;
	return 0;
}

// ====================================================== 
// C++ program to print reverse of a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
for (int i=str.length()-1; i>=0; i--)
	cout << str[i];
}

// Driver code
int main(void)
{
	string s = "GeeksforGeeks";
	reverse(s);
	return (0);
}

// --------------------------------------------------------------- 
// A simple C++ program to reverse string using constructor
#include <bits/stdc++.h>
using namespace std;
int main(){

	string str = "GeeksforGeeks";

	//Use of reverse iterators
	string rev = string(str.rbegin(),str.rend());

	cout<<rev<<endl;
	return 0;
}

//--------------------------------------------------------------
// C++ program to get reverse of a const string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse string and return
// reverse string pointer of that
char* reverseConstString(char const* str)
{
	// find length of string
	int n = strlen(str);

	// create a dynamic pointer char array
	char *rev = new char[n+1];

	// copy of string to ptr array
	strcpy(rev, str);

	// Swap character starting from two
	// corners
	for (int i=0, j=n-1; i<j; i++,j--)
		swap(rev[i], rev[j]);	
	
	// return pointer of the reversed string
	return rev;
}

// Driver code
int main(void)
{
	const char *s = "GeeksforGeeks";
	printf("%s", reverseConstString(s));
	return (0);
}
