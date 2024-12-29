#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int main () {
    int fd = open("newfile.txt",O_CREAT | O_WRONLY , 0644);
    if (fd == -1) {
        perror("error creating file");
        return 1 ;
    }
        struct stat st ;
        fstat(fd, &st );
        printf("UID: %d, GID : %d/n",st.st_uid,st.st_gid);
        close(fd);
        return 0 ;
    };
    
