#include <cstring>
#include <fstream>
#include "../Master.hpp"
#include "header.h"

Integer paras::identify_opt(const char *file)
{
    char name[strlen(file) + 1];
    int p = -1, l = strlen(file);
    for (int i = l - 1; i >= 0; i--)
        if (file[i] == '/')
        {
            p = i;
            break;
        }
    strncpy(name, file + p + 1, l - p - 1);
    name[l - p - 1] = '\0';
    printf("c File name (with path): %s\n", file);
    printf("c File name: %s\n", name);
    return (Integer)(-1e38);
}
