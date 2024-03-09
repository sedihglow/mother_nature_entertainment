#include <stdio.h> /* printf() scanf() I/O fread() functionalities */
#include <stdlib.h> /* Functions like exit(), and other standard functions */

/*
 * you cannot set variables in the struct type/definition below, they are
 * set once you actually declare a [ struct var_types all_types; ]
 */

struct var_types {
	char c;
	short int si;
	int ii;
	long int li;
	long l;
	long long ll;

	unsigned char uc;
	unsigned short int usi;
	unsigned int uii;
	unsigned long int uli;
	unsigned long ul;
	unsigned long long ull;
/* no typedef'd name, so on type declaration struct keyword is used. */
};

typedef struct def_var_types {
	char c;
	short int si;
	int ii;
	long int li;
	long l;
	long long ll;

	unsigned char uc;
	unsigned short int usi;
	unsigned int uii;
	unsigned long int uli;
	unsigned long ul;
	unsigned long long ull;

/* This gets used as the data type declaration, optional? */
} def_var_types_s;

int main(int argc, char *argv[])
{
	struct var_types svt;   /* declaration without typedef */
	def_var_types_s td_svt; /* declaration without typedef */
	/* first try
	struct def_var_types sdvt;
	 */

	/* initialize before use */

	/* Showing some printf specifiers,
	 * -- Specifiers found in the crashcourse youtube video --
	 * %d : Decimal Integer, int
	 * %i : Decimal Integer, int
	 * %f : Floating Point, float, 12.12
	 * %c : Single Character, char, '$'
	 * %s : String of Characters, amanbytes,char array[len] = {0};
	 */

	exit(EXIT_SUCCESS);
	/* return 0; */
}
