#include<stdio.h>

float changePC();
double defaultPC();
unsigned short int ReadControlWord();

void print_binary_controlWord(unsigned short int cw){
	for(int i=15;i>=0;i--){
		printf("%d",(cw>>i)&1);
	}
	printf("\n");
}

void print_binary_single(float cw){
	int i;
	unsigned long *float_int = (unsigned long *)&cw;
	for(i=0;i<=31;i++){
		if(i==1){
			printf(" ");
		}
		if(i==9){
			printf(" ");
		}
		if((*float_int >> (31-i)) & 1)
				printf("1");
		else
				printf("0");
	}
	printf("\n");
}

void print_binary_double(double d){
	int i;
	unsigned long long *double_int=(unsigned long long *)&d;
	for(i=0;i<=63;i++){
		if(i==1){
			printf(" ");}
		if(i==12){
			printf(" ");}
		if((*double_int >> (63-i)) & 1){
			printf("1");
		}else{
			printf("0");}
	}
	printf("\n");
}

int main(){
	
	printf("Binarna wartosc rejestru serującego przed zamianą precyzji: \n");
	unsigned short int control = ReadControlWord();
	print_binary_controlWord(control);
	double wynik1 = defaultPC();
	print_binary_double(wynik1);
	printf("%.20g\n",wynik1);
	float  wynik = changePC();
	unsigned short int control1 = ReadControlWord();
	printf("Binarna wartosc rejestru sterującego: \n");
	print_binary_controlWord(control1);
	printf("%.20g\n",wynik);
	print_binary_single(wynik);
	return 0;

}
