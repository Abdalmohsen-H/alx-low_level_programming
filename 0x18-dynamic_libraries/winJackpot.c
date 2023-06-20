/**
 * rand - My predfined rand() func
 *to generate specific sequence
 * randSeed is a value used to generate
 *random numbers
 *but you already know it isn't random
 * Return: specific Numbers based on randseed value
 */
int rand(void)
{static int randseed = -1;/* initializes the static variable*/
	
	/*very important to use static int*/
	randseed++;/*iterate with every func calling*/
	switch (randseed)
	{/*my selected values are less by one of desired value*/
		/* because gm file somehow adds one to selected number*/
		case 0:/*on1st rand func call*/
			return (8);
		case 1:/*on 2nd rand func call*/
			return (8);
		case 2:/*on 3rd rand func call*/
			return (7);
		case 3:/*and son on ...*/
			return (9);
		case 4:
			return (23);
		case 5:
			return (74);
		default:/*any default value*/
			return (2 * randseed);
	}
}
