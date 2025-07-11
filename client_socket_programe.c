#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>         // for close()
#include <arpa/inet.h>      // for inet_addr()
#include <sys/socket.h>     // for socket functions

#define PORT 1234

int main() {
    int sock = 0;//It will hold the return value from socket() and be used in all client operations.
    struct sockaddr_in serv_addr;
    /*This structure will hold the server’s address info, such as:
        IP address
        Port number
        Protocol family*/
    char buffer[1024] = {0};//A buffer to store the message received from the server.
Initialized to 0 (empty).

    // 1. Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    /*AF_INET → IPv4
    SOCK_STREAM → TCP (connection-oriented)
    0 → Default protocol for TCP
✔️ If successful, returns a non-negative integer (file descriptor).*/
    if (sock < 0) {
        perror("Socket creation error");
        return -1;
    }

    // 2. Define server address
    serv_addr.sin_family = AF_INET;//Using IPv4 address family.


    serv_addr.sin_port = htons(PORT);//Converts port number to network byte order using htons().



    // Convert IPv4 address from text to binary form
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) {
        printf("Invalid address / Address not supported\n");
        return -1;
    }

    // 3. Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection Failed");
        return -1;
    }

    // 4. Read message from server
    read(sock, buffer, 1024);
    printf("Message from server: %s\n", buffer);

    // 5. Close socket
    close(sock);

    return 0;
}

