/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#1f5393",   /* during input */
	[FAILED] = "#df2800",   /* wrong password */
	[CAPS] =   "#effd5f",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#cccccc";

/* font name (must be a valid x11 front name) */
static const char * font_name = "12x24";

/* time in seconds before the monitor shuts down */
static const int monitortime = 15;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 15;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "background",     STRING,  &colorname[INIT] },
		{ "color12",        STRING,  &colorname[INPUT] },
		{ "color9",         STRING,  &colorname[FAILED] },
		{ "color11",        STRING,  &colorname[CAPS] },
		{ "color7",         STRING,  &text_color },
};
