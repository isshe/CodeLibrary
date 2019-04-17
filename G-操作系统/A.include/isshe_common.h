#ifndef _ISSHE_COMMON_H_
#define _ISSHE_COMMON_H_

#define ISSHE_SUCCEED   0
#define ISSHE_FAILED    (-1)
#define ISSHE_TRUE      1
#define ISSHE_FALSE     0
#define ISSHE_MAXLINE   4096

#ifndef	PATH_MAX                /* should be in <limits.h> */
#define	PATH_MAX        1024    /* max # of characters in a pathname */
#endif

/* default permissions for new files */
#define	ISSHE_FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/* default permissions for new directories */
#define	ISSHE_DIR_MODE  (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

#endif
