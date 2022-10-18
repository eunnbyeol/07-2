#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sub(void);

int main(int argc, char *argv[]) {
	
	int i;
	for(i=0; i<3; i++)
	    sub();

	return 0;
}

void sub()
{
	int auto_count = 0; //동적할당 
	static int static_count = 0; //정적할당 
	auto_count++; //변수 1증가 
	static_count++;
	printf("auto_count=%d\n", auto_count); //변수내용확인  
	printf("statoc_count=%d\n", static_count);
}
