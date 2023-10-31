#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, word_count = 0;
    char **words = NULL;

    for (i = 0; str[i]; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            word_count++;
        }
    }

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    j = 0;

    while (str[i]) {
        if (str[i] != ' ') {
            int word_length = 0;

            while (str[i + word_length] && str[i + word_length] != ' ') {
                word_length++;
            }

            words[j] = (char *)malloc(word_length + 1);
            if (words[j] == NULL)
            {
                for (i = 0; i < j; i++) {
                    free(words[i]);
                }
                free(words);
                return NULL;
            }

            strncpy(words[j], str + i, word_length);
            words[j][word_length] = '\0';

            j++;
            i += word_length;
        } else {
            i++;
        }
    }

    words[word_count] = NULL;

    return words;
}
