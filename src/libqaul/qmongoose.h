
#ifndef QL_MONGOOSE_H_
#define QL_MONGOOSE_H_

// enable threads
#define MG_ENABLE_THREADS 1
// make internal functions public
#define MG_INTERNAL
// define multipart streaming for file uploads
#define MG_ENABLE_HTTP_STREAMING_MULTIPART 1
// implement our own virtual filesystem
#include <QaulConfig.h>
#ifdef QAUL_PORT_ANDROID
#define MG_USER_FILE_FUNCTIONS
#endif
/* **********************
 * end of changes by qaul.net
 * **********************/

#include "mongoose.h"

#endif // CL_MONGOOSE_H_

