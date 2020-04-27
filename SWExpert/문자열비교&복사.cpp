#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str, const char* str2)	//문자열비교 
{
	int i=0,j=0;
	while(str[i]!='\0'){
		if(str[i++]!=str2[j++]) break;
	}

	return (str[i]-str2[j]);
}

void my_strcpy(char* des, char* src)	//문자열복사 
{											
	while(*src!='\0'){
		*des=*src;
		des++;
		src++;
	}
	*des='\0';
}

int my_atoi(char* str){		//string->int 형변환 
	int c,digit,num=0;
	int len=strlen(str);
	while((c=*str++)!='\0'){
		digit= c -'0';
		num=(num*10)+digit;
	}
	return num;
}

int main()
{	
	char str[]="hello world";
	char dir[]="hell world";
	char cpy[12];
	char num[6]="12345";
	
	printf("%d\n",my_strcmp(str,dir));
	my_strcpy(cpy,str);
	printf("%s\n",cpy);
	printf("%d\n",my_atoi(num));
	return 0;
}
