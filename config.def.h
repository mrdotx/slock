/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#3476a4",   /* during input */
	[FAILED] = "#ff5555",   /* wrong password */
	[CAPS] =   "#ffff55",   /* capslock on */
};

/*
 * xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color10",      STRING,  &colorname[INPUT] },
		{ "color9",       STRING,  &colorname[FAILED] },
		{ "color11",      STRING,  &colorname[CAPS] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 15;
