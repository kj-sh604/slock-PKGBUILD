/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#303030",     /* after initialization */
	[INPUT] =  "#11427E",   /* during input */
	[FAILED] = "#7d4c10",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
