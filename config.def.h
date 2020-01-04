/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3476a4",   /* after initialization */
	[INPUT] =  "#333333",   /* during input */
	[FAILED] = "#ff5555",   /* wrong password */
};

/*
 * xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color10",      STRING,  &colorname[INIT] },
		{ "color8",       STRING,  &colorname[INPUT] },
		{ "color9",       STRING,  &colorname[FAILED] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "fixed";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 15;
