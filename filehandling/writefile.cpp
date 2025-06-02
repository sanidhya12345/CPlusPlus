#include<bits/stdc++.h>
#include<fstream>

using namespace std;



int main(){


    //if the required file is not exist it will create the file otherwise it will open it.
    ofstream myfile("writefile.txt");

     // check the file for errors
    if(!myfile) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    //writing multiple lines into single file
    myfile<<"This is line 1 "<<endl;
    myfile<<"This is Vanshika Varshney "<<endl;
    myfile<<"student of btech third year"<<endl; 


    myfile.close(); //closing the file
    return 0;
}
