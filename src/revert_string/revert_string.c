#include "revert_string.h"
#include <string.h>
#include <stdio.h>

void RevertString(char *str)
{
	int n = strlen(str);
	for (int i = 0; i< n/2; i++){
	    char k = str[i];
	    str[i] = str[n-i-1];
	    str[n-i-1] = k;
	}
}


