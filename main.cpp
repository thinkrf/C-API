#include "wsa4k_cli.h"


/**
 * Starting point
 */
int32_t main(int32_t argc, char *argv[])
{
	char inCmdStr[200];
	int32_t count_arg = 1;
	int32_t i, mode_argc = 0;
	

	// Check user commands for mode parameters
	if (argc > 1) {
		while (1) {
			// Copy the first command string arg to a constant string
			for (i = 0; i < ((int32_t)strlen(argv[count_arg])); i++) 
				inCmdStr[i] = toupper(argv[count_arg][i]);	
			inCmdStr[i] = 0;
			if (strncmp("-T",inCmdStr,2) == 0) test_mode = TRUE;
			else if (strncmp("-D",inCmdStr,2) == 0) debug_mode = TRUE;

			// up counter to the next argv positn
			if (count_arg < (argc - 1)) count_arg++;	
			else break;
		}
	}
	if (test_mode || debug_mode) mode_argc = 1;
	
	// Do we have enough command line arguments?
    if ((argc - mode_argc) < 0) {
		fprintf(stderr, "usage: %s <server-address>\n\n", argv[0]);
        return 1;
    }

	if(start_cli() < 0)
		printf("ERROR: Unable to start the CLI program!\n");

	//init_client(argc, argv);

	return 0;
}
