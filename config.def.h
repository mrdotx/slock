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

/* add pixel from top to display message */
static const int message_top = 0;

/* default message */
static const char * message = "locked";

/* text color */
static const char * text_color = "#cccccc";

/* font name (must be a valid x11 front name) */
static const char * font_name = "-misc-fixed-medium-r-normal--20-200-75-75-c-100-iso8859-1";

/* time in seconds before the monitor shuts down */
static const int monitortime = 20;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
        { "init",             STRING,  &colorname[INIT] },
        { "input",            STRING,  &colorname[INPUT] },
        { "failed",           STRING,  &colorname[FAILED] },
        { "message",          STRING,  &text_color },
        { "message.font",     STRING,  &font_name },
};
