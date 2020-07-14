/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#2b2b2b",   /* during input */
	[FAILED] = "#df2800",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#cccccc";

/* font name (must be a valid x11 front name) */
static const char * font_name = "-misc-fixed-medium-r-normal--20-200-75-75-c-100-iso8859-1";

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "slock.init",             STRING,  &colorname[INIT] },
		{ "slock.input",            STRING,  &colorname[INPUT] },
		{ "slock.failed",           STRING,  &colorname[FAILED] },
		{ "slock.message",          STRING,  &text_color },
		{ "slock.message.font",     STRING,  &font_name },
};
