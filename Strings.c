#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],s3[100]="Gokul ",s4[100]="Gokul Ayyappa Gokul",s5[100]="Gokul ";
    printf("Enter a string :");
    scanf("%s",&s1);
    printf("String is %s\n",s1);
    printf("Length of the String is %d\n",strlen(s1));
    strncpy(s2,s1,3);
    printf("Copied String is %s\n",s2);
    strncat(s3,s1,3);
    printf("Concatenated String is %s\n",s3);
    strncat(s1,s3,3);
    printf("2nd Concatenated String is %s\n",s1);
    printf("Compare Strings is %d\n",strcmpi(s4,s5));
    printf("Occurance char is %s\n",strrchr(s1,'y'));
    printf("Occurance String is %s\n",strstr(s4,s5));
    char *ss;
    ss=strdup(s4);
    printf("Duplicate in a String is %s\n",ss);
    printf("Reverse a String is %s\n",strrev(s5));
    printf("Pallidrome of a String \n");


}
