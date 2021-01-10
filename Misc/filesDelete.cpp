#include <stdlib.h>
#include <string.h>
// #include <iostream>

using namespace std;
int main() {
    char extension[10] = "exe", cmd[50] = "rm *.";
    // if 'extension' is set to 'exe' then rename the
    // compiled file filesDelete.exe to something like:
    // exeDelete.dll, filesDelete.out, etc..

    // cout << "ENTER EXTENSION OF FILES : \n";
    // cin >> extension;
    strcat(cmd, extension);
    system(cmd);
    return 0;
}


//other Command :- find . -name "*.exe" -type f -delete