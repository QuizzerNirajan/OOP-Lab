#include<stdio.h>
#include<string.h>
struct student{
char name[20], address[10];
int rollNo, phoneNo;
}s[3],s1[3],temp[3];

int main(){
    FILE *fp1, *fp2;
    int i,j;
printf("Enter the details of the students :\n ");
 fp1 = fopen("file.txt","w");
  if (fp1 == NULL)
    {
      printf("error!");
      return -1;
    }
for(i=0;i<3;i++)
{
    printf("student%d : ",i+1);
    printf("\nName : ");scanf("%s",s[i].name);
    printf("Address : ");scanf("%s",s[i].address);
    printf("Phone No : ");scanf("%d",&s[i].phoneNo);
    printf("Roll No : ");scanf("%d",&s[i].rollNo);
    fprintf(fp1,"%s\t%s\t%d\t%d\n",s[i].name,s[i].address, s[i].phoneNo, s[i].rollNo );
}
fclose(fp1);
fp2 = fopen("file.txt","r");
 if (fp2 == NULL)
    {
      printf("error!");
      return -1;
    }
for(i=0; i<3; i++){
    fscanf(fp2,"%s\t%s\t%d\t%d\n",s1[i].name, s1[i].address, &s1[i].phoneNo, &s1[i].rollNo);
}
for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
        if(strcmp(s1[i].name,s1[j].name)>0){
        temp[i] = s1[i];
        s1[i] = s1[j];
        s1[j] = temp[i];
        }
}
}


printf("\n\n");
printf("Name\tAddress\tPhone no\tRoll No\n");
for(i=0;i<3;i++){
    printf("%s\t%s\t%d\t%d\n",s1[i].name,s1[i].address,s1[i].phoneNo,s1[i].rollNo);
}
fclose(fp2);
return 0;
}



