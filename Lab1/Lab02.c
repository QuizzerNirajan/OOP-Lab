#include<stdio.h>
#include<string.h>
int main(){
char *sentence = "idea without execution is worthless";
int i, count;
for ( i = 0; i<strlen(sentence); i++)
{
    if (*(sentence+i) == 'c')
        count = i+1;
}
printf("The position of character 'c' in  '%s' is %d",sentence, count);
return 0;
}

