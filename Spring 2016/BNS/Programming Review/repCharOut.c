//take out repeating characters in keyword
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
	const char keyword[16] = "Franklin";
	char noRepKey[16];
	//int kLength = 8;
	int i;
	//int noRepLength = 0;
	int j;
	
	i = 0;
	j = 0;
	
	noRepKey[0] = *keyword[0];
	printf("%s", noRepKey);
	/*
	for (i = 0; i <= kLength; i++){
		for (j = noRepLength; j >= 0; j--){
			if(noRepKey[j] == keyword[i]){
				i++;
				j = noRepLength;
			}
			else if (j == 0){
				noRepKey[noRepLength] = keyword[i];
				noRepLength += 1;
			}
			else{
				continue;
			}
			printf("%c\n", noRepKey[noRepLength]);
		}
	} */

	return 0;	
}                                                                                        