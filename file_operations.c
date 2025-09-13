#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "file_operations.h"

int create_and_write_file(const char *filename, const char *content) {
    int fd;
    ssize_t bytes_written;

    printf("Creating the file: %s\n", filename);
    printf("Writing the content: %s\n ", content); 
    fd = open(filename,O_CREAT | O_WRONLY| O_TRUNC, 0644);
   
    if(fd == -1){
       perror("There was an error with the file");
       return -1;
     }
     printf("The file Descriptor: %d\n",fd);
 
    bytes_written = write(fd,content,strlen(content));
    if(bytes_written == -1){
       perror("There was an error writing the file"); 
       close(fd);
       return -1;
     }
    printf("The file was successfully, it wrote %zd bytes to '%s'\n",bytes_written,filename);
    if(close(fd) == -1){
      perror("There was an error closing the file");
      return -1;
    }
    printf("File was closed successfully\n");
    return 0;
}

int read_file_contents(const char *filename) {
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    printf("Reading the file: %s\n", filename);
    fd = open(filename,O_RDONLY);
    if(fd == -1){
      perror("There was an error opening the file");
      return -1;
     }
    printf("File descriptor: %d\n", fd);
    printf(" Contents of the file    \n");
    while((bytes_read = read(fd,buffer,sizeof(buffer) - 1)) > 0){
      buffer[bytes_read] = '\0';
      printf("Buffer: %s", buffer);
    }
    if(bytes_read == -1){
      perror("There was an error reading the file");
      close(fd);
      return -1;
    }
    printf("\n     End of the file     \n")
;   if(close(fd) == -1){
        perror("There was an error closing the file");
        return -1;
    }
    printf("File closed successfully \n");
    return 0;
}
