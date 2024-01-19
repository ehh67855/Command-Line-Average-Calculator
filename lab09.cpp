#include <iostream>
#include <exception>
#include <string>
using namespace std;


/*
  Computes the average of command line arguments. Throws exception if no numeric values
  were given or if non numeric arguments were given. Inputs: Cmd ln args, Output: success status
*/
int main (int argc, char * argv[]) {
    double sum = 0; //sum of args
    try {
        if (argc == 1) { //catch when nothing is given
            throw 0;
        }
        for (int i = 1 ; i < argc ; i++) {
            sum += stoi(argv[i]);
        }
        cout.precision(3);
        cout << "The average is " << sum / (argc - 1) << endl;

    } catch (int e) {
        cout << "Error: command line arguments must have at least one numeric value.";
        cout << endl << "Goodbye!" << endl;
        exit(0);
    } catch (...) { //catch something is not an int
        cout << "Error: command line arguments after the program name must all be numeric.";
        cout << endl << "Goodbye!" << endl;
        exit(0);
    }
}
