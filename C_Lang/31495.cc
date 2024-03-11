/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
//#include <strcpy>

using namespace std;


int main()
{
    string str_str;
    getline(cin, str_str);
    int i = str_str.length();
    string first_str = str_str.substr(0, 1);
    string last_str = str_str.substr(i - 1, 1);
    //cout << first_str << " " << last_str;
    
    if(first_str.compare("\"")) {
        cout << "CE";
    }
    else if(last_str.compare("\"")) {
        cout << "CE";
    }
    else if(i < 3) {
        cout << "CE";
    }
    else {
        string for_print = str_str.substr(1, i - 2);
        cout << for_print;
    }
    return 0;
}
