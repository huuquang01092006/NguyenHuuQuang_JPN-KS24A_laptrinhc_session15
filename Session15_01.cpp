#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[] = "hello my gmail is test123@gmail.com";
	int length = strlen(str);
	int letter = 0, number=0, specialChar=0; 
	for(int i = 0; i < length; i++){
		if(isalpha(str[i])){
			letter++;
		}
		else if(isdigit(str[i])){
			number++;
		}
		else{
			specialChar++;
		}
	}
	printf("so ky tu la chu cai: %d\n", letter);
	printf("so ky tu la chu so: %d\n", number);
	printf("so ky tu la ky tu dac biet: %d\n", specialChar);
	return 0;
}
