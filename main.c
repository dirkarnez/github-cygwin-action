#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
    if(!mkdir("C:\\mydir", 0777))
    {
        printf("File created\n");
    }
    else
        printf("Error\n");
}
