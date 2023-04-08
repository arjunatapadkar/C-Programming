#include <algorithm>
#include <iostream>
#include <string>


using namespace std;
int main() {
  string s = "AAAAArrrrjjjjuuuunnnn";

  int n = s.size();
  char ans[n];
  ans[0] = s[0];
  int counter = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1])
      ans[counter] = s[i], counter++;
  }
  cout << ans;
  return 0;
}