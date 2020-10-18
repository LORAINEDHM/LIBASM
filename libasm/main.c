#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "libasm.h"


int main()
{
    /*
    **   #############
    **   # FT_STRLEN #
    **   #############
    */

	// printf("result = %d\n", ft_strlen("lorainedu59"));


    // /*
    // **   #############
    // **   # FT_STRCPY #
    // **   #############
    // */

	// printf("result = %s\n", ft_strcpy("lorainedu59", "lorainedu59"));




    // SIMON

    char *src;
	char *dest;
	ssize_t ret;
	// int  fd;
	// int  ret_read;
	// int ret_ft_read;

	src = "simon";
	dest = malloc(19);
	// memcpy(src, "hello world", 12);
	// memcpy(dest, "bonan tagon mondo", 18);

	// printf("\n-- ft_strlen --\n");
	// printf("\"test\" : %ld\n", ft_strlen("test"));
	// printf("\"testqsfndkjq\" : %ld\n", ft_strlen("testqsfndkjq"));
	// printf("\"dfvsxwvwestqsfndkjq\" : %ld\n", ft_strlen("dfvsxwvwestqsfndkjq"));

	// printf("\n-- ft_strcpy --\n");
	// printf("before :\n\tsrc : %s, dest : %s\n", src, dest);
	// ret = ft_strcpy(dest, src);
	// printf("after :\n\tsrc : %s, dest : %s\nret : %s\n", src, dest, ret);
    //printf("real strcpy = %s\n", strcpy("coucou", NULL));


	//printf("\n-- ft_strdup --\n");
	//printf("before :\n\tsrc : %s, dest : %s\n", src, dest);
	//ret = ft_strdup(src);
	//printf("ret : %s\n", ret);

	ret = write(-1, "bonjour", 7);
	printf("real ret = %zd\n", ret);
	printf("ret = %zd\n", ft_write(-1, "bonjour", 0));
	//FT_WRITE_EXPECT_ERROR(42, "bonjour", 7);
	//FT_WRITE_EXPECT_ERROR(9809, "bonjour", 7);
	//FT_WRITE_EXPECT_ERROR(98123, "", 1);
	//FT_WRITE_EXPECT_ERROR(42, NULL, 7);

    return (0);
}