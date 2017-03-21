#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

	char *outputFile;
	int aFlag = 0;
	int i;
	for(i = 0; i < argc; i++){
		if(strcmp(argv[i], "-a") == 0){
			aFlag = 1;
		}
		else{
			outputFile = argv[i];
		}
	}
	FILE *file;
	if(aFlag){
		file = fopen(outputFile, "ab");
	}
	else{
		file = fopen(outputFile, "wb");
	}
	char in[80];
	int loop = 1;
	while(loop){
		printf("Enter input (type quit to quit):\n");
		fgets(in, 80, stdin);
		if(strstr(in, "quit") != NULL){
			fclose(file);
			loop = 0;
		}
		else{
			fprintf(file, "%s", in);
		}
	}
}

// I was slowed down when trying to understand how inputs for the -a flag and output file were to be read.  I initially was trying to prompt the user to enter those values after the program started, but then realized that they could be arguments that would be passed to argv in main() when running the executable file.  Next time I would try to find more usage examples of a function that I am trying to reimplement before attempting to recreate it.
// The real tee function is able to return with status codes on exit, which I did not implement, and could write to more than one file simultaneously, which I also did not implement.