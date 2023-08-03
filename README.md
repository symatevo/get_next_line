## Summary

The main objective of this project is to implement a function that reads a line from a file descriptor and returns the line as a string. With each successive call, the function should read the next line until the end of the file is reached.

## Skills to Learn

- File I/O
- Dynamic Memory Allocation
- Static Variables
- Buffers
- Reading Data Line by Line
- Handling Multiple File Descriptors

## The "get_next_line" Function

The "get_next_line" function prototype is as follows:

```c
int get_next_line(int fd, char **line);
```

### Parameters

- `fd`: The file descriptor for reading.
- `line`: A pointer to a character pointer that will store the read line.

### Return Value

- The function returns `1` if a line has been read.
- The function returns `0` when the reading is complete.
- The function returns `-1` on error.

## Project Constraints

- You are not allowed to use the standard library functions, other than `read`, `malloc`, and `free`.
- Your function must be memory leak-free.
- You should use a static variable to maintain the data between calls.

## Usage

To use the "get_next_line" function in your projects, follow these steps:

1. Clone the repository or copy the "get_next_line" files into your project directory.
2. Include the "get_next_line.h" header file in your source files where you want to use the function.
3. Call the "get_next_line" function as needed to read lines from the desired file descriptor.

## Example Usage

```c
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("example.txt", O_RDONLY);
    char *line = NULL;
    int ret;

    while ((ret = get_next_line(fd, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
    }

    if (ret == 0)
        printf("%s\n", line); // Print the last line
    else if (ret == -1)
        printf("An error occurred while reading.\n");

    close(fd);
    return 0;
}
```

## Resources

For more details about the project requirements and additional information, you can refer to the subject document or instructions provided by 42. Happy coding!
