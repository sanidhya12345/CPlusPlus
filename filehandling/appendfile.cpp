#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // open a text file for appending
    ofstream my_file("writefile.txt", ios::app);

    // if the file doesn't open successfully, print an error message
    if(!my_file) {
        cout << "Failed to open the file for appending." << endl;
        return 1;  
    }

    // append multiple lines to the file
    my_file << "Line 4" << endl;
    my_file << "Line 5" << endl;
    my_file << "Line 6" << endl;

    // close the file
    my_file.close();

    return 0;
}