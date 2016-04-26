/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=16:bold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *normbgcolor = "#ffffff"; /* -nb option; normal foreground                 */
static const char *normfgcolor = "#222222"; /* -nf option; normal background                 */
static const char *selbgcolor  = "#eeeeee"; /* -sb option; selected foreground               */
static const char *selfgcolor  = "#005577"; /* -sf option; selected background               */
static const char *outbgcolor  = "#00ffff";
static const char *outfgcolor  = "#000000";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
