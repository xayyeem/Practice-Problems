/*
Problem Statement:- Find first non-repeating character of given String.
Input:- strings
Output:- First non-repeating character is t
*/
#include <bits/stdc++.h>
using namespace std;

void FirstNonRepeat(string s)
{

  for (int i = 0; i < s.length(); i++) {

    if (s.find(s[i], s.find(s[i]) + 1) == string::npos) {
      cout << "First non-repeating character is "<< s[i];

      return;
    }
  }
  cout << "Either all characters are repeating or string is empty";
  return;
}


int main()
{
  string s ;
 
  cin>>s;
  FirstNonRepeat(s);
}
dau-phpv-awu
