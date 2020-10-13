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

	printf("result = %d\n", ft_strlen("lorainedu59"));


    /*
    **   #############
    **   # FT_STRCPY #
    **   #############
    */

	printf("result = %s\n", ft_strcpy("lorainedu59", "lorainedu59"));




    return (0);
}