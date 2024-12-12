#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[] = "xin chao, toi ten la..";
	int length = strlen(str); 
	for(int i = 0; i < length; i++){
		str[0] = toupper(str[0]);
		if(' ' == str[i]){
			i++;
			str[i] = toupper(str[i]);
		}
	}
	printf("%s", str);
	return 0;
}
