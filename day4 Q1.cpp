#include<stdio.h>
struct person
{
char name[50];
int age;
float height;	
};
int main(){
	struct person tharun;
	sprintf(tharun.name, "hari");
	tharun.age =17;
	tharun.height =5.6;
	
	printf("Name : %s\n",tharun.name);
	printf("Age : %d\n",tharun.age);
	printf("Height : %.2f\n",tharun.height);
	
	return 0;
}
