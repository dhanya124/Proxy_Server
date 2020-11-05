#include <stdio.h>
#include <sys/socket.h>
#include <pthread.h>

void socket_thread();

int main(int argc, char const *argv[])
{
    int socket_ds;
    struct sockaddr_in server;
    int N=100; //maximum number of connections queued

    //creating a socket
    socket_ds=socket(AF_INET,SOCK_STREAM,8080);
    //checking whether socket is created succesfully or not
    if(socket_ds==-1){
        printf("socket not created\n");
    }
    else{
        printf("socket created successfully\n");
    }
    
    //initializing the struct server
    server.sin_family=AF_INET;
    server.sin_addr.s_addr=INADDR_ANY;
    server.sin_port=htons(8080);

    //binding the socket
    if (bind(socket_ds,(sockaddr *)&server,sizeof(server))<0)
    {
        printf("Error while binding\n");
    }

    //listening on the socket
    if(listen(socket_ds,N)<0){
        perror("Error while listening\n");
    }

    while (1)
    {
        //I should write how i will incorporate multi threading
    }
    


    

    return 0;
}
