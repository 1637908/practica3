#include <stdio.h>

int main(){
	int a[4]={1,2,3,4}, b[4]={5,6,7,8},c[4],i;
	
	while (i=0,i<4){
		c[i]=a[i]*b[i];
		i++;
	}
	
	return 0;
}
	
