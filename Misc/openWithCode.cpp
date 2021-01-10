#include <stdlib.h>
#include <string.h>
// #include <iostream>

using namespace std;
int main() {
    char folderName[300] = "C:\\Users\\Ashu\\Documents\\MATLAB";
    char cmd[4] = "cd ";
    char cmd2[21]=" && code . && exit";

    // cout << "Enter FullPath to the folder to change Directory : \n";
    // cin >> folderName;
    
    strcat(cmd, folderName);
    strcat(cmd, cmd2);
    system(cmd);
    return 0;
}
