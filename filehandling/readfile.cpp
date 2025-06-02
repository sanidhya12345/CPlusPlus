#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main(){

    ifstream myfile("file.txt");
    // check the file for errors
    if(!myfile) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    string line;

    while(!myfile.eof()){

        //store the current line data into the line variable.
        getline(myfile,line);

        //print the line data

        cout<<line<<endl;
    }

    myfile.close();

    return 0;
}
