#include "holberton.h"
/**
 * wordstotal - counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The total of words of the string.
 */
int wordstotal(char *str)
{
	int counter_str, words_total;

	counter_str = words_total = 0;
	for (counter_str = 0; str[counter_str] != '\0'; counter_str++)
		if (str[counter_str] != ' ' &&
		    (str[counter_str + 1] == ' ' || str[counter_str + 1] == '\0'))
			words_total++;
	return (words_total);
}

/**
 * allocword - allocates memory for the specific word.
 * @str: The array of the word.
 * @len: The length of the word.
 *
 * Return: The pointer to the resulting array or NULL if failed to
 *         allocate memory.
 */
char *allocword(char *str, int len)
{
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	return (str);
}

/**
 * copychars - copies the characters from a word to another array.
 * @str: The source word.
 * @cpy: The destination array.
 * @begin: The beginning position of str.
 * @len: The length of the word.
 */
void copychars(char *str, char *cpy, int begin, int len)
{
	int counter;

	counter = 0;
	for (counter = 0; counter < len - 1; counter++)
		cpy[counter] = str[begin + counter];
	cpy[counter] = '\0';
}

/**
 * strtow - converts a string into an array of words.
 * @str: The string to be converted.
 *
 * Return: The pointer to the resulting array or NULL if str is NULL or empty
 *         or if failed to allocate memory.
 */
char **strtow(char *str)
{
	int words_total, counter_str, counter, word_char, flag, counter_2;
	char **words;

	words_total = counter_str = counter = word_char = flag = counter_2 = 0;
	words = NULL;
	if (str == NULL || *str == '\0')
		return (NULL);
	words_total = wordstotal(str);
	if (words_total == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (words_total + 1));
	if (words == NULL)
		return (NULL);
	for (counter = 0; counter < words_total; counter++)
	{
		for (word_char = 0; str[counter_str] != '\0' && flag == 0; counter_str++)
			if (str[counter_str] != ' ')
			{
				word_char++;
				if (str[counter_str + 1] == ' ' || str[counter_str + 1] == '\0')
					flag = 1;
			}
		words[counter] = allocword(words[counter], word_char + 1);
		if (words[counter] == NULL)
		{
			free(words);
			return (NULL);
		}
		copychars(str, words[counter], counter_str - word_char, word_char + 1);
		counter_str++;
		flag = 0;
	}
	words[counter] = '\0';
	return (words);
}
