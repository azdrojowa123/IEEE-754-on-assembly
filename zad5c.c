#include <stdio.h>

void Basic2();
void Basic();
unsigned long long times();

unsigned long after, before;
int main(){

	
	
	Basic();
	printf("Czas wykonywania operacji nie  powiązanych ze sobą: %lu\n",after-before);
	Basic2();
	printf("Czas wykonywania operacji powiązanych  ze sobą: %lu\n",after-before);

	return 0;
}
