#include<unistd.h>
#include<sys/syscall.h>
int main(){
    // Using the syscall function to change the permissions of a file
    // "newfile.txt" is the file whose permissions we are modifying
    // 0446 represents the new permission settings for the file (read/write for user, read for group and others)
    syscall(SYS_chmod, "newfile.txt", 0446);

    return 0;
}

