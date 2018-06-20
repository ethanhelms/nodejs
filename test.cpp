#include <iostream>
#include <string>
using namespace std;


bool isItInteger(string s) {

  int c;
  for (int i= 0; i < s.size(); i++) {
    c = (int)s[i];
    if ((c >= 48) && (c <= 57)) {
      continue;
    }
    else {
      return false;
    }

  }

  return true;
}

int main(int argc, char **argv) {

  int max = 0;
  string fizz = "Fizz";
  string buzz = "Buzz";
  string fizzbuzz = fizz + buzz;

  string input = argv[1]; // parameter
  char c;
  // input verfication
  if (argc > 4) {
    cout << "Too many arguments: Usage: FizzBuzz <max>" << endl;
    return 1;
  }

  else if (argc ==1) {
    max = 100;
  }
  else if (argc < 0) {
    cout << "Usage: FizzBuzz <max>" <<endl;
  }

  // if the parameter is not an integer
  else if (!isItInteger(argv[1])) {
    cout << "Usage: FizzBuzz <max> \n Please enter a valid <max> - Integer" <<endl;
    return 1;
  }

  else {
    if (argc == 4) {
      fizz = argv[2];
      buzz = argv[3];
      fizzbuzz = fizz + buzz;
    }
    else if (argc == 3) {
      fizz = argv[2];
      fizzbuzz = fizz + buzz;
    }

    max = stoi(argv[1]);
  }

for (int i =1; i <= max; i++) {

// multiple of 3 Fizz
  if (i % 3 == 0) {
    if (i % 5 == 0) {
    cout << fizzbuzz <<endl;
    }
    else {
      cout<< fizz<< endl;
    }
  }
  else if (i % 5 == 0) {

    cout << buzz<< endl;
  }
  else {
// both - FizzBuzz
  cout << i <<endl;
}

}
}
