#include <stdio.h>

double  doAdd();
void SaveControlWord(int x);
unsigned short int ReadControlWord();
double changeRCup();
double changeRCdown();

void print_binary(double d){

	unsigned long long *double_int = (unsigned long long *)&d;
	int i;
	for(i=0;i<=67;i++)
	{
		if(i==1){
			printf (" ");
		}
		if(i==12){
			printf(" ");
		}
		if((*double_int >> (67-i)) & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

void print_binary_controlWord(unsigned short int cw){
	
	for(int i=15;i>=0;i--){
		printf("%d",(cw>>i)&1);
	}
	
}


int main(){
	
	printf("Zaokraglenie round to even, domyślne\n");
	unsigned short int controlword1 = ReadControlWord();
	printf("%d\n", controlword1);
	print_binary_controlWord(controlword1);
	printf("\n");
 	double result=doAdd();
	printf("%.17g\n",result);
	print_binary(result);
	
	printf("Zaokraglenie do plus nieskonczonosci\n");
	double test = changeRCup();
	unsigned short int controlword = ReadControlWord();
	printf("%d\n",controlword);
	print_binary_controlWord(controlword);
	printf("\n");
	printf("%.17g\n",test);
	print_binary(test);
	
	
	printf ("Zaokrąglenie do minus nieskończoności\n");
	double test2=changeRCdown();
	unsigned short int controlword3 = ReadControlWord();
	printf("%d\n", controlword3);
	print_binary_controlWord(controlword3);
	printf("\n");
	printf("%.17g\n",test2);
	print_binary(test2);
	

	return 0;

}
