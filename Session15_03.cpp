#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char letter;
	int j;
	char str[] = "hello world";
	printf("nhap ky tu can xoa: ");
	scanf("%c", &letter);
	int length = strlen(str); 
	for (int i = 0; i < length; i++) { 
	    if (str[i] != letter) { 
		    str[j++] = str[i]; 
		}
	} 
	str[j] = '\0';
	printf("%s", str);
	return 0;
}
