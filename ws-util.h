/**********************************************************************
 ws-util.h - Declarations for the Winsock utility functions module.

 Source: http://tangentsoft.net/wskfaq/examples/basics/index.html
*********************************************************************/

#if !defined(WS_UTIL_H)
#define WS_UTIL_H

#include <winsock2.h>	// For MS Windows Socket Application 2.0

const char* WSAGetLastErrorMessage(const char* pcMessagePrefix,
									int nErrorID = 0);
bool ShutdownConnection(SOCKET sd, char* sock_name);


#endif // !defined (WS_UTIL_H)
