#ifndef HTTP_SERVER_HEADER
#define HTTP_SERVER_HEADER

#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>

//  Macro function for used for error handling
#define err_exit(msg) { \
                      perror(msg); \
                      exit(-1); \
                      }

//  Max 10 connections are accepted in listen
#define BACKLOG 10

//  Buffer size
#define SIZE 1024

//  Response for invalid header
#define BAD_REQUEST "HTTP/1.1 400 Bad Request\nContent-Type: text/plain\n \
                      Content-Length: 16\n\n400 Bad Request!"

//  Response for file not found case
#define FILE_NOT_FOUND "HTTP/1.1 404 File Not Found\nContent-Type: \
                      text/plain\nContent-Length: 19\n\n404 File Not Found!"

//  HttpHeader structure will store first line of the request.
typedef struct HttpHeader {
  char  *type;
  char  *filename;
  char  *connection;
}HttpHeader;

//  Parses the first line of the request header and creates response.
void ParseHttpHeaderAndConstructResponse(char *header, char *Response);

#endif //  HTTP_SERVER_HEADER
