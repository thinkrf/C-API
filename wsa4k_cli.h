#ifndef __WSA4K_CLI_H__
#define __WSA4K_CLI_H__

#include "targetver.h"
#include <fstream>
#include <iostream>
#include <string.h>
//#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdarg.h>	// to be used when passing unknown # or args
#include "stdint.h"
#include "ws-util.h"

#define FALSE	0
#define TRUE	1
#define MAX_STR_LEN 200
#define MAX_BUF_SIZE 20


extern uint8_t debug_mode;
extern uint8_t test_mode;

int32_t start_cli(void);

u_long lookup_addr(const char *sock_addr);
//int32_t init_client(int argc, char *argv[]);
int32_t init_client(const char *wsa_addr);

//void print_scpi_menu();

#endif
