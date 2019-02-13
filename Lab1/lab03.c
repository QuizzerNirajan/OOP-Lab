#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct Student{
char name[20];
int marks;
}s[3];

int main()
{
    int i, marks1;
    char name1[20];
    printf("Enter the name and marks of the students :");
    for(i = 0; i<3; i++)
    {
        printf("\nStudent %d : ", i+1);
        printf("\nName : "); scanf("%s",s[i].name);
        printf("Marks : "); scanf("%d",&s[i].marks);
        printf("\n");

    }
    printf("Enter the name of the student to retrieve his marks : ");scanf("%s",name1);
    for(i = 0; i<3; i++){
        if( strcmp(s[i].name, name1)== 0)
            marks1 = s[i].marks;
    }
    printf("%s has obtained %d marks", name1, marks1);
    return 0;
}
