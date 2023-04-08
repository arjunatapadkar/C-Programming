#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int s;
  cout << "Enter the sum:";
  cin >> s;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum = 0;
    for (int j = i; (j < n && sum <= s); j++) {
      sum = sum + a[j];
      if (sum == s) {
        cout << i + 1 << " " << j + 1;
        return 0;
      }
    }
  }

  if (sum != s) {
    cout << "Not subarray found.";
  }
  return 0;
}