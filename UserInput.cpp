#include <iostream>
#include <string>
using namespace std;

int main() {
  string brukerInput;
  cout << "Skriv noe her: ";
  getline (cin, brukerInput);
  cout << "Du skrev: " << brukerInput;
  return 0;
}