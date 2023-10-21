#include<stdio.h> 
int main(){ 
 
    double tempf; 
    double tempc; 
    int value; 
 
    printf("IF YOU WANT TO CONVERT TEMPERTURE FROM FAHRENHEIT TO CELSIUS PRESS 1\n"); 
    printf("IF YOU WANT TO CONVERT TEMPERTURE FROM CELSIUS TO FAHRENHEIT PRESS 2\n"); 
     scanf("%d",&value); 
   
    printf("\nENTER THE TEMPERATURE :");  
  
    if(value == 1){ 
        scanf("%f",&tempf); 
        tempc=((tempf-32.0)*5.0/9.0);
        printf("TEMPERATURE IN CELSIUS :%d",tempc);
 
    }else{ 
        scanf("%f",&tempc); 
        tempf=tempc*(9/5)+32; 
        printf("TEMPERATURE IN FAHRENHEIT :%d",tempf);
    } 
}