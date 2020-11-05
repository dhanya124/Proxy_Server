#include <stdio.h>
#include <sys/socket.h>
#include <pthread.h>

int main(int argc, char const *argv[])
{
    int socket_ds;

    //creating the socket
    socket_ds=socket(AF_INET,SOCK_STREAM,8080);
    if (socket_ds<0)
    {
        perror("Error while creating socket\n");
    }

    //making a connection with server

    
    return 0;
}

