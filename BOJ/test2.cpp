//=================================================== file = echoclient.c =====
//=  A simple echo client to demonstrate sockets programming                  =
//=   - TCP/IP client/server model is implemented                             =
//=============================================================================
//=  Notes:                                                                   =
//=    1) This program conditionally compiles for Winsock and BSD sockets.    =
//=       Set the initial #define to WIN or BSD as appropriate.               =
//=    2) There is *no* error checking in this program.  Error checking was   =
//=       omitted to simplify the program.                                    =
//=    3) This program needs server to be running on another host.  Program   =
//=       server should be started first.                                     =
//=    4) This program assumes that the server has the IP address hardcoded   =
//=       into "#define IP_ADDR"                                              =
//=---------------------------------------------------------------------------=
//=  Build: bcc32 echoclient.c or cl echoclient.c wsock32.lib for Winsock     =
//=         gcc echoclient.c -lsocket -lnsl for BSD                           =
//=---------------------------------------------------------------------------=
//=  History:  ZG (08/06/01) - Genesis - from client.c by KJC                 =
//=                                                                           =
//=============================================================================
#define BSD                // WIN for Winsock and BSD for BSD sockets

//----- Include files ---------------------------------------------------------
#include <stdio.h>          // Needed for printf()
#include <string.h>         // Needed for memcpy() and strcpy()
#ifdef WIN
  #include <windows.h>      // Needed for all Winsock stuff
#endif
#ifdef BSD
  #include <sys/types.h>    // Needed for system defined identifiers.
  #include <netinet/in.h>   // Needed for internet address structure.
  #include <sys/socket.h>   // Needed for socket(), bind(), etc...
  #include <arpa/inet.h>    // Needed for inet_ntoa()
  #include <fcntl.h>
  #include <netdb.h>
#endif

//----- Defines ---------------------------------------------------------------
#define  PORT_NUM         1050     // Port number used at the server
#define  IP_ADDR "65.34.90.187" // IP address of server (*** HARDWIRED ***)

//===== Main program ==========================================================
void main(void)
{
#ifdef WIN
  WORD wVersionRequested = MAKEWORD(1,1);       
  // Stuff for WSA functions
  //WinSock 1.1 요청 
  WSADATA wsaData;                              // Stuff for WSA functions
#endif

  unsigned int         server_s;        // Server socket descriptor
  struct sockaddr_in   server_addr;     // Server Internet address
  char                 out_buf[100];    // 100-byte output buffer for data
  // 출력 버퍼 output buffer 
  char                 in_buf[100];     // 100-byte input buffer for data
  // 입력 버퍼 output buffer 
/* strucct sockaddr_in{
   short sin_family; /*shuld be AF_INET
   u_showrt sin_port;
   struct in_addr sin_addr;
   char sin_zero[8]; /*not used, must be zero
*/ 
#ifdef WIN
  // This stuff initializes winsock
  WSAStartup(wVersionRequested, &wsaData);
#endif

  // >>> Step #1 <<<
  // Create a socket
  //   - AF_INET is Address Family Internet and SOCK_STREAM is streams
  server_s = socket(AF_INET, SOCK_STREAM, 0);

  // >>> Step #2 <<<
  // Fill-in the server socket's address information and do a connect with
  // the listening server.  The connect() will block.
  server_addr.sin_family      = AF_INET;            // Address family to use
  server_addr.sin_port        = htons(PORT_NUM);    // Port num to use
  server_addr.sin_addr.s_addr = inet_addr(IP_ADDR); // IP address to use
  connect(server_s, (struct sockaddr *)&server_addr, sizeof(server_addr));
  
  // Loop until all messages are typed and sent to server
  while(1)
  {
    // >>> Step #3 <<<
    // Send to the server
    // Type the message 
    gets(out_buf);
    // Bail out if "quit" is entered
    if (strcmp(out_buf, "quit") == 0)
      break;
    send(server_s, out_buf, (strlen(out_buf) + 1), 0);

    // >>> Step #4 <<<
    // Receive from the server
    recv(server_s, in_buf, sizeof(in_buf), 0);
    printf("Received: '%s' \n", in_buf);
  }

  // >>> Step #5 <<<
  // Close all open sockets
#ifdef WIN
  closesocket(server_s);
#endif
#ifdef BSD
  close(server_s);
#endif

#ifdef WIN
  // This stuff cleans-up winsock
  WSACleanup();
#endif
}