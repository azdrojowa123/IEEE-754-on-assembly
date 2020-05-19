#include <stdio.h>

void Basic2();
void  Basic();
unsigned long long times();

unsigned long long time1, time2;
unsigned long after, before;
int main(){

	
	time1= times();
	Basic();
	time2=times();
	printf("Czas wykonywania operacji powiązanych ze sobą: %llu\n",time2-time1);
	time1=times();
	Basic2();
	time2=times();
	printf("Czas wykonywania operacji niezależnych od siebie: %llu\n",time2-time1);

	return 0;
}
