#include<stdio.h>
#include<string.h>

#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 24, "kim", 4.3 };
	struct student* p;

	p = &s;

	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);

	return 0;
}