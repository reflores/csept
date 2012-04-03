#include <string>
#include <iostream>

using namespace std;

bool yes_no_prompt(string prompt)
{
  cout << prompt << endl;
  string input;
  cin >> input;
        
  if ((input == "y") || (input == "Y"))
  {
    return true;
  }
}

time_t string_to_time_t(string s)
{
  //FIXME string must conform to a int indicating time past the epoch
}

time_t usr_time_to_time_t(string s)
{
  //FIXME format is: YYYYMMDDHHMMSS
}
