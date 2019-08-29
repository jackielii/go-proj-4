#define ACCEPT_USE_OF_DEPRECATED_PROJ_API_H yes
#include <proj_api.h>

char *transform(projPJ srcdefn, projPJ dstdefn, long point_count, double *x, double *y, double *z);
char *fwd(projPJ src, double *lng, double *lat);
char *inv(projPJ dst, double *lng, double *lat);
char *get_err(void);
