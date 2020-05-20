#include <stdio.h>
#include <stdbool.h>

void ZeroDivideFlag();
void PrecisionFlag();
unsigned short int ReadStatusRegister();
unsigned short int ReadControlWord();
bool flag_check(unsigned short int status, int index){

	int b=(status>>index)&1U;
	if(b==1){
		printf("%s","flaga = 1 \n");
		return true;
	}else{
		printf("%s","flaga = 0 \n");
		return false;
	}
}
int main(){


	unsigned short int status,status2;
	PrecisionFlag();
	status=ReadStatusRegister();
	printf("Flagi ustawione po operacji mającej wywołać precision flag:  \n");
	flag_check(status,0);
	flag_check(status,1);
	flag_check(status,2);
	flag_check(status,3);
	flag_check(status,4);
	flag_check(status,5);
	ZeroDivideFlag();
	status2=ReadStatusRegister();
	printf("Flagi ustawione po operacji mającej wywołać zero divide flag:  \n");
	flag_check(status2,0); //invalid operation
	flag_check(status2,1); //denormalized
	flag_check(status2,2); //zero divide
	flag_check(status2,3); //overflow
	flag_check(status2,4); //underflow
	flag_check(status2,5); //precision 

	
	return 0;

}
