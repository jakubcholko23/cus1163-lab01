#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "file_operations.h"

int create_and_write_file(const char *filename, const char *content) {
    // TODO: Declare an integer 'fd' for the file descriptor.
    // TODO: Declare a variable 'bytes_written' of type ssize_t to store how many bytes are written.

    // TODO: Print a message showing which file is being created.
    // TODO: Print a message showing what content will be written.

    // TODO: Open or create the file for writing using the open() system call.
    // TODO: Use flags O_CREAT | O_WRONLY | O_TRUNC and permissions 0644.
    // TODO: Check if open() failed (fd == -1). If so, print an error using perror and return -1.

    // TODO: Print the file descriptor value.

    // TODO: Write the content to the file using the write() system call.
    // TODO: Use the length of 'content' as the size to write.
    // TODO: Check if write() failed (bytes_written == -1). If so, print an error using perror, close the file, and return -1.

    // TODO: Print a success message with the number of bytes written and the filename.

    // TODO: Close the file using close(fd).
    // TODO: Check if close() failed. If so, print an error using perror and return -1.

    // TODO: Print a message that the file was closed successfully.
    return 0;
}

int read_file_contents(const char *filename) {
    // TODO: Declare an integer 'fd' for the file descriptor.
    // TODO: Create a buffer array of size 1024 to store the file data.
    // TODO: Declare a variable 'bytes_read' of type ssize_t to store how many bytes are read.

    // TODO: Print a message showing which file is being read.

    // TODO: Open the file for reading using the open() system call.
    // TODO: Use the O_RDONLY flag.
    // TODO: Check if open() failed (fd == -1). If so, print an error using perror and return -1.

    // TODO: Print the file descriptor value.
    // TODO: Print a header for the file contents.

    // TODO: Read the file contents using the read() system call in a loop.
    // TODO: Use sizeof(buffer) - 1 for the buffer size.
    // TODO: Null-terminate the buffer after each read.
    // TODO: Print the contents of the buffer.
    // TODO: Continue reading until read() returns 0.

    // TODO: Check if read() failed (bytes_read == -1). If so, print an error using perror, close the file, and return -1.

    // TODO: Print a footer for the end of the file.

    // TODO: Close the file using close(fd).
    // TODO: Check if close() failed. If so, print an error using perror and return -1.

    // TODO: Print a message that the file was closed successfully.
    return 0;
}
