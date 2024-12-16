#include<stdio.h>
#include<conio.h>
#include<math.h>

float defFx(	float x	){
	return (
	1+pow(x,2)
	);
}
int main(){
	int subInterval,i;
	float stepSize,integrationValue=0.0,k,lowerLimit, upperLimit;
	printf("Enter the lower limit ,upper limit and number of subinterval: \n");
	scanf("%f%f%d",&lowerLimit,&upperLimit,&subInterval);
	stepSize = (upperLimit - lowerLimit)/subInterval;
	
	integrationValue = defFx(lowerLimit) + defFx(upperLimit);
	 do{
	 	k  = lowerLimit + i* stepSize;
	 	if(i %2 ==0){
	 		integrationValue = integrationValue + 2 * defFx(k);
		 }
		 else{
	 		integrationValue = integrationValue + 4 * defFx(k);
		 }
		 i++;
	 }while(i<=subInterval);
	 
	 integrationValue *= stepSize /3;
	 
	 printf("The Integration Value is : %f\n",integrationValue);
	 printf("Name: Pujan Parajuli\nRoll No: SEC079BEI007");
	 getch();
	 return 0;
}
