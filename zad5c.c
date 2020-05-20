#include <stdio.h>

void Basic2();
void Basic();


unsigned long after, before;
int main(){

	
	
	Basic();
	if(after-before<0)
	{
		printf("Niepoprawny pomiar\n");
	}else{
		printf("Czas wykonywania operacji nie  powiązanych ze sobą: %lu\n",after-before);
	}
	Basic2();
	if(after-before<0){
		printf("Niepoprawny pomiar\n");
	}else{
		printf("Czas wykonywania operacji powiązanych  ze sobą: %lu\n",after-before);

	return 0;
}
}
