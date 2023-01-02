#include <stdio.h>
#include <process.h>

int main(int argc, char** argv)
{
    char* target_file = 0;
    char* source_file = 0;

    for (int i = 1; i < argc; i++) {
        char* arg = argv[i];
        if (strcmp(arg, "-o") == 0 && i + 1 < argc) {
            target_file = argv[i + 1];
            i++;
        } else if (arg[0] == '-' || (arg[0] == '"' && arg[1] == '-')) {
        } else
            source_file = arg;
    }

    if (target_file && source_file) {
        static char command[1024];
        int len = strlen(argv[0]);

        strcpy(command, argv[0]);
        while (len && command[len] != '/' && command[len] != '\\')
            len--;

        if (command[len] == '/' || command[len] == '\\')
            len++;

        strcpy(command + len, "armasm64.exe");
        puts(command);

        return _execl(command, command, source_file, target_file, NULL);
    }

    return -2;
}