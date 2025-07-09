#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;

int random(int first_number, int second_number) {
    return first_number * second_number;
}

int main() {

    cout << "Random number: " << random(5,19) << endl;

    return 0;
}