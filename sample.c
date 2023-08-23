#include <stdio.h> 
#include <stdlib.h> 
int main() {
int value;
int sumodd=0; 
int sumeven=0;
int limit;
int difference;
printf("Enter the Number :"); 
scanf("%d",&limit);
for (value=1;value < limit;value++) { 
  if(value%2==0) {
    sumeven+=value;
  }
 else {
  sumodd+=value;
 }
}
if(sumodd > sumeven) {
  difference = sumodd-sumeven;
}
else {
 difference = sumeven-sumodd;
}
printf("The sum of Odd numbers is :%d.\n",sumodd); 
printf("The sum of Even numbers is :%d.\n",sumeven);
printf("The Difference between sum of Odd and sum of Even :%d.\n",difference);
return 0;
}

