#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int main() {

  string s = "Arjun Atapadkar";

  // for uppercase
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] = s[i] - 32;
  }

  cout << s << endl;

  for(int i=0; i<s.size(); i++){
      if(s[i]>='A' && s[i]<='Z')
          s[i] = s[i] + 32;
      
  }
  cout<< s <<endl;
  return 0;
}