#include <iostream>
#include <string>

using namespace std;

string reverseString(string s)
{
	for (int i = 0; i < (s.size() / 2); i++)
	{
		char temp = s[i];
		s[i] = s[s.size() - 1 - i];
		s[s.size() - 1 - i] = temp;
	}

	return s;
}

string shortestPalindrome(string s)
{
	string rs = reverseString(s);
	
	string pile = rs;	// The pile to push onto tstack and tstackr
	string tstack;		// prefix for s
	string tstackr;		// suffix for rs

	while (tstack + s != rs + tstackr) 
	{
		tstack	= tstack + pile[0];
		tstackr = pile[0] + tstackr;

		pile = pile.substr(1, rs.size() - 1);
	}

	return tstack + s;

}

int main()
{
	string temp;

	while (true)
	{
		cin >> temp;
		cout << shortestPalindrome(temp) << endl;
	}
    return 0;
}

