#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* reverseStr(char** inputStr) {
	int newlength;
	int index;
	newlength = strlen(*inputStr);
	char* returnStr;
	returnStr = (char*) malloc(sizeof(char)*(newlength+1));
	for(index = 0; index < newlength; index++) {
		returnStr[newlength - index - 1] = *(*inputStr+index);
	}
	returnStr[newlength] = '\0';
	return returnStr;
}


int main (int argc, char* argv[]) {
	char* i_str = "!sseccus";
	char* o_str;
	if(argc > 1) {
		i_str = argv[1];
	}
	
	o_str = reverseStr(&i_str);

	printf("o_str: %s\n", o_str);

	free(i_str);
	free(o_str);

	printf("Job's Done.\n");
	return 0;
}