//CREATED BY JACKY (fafnirZ)
//CREATED ON SEP 10 2019
//THIS FILE TAKES IN BASH COMMAND TIME DATA FROM A FILE
//AND TAKE THE AVERAGE OF REPEATED TESTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1080
double string_to_double(char *number); 
void read_line(char *target, FILE *fp);

int main (int argc, char *argv[]) {
	printf("File name: %s\n", argv[1]);

	FILE *fp = fopen(argv[1], "r");
	char targ_array[4][MAX] = { "real", "user", "sys" };
	for (int i = 0; i < 3; i++) {
		char target[MAX];
		strcpy(target,targ_array[i]);
		read_line(target,fp);

	}


	//fgets -> takes in string until end of line
	//fscanf ->until whitespace
//	printf("filename: %s sum : %lf seconds \n",argv[1], sum);
}
void read_line(char *target, FILE *fp) {
	char line[MAX];
	double sum = 0;
	int n = 0;
	while(fgets(line,MAX,fp)) {
		//reads in the line each time and stores it as line string
		char number[MAX];
		char title[MAX];
		//sscanf -> scans from the string->line
		sscanf(line,"%s %s",title, number);
		//that means that this line is correct
		if (strcmp(title, target) == 0) {
			double add = string_to_double(number);	
			sum += add;
		}
		n++;
	}
	double average = (sum/n);
	printf("%s average : %lf seconds\n",target, average);


}

double string_to_double(char *number) {

	char *token = strtok(number,"m");
	token = strtok(NULL, "m");
	//it should now just be 035s
	//remove s and transform 035 to int
	token[strlen(token)-1] = '\0';
	double not_int = atof(token);

return not_int;
}	
