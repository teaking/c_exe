#include <stdio.h>


char getCharfromUsr(){
	char chr;
	printf("Provide UpperCase Alphabet for char");
	scanf("%c", &chr);
	return chr;
}
int toLowerCase(char inp){
		if (inp >= 'A' && inp <= 'Z'){
			return ((inp - 'A') +'a');
		}else{
			printf("No uppercase alphabet provided.");
		}
}
int main(){
		char chr;
		chr = getCharfromUsr();
		printf("Lowercase - %c\n",toLowerCase(chr));
		return 0;
}
