#include <iostream>
#include <string>
using namespace std;

class binary {

  string s;

public:
  void read(void);
  void chk_bin(void);
  void display(void);
  void ones_Compliment(void);
};

void binary ::read(void) {

  cout << "Enter the Binary Number:- ";
  cin >> s;
}

void binary ::chk_bin(void) {

  for (int i = 0; i < s.length(); i++) {

    if (s.at(i) != '0' && s.at(i) != '1') {
      cout << "Incorrect Binary!!";
      exit(0);
    }
  }
  //   cout << "Correct Binary.\n";
}

void binary ::ones_Compliment(void) {

  for (int i = 0; i < s.length(); i++) {

    if (s.at(i) == '1') {

      s.at(i) = '0';
    } else {

      s.at(i) = '1';
    }
  }
}

void binary ::display(void) {

  for (int i = 0; i < s.length(); i++) {
      
    cout << s.at(i);
  }
  cout << endl;
}

int main() {

  binary b;
  b.read();
  b.chk_bin();
  cout << "\nYou Entered the Number:- ";
  b.display();
  cout << endl;
  b.ones_Compliment();
  cout << "The Ones Compliment Of The Given Binary Number:- ";
  b.display();
  cout << endl;

  return 0;
}