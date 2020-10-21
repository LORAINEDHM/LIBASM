#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "libasm.h"


int main()
{
    char *src;
	char *dest;
	int ret;
	// int  fd;
	// int  ret_read;
	// int ret_ft_read;

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

	printf("\n\n   *************\n");
    printf("   * ft_strcpy *\n");
	printf("   *************\n\n");
	
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



	printf("\n\n   *************\n");
    printf("   * ft_strcmp *\n");
	printf("   *************\n\n");

	dest = strcpy(dest, "");
	printf("the expected ret:\n");
	printf("dest = %s et src = %s\n\n", dest, "");
	dest = ft_strcpy(dest, "");
	printf("my function ret:\n");
	printf("dest = %s et src = %s\n", dest, "");
	printf("------------------------------------------------------\n\n");




	printf("\n\n   ************\n");
    printf("   * ft_write *\n");
	printf("   ************\n\n");


	printf("\n\n   ***********\n");
    printf("   * ft_read *\n");
	printf("   ***********\n\n");


	printf("\n\n   *************\n")
    printf("   * ft_strdup *\n");
	printf("   *************\n\n");

	//printf("\n-- ft_strdup --\n");
	//printf("before :\n\tsrc : %s, dest : %s\n", src, dest);
	//ret = ft_strdup(src);
	//printf("ret : %s\n", ret);

	//printf("ret = %d\n", ft_strcmp("bonjour", "onjour"));
	//FT_WRITE_EXPECT_ERROR(42, "bonjour", 7);
	//FT_WRITE_EXPECT_ERROR(9809, "bonjour", 7);
	//FT_WRITE_EXPECT_ERROR(98123, "", 1);
	//FT_WRITE_EXPECT_ERROR(42, NULL, 7);

    return (0);
}


// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ret;
// 	// int  fd;
// 	// int  ret_read;
// 	// int ret_ft_read;

// 	src = "simon";
// 	dest = malloc(19);
// 	// memcpy(src, "hello world", 12);
// 	// memcpy(dest, "bonan tagon mondo", 18);

// 	// printf("\n-- ft_strlen --\n");
// 	// printf("\"test\" : %ld\n", ft_strlen("test"));
// 	// printf("\"testqsfndkjq\" : %ld\n", ft_strlen("testqsfndkjq"));
// 	// printf("\"dfvsxwvwestqsfndkjq\" : %ld\n", ft_strlen("dfvsxwvwestqsfndkjq"));

// 	// printf("\n-- ft_strcpy --\n");
// 	// printf("before :\n\tsrc : %s, dest : %s\n", src, dest);
// 	// ret = ft_strcpy(dest, src);
// 	// printf("after :\n\tsrc : %s, dest : %s\nret : %s\n", src, dest, ret);

// 	// printf("\n-- ft_strcmp --\n");
// 	// printf("ret : %d\n",strcmp("aaa","aba"));
// 	// printf("ret : %d\n",strcmp("aa","aca"));
// 	// printf("ret : %d\n",strcmp("aaa","aaaa"));
// 	// printf("ret : %d\n",strcmp("aba","aaa"));
// 	// printf("ret 5: %d\n\n",strcmp("aca","aaa"));

// 	// printf("ret : %d\n",ft_strcmp("aaa","aba"));
// 	// printf("ret : %d\n",ft_strcmp("aaa","aca"));
// 	// printf("ret : %d\n",ft_strcmp("aaa","aaaa"));
// 	// printf("ret : %d\n",ft_strcmp("aba","aaa"));
// 	// printf("ret 5: %d\n\n",ft_strcmp("aca","aaa"));

// 	// char *ms1 = "hello";
// 	// char *ms2 = "wello";

// 	// dest = "hcello";
// 	// src = "haello";
// 	// dest[0] = 'w';
// 	// printf("ret : %d\n", ft_strcmp(src, dest));
// 	// printf("org : %d\n", strcmp(src, dest));

// 	// printf("ret : %d\n", ft_strcmp("hello", "hello"));
// 	// printf("org : %d\n", strcmp("hello", "hello"));

// 	// printf("ret : %d\n", ft_strcmp("helfo", "hello"));
// 	// printf("org : %d\n", strcmp("helfo", "hello"));

// 	// printf("ret : %d\n", ft_strcmp("hello", "helfo"));
// 	// printf("org : %d\n", strcmp("hello", "helfo"));

// 	// printf("ret : %d\n", ft_strcmp("hell", "hello"));
// 	// printf("org : %d\n", strcmp("hell", "hello"));

// 	// printf("ret : %d\n", ft_strcmp("hello", "hell"));
// 	// printf("org : %d\n", strcmp("hello", "hell"));

// 	printf("\n-- ft_write --\n");
// 	errno = 0;
// 	printf("write : %ld", write(1, "hello!\n", 7));
// 	printf(", errno : %d\n", errno);
// 	errno = 0;
// 	printf("ft_write : %ld", ft_write(1, "hello!\n", 7));
// 	printf(", errno : %d\n", errno);

// 	// printf("\n-- ft_read --\n");
// 	// fd = open("./Makefile", O_RDONLY);
// 	// errno = 0;
// 	// ret_read = read(fd, src, 18);
// 	// close(fd);
// 	// printf("read : %s, ret : %d, errno : %d\n", src, ret_read, errno);
// 	// fd = open("./Makefile", O_RDONLY);
// 	// errno = 0;
// 	// ret_ft_read = ft_read(fd, dest, 18);
// 	// close(fd);
// 	// printf("ft_read : %s, ret : %d, errno : %d\n", dest, ret_ft_read, errno);
// 	// fd = open("./Makefileqsdf", O_RDONLY);
// 	// errno = 0;
// 	// ret_read = read(fd, src, 18);
// 	// close(fd);
// 	// printf("read : %s, ret : %d, errno : %d\n", src, ret_read, errno);
// 	// fd = open("./Makefileqsdf", O_RDONLY);
// 	// errno = 0;
// 	// ret_ft_read = ft_read(fd, dest, 18);
// 	// close(fd);
// 	// printf("ft_read : %s, ret : %d, errno : %d\n", dest, ret_ft_read, errno);

// 	// printf("\n-- ft_strdup --\n");
// 	// errno = 0;
// 	// char *duplicated_str = ft_strdup("hello world");
// 	// if (duplicated_str)
// 	// 	printf("%p : %s, errno : %d\n", duplicated_str, duplicated_str, errno);
// 	// else
// 	// 	printf("%p, errno : %d\n", duplicated_str, errno);
//     return 0;
// }
