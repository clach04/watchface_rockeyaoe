#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#define FONT_NAME RESOURCE_ID_FONT_ROCKY_AOE_53
#define USE_TIME_FONT_FOR_DATE
#undef DEBUG_TIME

#ifdef PBL_COLOR
#define DEFAULT_TIME_COLOR GColorRed
#endif

#define DATE_ALIGN GTextAlignmentCenter
#define DATE_FMT_STR "%b%d\n\n%a"  /* TODO review %d for day */
#define MAX_DATE_STR "Aug00\n\nThu"

#define BAT_ALIGN GTextAlignmentCenter

#ifdef PBL_ROUND /* 180x180 */
/*TODO center/move right*/
    #define CLOCK_POS GRect(0, 72, 180, 180) /* probably taller than really needed */
    #define BT_POS GRect(0, 121, 180, 180) /* probably taller than really needed */

    #define DATE_POS GRect(0, 20, 180, 180) /* probably taller than really needed */

    #define BAT_POS GRect(0, 10, 180, 180) /* probably taller than really needed */
#else /* PBL_RECT 144x168*/
    #define CLOCK_POS GRect(0, 62, 144, 168) /* probably taller than really needed */
    #define BT_POS GRect(0, 113, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 10, 144, 168) /* probably taller than really needed */
    #define BAT_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
