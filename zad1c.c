#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned short int ReadStatusRegister();
unsigned short int ReadControlWord();
void SaveControlWord( int x);


//sprawdzenie flagi na poszczególnych indeksach 
extern  bool flag_check(unsigned short int status, int index){

	printf("Flaga o indeksie %d od prawej strony strony wynosi: ",index);
	int  b = (status>>index)&1U;
	if(b==1){
		
		printf("%s","1\n");
		return true;
	}else{
		printf("%s","0\n");
		return false;
	}
}

int main(){
	
	int a=12;
	unsigned short int status, controlword;
	status = ReadStatusRegister();
	controlword= ReadControlWord();
	
	printf("%d\n",controlword);
	printf("%d\n", status);

	flag_check(status,3);

	SaveControlWord(a);
	controlword = ReadControlWord();
	printf("%d\n",controlword);


	return 0;

}

