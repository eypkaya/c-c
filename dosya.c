#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main () {
    int fd =open("example.txt",O_CREAT | O_WRONLY , 0644);
    if (fd==-1){
        perror("Error opening or creating file");
        return 1 ;
    }
    printf("File descriptor : %d/n",fd);
    close(fd);
    return 0 ;
}