
#include "libft.h"
int fun_isprint(int c){
	
	if( c >= 32 && c <= 126 ){

		return 1;

	}
	else {
		return 0;
	}


}