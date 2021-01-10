#include <stdlib.h>
#include <string.h>

using namespace std;
int main() {
    char folderName[300] = "C:\\Users\\Ashu\\Documents\\MATLAB";
    char cmd[4] = "cd ";
    char cmd2[21]=" && code . && exit";

    strcat(cmd, folderName);  // cd C:\\Users\\Ashu\\Documents\\MATLAB
    strcat(cmd,cmd2);  // cd C:\\Users\\Ashu\\Documents\\MATLAB && code . && exit
    system(cmd);
    return 0;
}
