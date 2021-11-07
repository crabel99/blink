
#ifndef DEBUG_H
#define DEBUG_H

// To enable testing or debugging uncomment the appropriate line.
// #define _TEST_
// #define _DEBUG_

#ifdef _DEBUG_
#define _PP(a) SerialUSB.print(a);
#define _PL(a) SerialUSB.println(a);
#else
#define _PP(a)
#define _PL(a)
#endif /* _DEBUG_ */

#ifdef _TEST_
#include <unity.h>
#endif // _TEST_ 

#endif /* DEBUG_H */
