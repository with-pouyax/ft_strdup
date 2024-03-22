
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*template;

	i = ft_len (src);
	template = malloc(i);
	ft_strcpy(src, template);
	return (template);
}
