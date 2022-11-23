#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    srand(time(0));
    cout << "Tilfeldig tall imellom 0 og 100: " << 1 + (rand() % 100) << endl;
}