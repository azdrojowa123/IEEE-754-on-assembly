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

void print_binary(unsigned short int d){
	
	int i;
	for(i=15;i>=0;i--){
		printf("%d",(d>>i)&1);
	}
	printf("\n");
}

int main(){
	
	int a=12;
	unsigned short int status, controlword;
	status = ReadStatusRegister();
	controlword= ReadControlWord();
 	printf("Binarna wartość rejestru sterującego koprocesora: \n");
	print_binary(controlword);
	printf("Binarna wartość rejestru statusowego: \n");
	print_binary(status);

	flag_check(status,3);
	
	printf("Operacja zmiany określonych bitów w rejestrze sterującym: \n");
	SaveControlWord(a);
	controlword = ReadControlWord();
	printf("Binarna wartość rejestru sterującego koprocesora po zmianie: \n");
	print_binary(controlword);


	return 0;

}

