#include <stdio.h>
#include <stdlib.h>


void changePC(char *ptr);
void defaultPC(char *ptr);
unsigned short int ReadControlWord();

void print_binary_controlWord(unsigned short int cw){
	
	int i;
	for(i=15;i>=0;i--){
		printf("%d",(cw>>i)&1);
	}
	printf("\n");
}

void print_binary_extended(char *d){

	int i,j;
	for(j=9;j>=0;j--){

	for(i=0;i<=7;i++){
		if(j==9 && i==1)
			printf(" ");
		else if(j==7 && i==0)
			printf(" ");
		else if(j==7 && i==1)
			printf(" ");
		if((d[j] >> (7-i)) & 1){
			printf("1");
		}else{
			printf("0");}
	}
	}
	printf("\n");
}

int main(){
	
	char zmienna[10];
	printf("Binarna wartosc rejestru serującego przed zamianą precyzji: \n");
	unsigned short int control = ReadControlWord();
	print_binary_controlWord(control);
	defaultPC(zmienna);
	print_binary_extended(zmienna);
	changePC(zmienna);
	unsigned short int control1 = ReadControlWord();
	printf("Binarna wartosc rejestru sterującego po zmiane precyzji (pojedyncza): \n");
	print_binary_controlWord(control1);
	print_binary_extended(zmienna);
	return 0;

}
