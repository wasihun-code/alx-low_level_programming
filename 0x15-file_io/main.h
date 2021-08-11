#ifndef MAIN_H_
#define MAIN_H_

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);


#endif
