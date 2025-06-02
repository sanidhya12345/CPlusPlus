#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main() {
    

    ofstream myfile("data.txt");

    if(!myfile) {
        cout << "Failed to open the file for appending." << endl;
        return 1;  
    }

    //writing data into the file
    myfile<<"My Name: Vanshika Varshney"<<endl;
    myfile<<"Age: 91 years"<<endl;


    ifstream mfile("data.txt");

    if(!mfile) {
        cout << "Failed to open the file for appending." << endl;
        return 1;  
    }

    string line;
    while(!mfile.eof()){

        getline(mfile,line);

        cout<<line<<endl;

    }

    myfile.close();

    return 0;
}