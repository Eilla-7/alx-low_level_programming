#include<stdio.h>
#include "main.h"

/**
 *
 */

int _strcmp(char *s1, char *s2)
{
  int comp = 0;
  int i = 0;
  while (s1[i] != '\0')
    {
      if(s1[i] == s2[i])
	i++;
      else if (s1[i] > s2[i])
	{
	comp = s1[i] - s2[i];
	break;
	}
      else
	{
	comp = s1[i] - s2[i];
	break;
    }
    }
  return (comp);
    }
