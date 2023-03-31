#include<stdio.h>
struct student{
	char name[100];
	int id;
	float gpa;
};
int main(){
	struct student tharun;
	sprintf(tharun.name,"kumar");
	tharun.id= 15;
	tharun.gpa=9.8;
	
	printf("name :%s\n",tharun.name);
	printf("id :%d\n",tharun.id);
	printf("gpa :%.2f\n",tharun.gpa);
	return 0;
}
