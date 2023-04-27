#ifndef __predict_true
#define	__predict_true(exp)	__builtin_expect((exp) != 0, 1)
#endif

#ifndef __predict_false
#define	__predict_false(exp)	__builtin_expect((exp) != 0, 0)
#endif

/* XXX */
static inline int
closefrom(int fd)
{
	int i, error, ret;

#define	CLOSEFROM_MAX_FD 20 /* XXX XXX XXX */

	ret = 0;
	for (i = fd; i < CLOSEFROM_MAX_FD; i++) {
		error = close(i);
		if (error)
			warnx("close: fd %d", i);
		ret |= error;
	}

	return ret;
}

/* XXX */
static intmax_t
strtoi(const char * restrict nptr, char ** restrict endptr, int base,
    intmax_t lo, intmax_t hi, int *rstatus)
{

	/* XXX XXX XXX */
	*rstatus = 0;
	return strtoll(nptr, endptr, base);
}
