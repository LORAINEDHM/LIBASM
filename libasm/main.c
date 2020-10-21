/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:35:03 by lduhamel          #+#    #+#             */
/*   Updated: 2020/10/21 16:35:05 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

int main()
{
    char	*src;
	char	*dest;
	int		ret;
	int		fd;
	char	*ret_str;

	printf("\n\n   *************\n");
    printf("   * ft_strlen *\n");
	printf("   *************\n\n");
	printf("str = '""'\n");
	printf("the expected ret = %lu\n", strlen(""));
	printf("my function  ret = %lu\n\n", ft_strlen(""));
	printf("str = 'helloword'\n");
	printf("the expected ret = %lu\n", strlen("helloworld"));
	printf("my function  ret = %lu\n\n", ft_strlen("helloworld"));
	printf("str = 'asdfasdf''///##!!@'\n");
	printf("the expected ret = %lu\n", strlen("asdfasdf''///##!!@"));
	printf("my function  ret = %lu\n\n", ft_strlen("asdfasdf''///##!!@"));
	printf("str = 'Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.'\n");
	printf("the expected ret = %lu\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet."));
	printf("my function  ret = %lu\n\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet."));

	dest = malloc(20);

	printf("\n\n*************\n");
    printf("* ft_strcpy *\n");
	printf("*************\n\n");
	
	dest = strcpy(dest, "");
	printf("the expected ret:\n");
	printf("dest = %s et src = %s\n\n", dest, "");
	dest = ft_strcpy(dest, "");
	printf("my function ret:\n");
	printf("dest = %s et src = %s\n", dest, "");
	printf("------------------------------------------------------\n\n");
	dest = strcpy(dest, "helloworld");
	printf("the expected ret:\n");
	printf("dest = %s et src = %s\n\n", dest, "helloworld");
	dest = ft_strcpy(dest, "helloworld");
	printf("my function ret:\n");
	printf("dest = %s et src = %s\n", dest, "helloworld");
	printf("------------------------------------------------------\n\n");

	printf("\n\n*************\n");
    printf("* ft_strcmp *\n");
	printf("*************\n\n");

	printf("s1 = %s\n", "aaabaa");
	printf("s2 = %s\n\n", "aaabaa");
	printf("the expected ret: %d\n", strcmp("aaabaa", "aaabaa"));
	printf("my function  ret: %d\n", ft_strcmp("aaabaa", "aaabaa"));
	printf("------------------------------------------------------\n\n");

		printf("s1 = %s\n", "aa");
	printf("s2  = %s\n\n", "ab");
	printf("the expected ret: %d\n", strcmp("aa", "ab"));
	printf("my function  ret: %d\n", ft_strcmp("aa", "ab"));
	printf("------------------------------------------------------\n\n");

	printf("s1 = %s\n", "ab");
	printf("s2  = %s\n\n", "aa");
	printf("the expected ret: %d\n", strcmp("ab", "aa"));
	printf("my function  ret: %d\n", ft_strcmp("ab", "aa"));
	printf("------------------------------------------------------\n\n");

	printf("s1 = %s\n", "ac");
	printf("s2  = %s\n\n", "aa");
	printf("the expected ret: %d\n", strcmp("ac", "aa"));
	printf("my function  ret: %d\n", ft_strcmp("ac", "aa"));
	printf("------------------------------------------------------\n\n");

	printf("s1 = %s\n", "aa");
	printf("s2  = %s\n\n", "aaabaa");
	printf("the expected ret: %d\n", strcmp("aa", "aaabaa"));
	printf("my function  ret: %d\n", ft_strcmp("aa", "aaabaa"));
	printf("------------------------------------------------------\n\n");


	printf("\n\n************\n");
    printf("* ft_write *\n");
	printf("************\n\n");

	printf("the expected ret:\n");
	errno = 0;
	printf("write : %ld\n", write(1, "hello!\n", 7));
	printf("errno : %d\n", errno);
	printf("my function ret:\n");
	errno = 0;
	printf("ft_write : %ld\n", ft_write(1, "hello!\n", 7));
	printf("errno : %d\n", errno);
	printf("------------------------------------------------------\n\n");
	printf("the expected ret:\n");
	errno = 0;
	printf("write : %ld\n", write(1, "hello!\n", 0));
	printf("errno : %d\n", errno);
	printf("my function ret:\n");
	errno = 0;
	printf("ft_write : %ld\n", ft_write(1, "hello!\n", 0));
	printf("errno : %d\n", errno);
	printf("------------------------------------------------------\n\n");
		printf("the expected ret:\n");
	errno = 0;
	printf("write : %ld\n", write(1, NULL, 7));
	printf("errno : %d\n", errno);
	printf("my function ret:\n");
	errno = 0;
	printf("ft_write : %ld\n", ft_write(1, NULL, 7));
	printf("errno : %d\n", errno);
	printf("------------------------------------------------------\n\n");
	printf("the expected ret:\n");
	errno = 0;
	printf("write : %ld\n", write(-1, "hello!\n", 7));
	printf("errno : %d\n", errno);
	printf("my function ret:\n");
	errno = 0;
	printf("ft_write : %ld\n", ft_write(-1, "hello!\n", 7));
	printf("errno : %d\n", errno);
	printf("------------------------------------------------------\n\n");

	printf("\n\n***********\n");
    printf("* ft_read *\n");
	printf("***********\n\n");
	
	fd = open("./Makefile", O_RDONLY);
	errno = 0;
	printf("the expected ret: %zd\n", read(fd, src, 18));
	printf("the expected buf: %s\n", src);
	printf("errno : %d\n", errno);
	close(fd);
	fd = open("./Makefile", O_RDONLY);
	errno = 0;
	printf("my function ret: %zd\n", read(fd, src, 18));
	printf("my function buf: %s\n", src);
	printf("errno : %d\n", errno);
	close(fd);
	printf("------------------------------------------------------\n\n");
	fd = -1;
	errno = 0;
	printf("the expected ret: %zd\n", read(fd, src, 18));
	printf("the expected buf: %s\n", src);
	printf("errno : %d\n", errno);
	errno = 0;
	printf("my function ret: %zd\n", read(fd, src, 18));
	printf("my function buf: %s\n", src);
	printf("errno : %d\n", errno);
	printf("------------------------------------------------------\n\n");

	printf("\n\n*************\n");
    printf("* ft_strdup *\n");
	printf("*************\n\n");

	printf("str = helloworld\n");
	ret_str = strdup("helloworld");
	printf("the expected ret: %s\n", ret_str);
	free(ret_str);
	ret_str = ft_strdup("helloworld");
	printf("my function  ret: %s\n", ret_str);
	free(ret_str);

	printf("------------------------------------------------------\n\n");

    return (0);
}
