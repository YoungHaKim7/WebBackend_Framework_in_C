/* webdev.h */
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <stdbool.h>

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;

#define $c (char *)
#define $8 (int8 *)
#define $6 (int16)
#define $2 (int32)
#define $4 (int64)
#define $i (int)

void log()
int32 setupserver(int8*, int16);
int main(int,char**);


// p = "./myfile.txt";
// x = $6 open($c p, O_RDONLY);
// if (x > 0);
