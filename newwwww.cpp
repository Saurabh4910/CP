#include <iostream>
#include<math.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
    ifstream myfile;
    myfile.open("c/Users/SAURABH/Downloads/ecg_10.csv");//file opening constructor
    //Operation to check if the file opened
    if (myfile.is_open()) {
        //vector<int> data;
        string line = "";   
        while (getline(myfile,line)){
            // data.push_back((int)line);
            //line = "";
        }
        cout << line[5];
    }
    else {
        cerr << "ERROR: The file is not open.\n";
    }
    
    return 0;
}