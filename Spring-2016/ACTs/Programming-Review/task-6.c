// develop a C program that will reorder in alphabetical order a string

# include <stdio.h>
# include <string.h>

void alphabetize(char *string, int length);

int main(void){
	int i;
	char string[27];
	int length;
	
	printf("Please input a string of up to 26 non-repeating characters: ");
	i = -1;
	do{
		i++; 
		scanf("%c", (string + i));
	}
	while (string[i] != '\n');
	
	length = strlen(string);
	string[length + 1] = '\0';
	
	// convert to capital letters
	i = 0;
	for(i = 0; i <= length; i++){
		if(string[i] >= 97){
			string[i] = string[i] - 32;
		}
	}
	
	alphabetize(string, length);
	printf("%s\n", string);
	
	return 0;
}
void alphabetize(char *string, int length){
	int i;
	int j;
	char temp;
	
	i = 0;
	j = 1;
	for(i = 0; i < length - 1; i++){
		for(j = i + 1; j < length; j++){
			if (string[i] > string[j]){
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	return;
}
