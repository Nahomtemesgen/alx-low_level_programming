#include <stdio.h>
#include <stdlib.h>
void runMe(){
	int* leakingPtr = (int*) malloc(sizeof(int)*1024);
	for(int i=0;i<1024;i++){
		leakingPtr[i] = i+1000;
		
	}
	
}
