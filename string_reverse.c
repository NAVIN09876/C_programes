#include <stdio.h>
void reverse_string(char *start, char *end)
{
	while( start < end)
	{
		*start = *start ^ *end;
		*end = *start ^ *end;
		*start = *start ^ *end;
		
		start ++;
		end --;
	}
}

void reverse_words(char str[])//"how are you"
{
	char *word_begin = str;
	char *ptr = str;
	
	while(*ptr != '\0')
	{
		ptr++;
		if(*ptr == '\0')
		{
			reverse_string(word_begin, ptr-1);//uoy
		}
		else if(*ptr == ' ')
		{
			reverse_string(word_begin, ptr-1);//woh	era 
			word_begin = ptr+1;
		}
	}
	 reverse_string(str,ptr-1);

}

int main()
{
	char str[] = "how are you";
	
	reverse_words(str);
	printf("%s", str);
	return 0;
} 
 