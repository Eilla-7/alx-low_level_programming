#include<stdio.h>
#include "main.h"

/**
 *
 */

char *_strcat(char *dest, char *src)
{
  int i;
  int j = 0;
  
  for (i = 0; dest[i] != '\0'; i++)
    ;
  if (dest[i] == '\0')
    do
      {
	dest[i] = src[j];
	j++;
	i++;
      } while (src[j] != '\0');
      return(dest);
	}
