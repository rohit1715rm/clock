#include <stdio.h>
#include <math.h>
double division(double, double);
double modulus(int, int);
void menu();
int main(){
	int choice;
	double first , second, result;
	while(1){
	menu();
	scanf("%d",&choice);
	if(choice==7){
		break;
	}
	printf("Enter  the first number:  ");
	scanf("%lf",&first);
	printf("Enter  the second number:  ");
	scanf("%lf",&second);
	switch (choice)
    {
      case 1: 
        result = first + second;
        break;
      case 2: 
	    result = first - second;
        break;
      case 3:
        result = first * second;
        break;
      case 4:
        result = division(first, second);
        break;
      case 5:
        result = modulus(first, second);
        break;
      case 6:
        result = pow(first, second);
        break;
    }
	printf("\nResult of the operation is : %.2f \n", result);	
	}
	return 0;
}
double division(double a, double b) {
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Division");
    return NAN;
  } else {
    return a / b;
  }
}

double modulus(int a, int b) {
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Modulus");
    return NAN;
  } else {
    return a % b;
  }
}
void menu(){
	printf("####CHOOSE ONE OF THE FOLLOING OPTION####\n");
	printf("1. ADD\n");
	printf("2. SUBTRACT\n");
	printf("3. MULTIPLY\n");
	printf("4. DIVIDE\n");
	printf("5. MODULUS\n");
	printf("6. POWER\n");
	printf("7. EXIT\n");
	printf("\nPlease Enter Your Choice :  ");
}
