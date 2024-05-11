/*
Sean Zamora
ITSE-1307
2/24/2024
Open a file dictated by the user, then read the file contents into an array and display data.
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string fileName;

    getline(cin, fileName);

    open(fileName, in);
}
