#include<bits/stdc++.h>
#include<fstream>

using namespace std;


//to check the file opened successfull or not we have some methods:

//1.By checking the file object directly.
//2.By using is_open function with the ofstream object ex: ofstream myfile("filename")   myfile.is_open() if true:error if false:no error
//3.By using fail function with the ofstream object ex: myfile.fail() if true:- error in file opening if false : no error
int main(){


    //if the required file is not exist it will create the file otherwise it will open it.
    ofstream myfile("file.txt");

    myfile.close(); //closing the file
    return 0;
}
