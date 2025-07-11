#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>// for close()
/*his is a POSIX header file. It provides the close() function to close a socket or file descriptor. (Works only on Linux/Unix)*/
/*=======================================================*/
#include <arpa/inet.h>      // for inet_addr(), htons()
/*Contains functions for internet operations:
inet_addr() converts IP from string to numeric.
htons() converts port number to network byte order.*/
/*=======================================================*/
#include <sys/socket.h>     // for socket functions
/*Provides functions and structures needed to create and use sockets like socket(), bind(), listen(), accept(), send(), etc.*/
/*=======================================================*/
#define PORT 1234
/* Sets the port number to 1234 where the server will listen for incoming connections.*/
/*=======================================================*/

int main() {
    int server_fd, new_socket;
/* Declare two socket file descriptors:
server_fd: for listening to incoming connections
new_socket: for communicating with the client after accepting*/
    struct sockaddr_in address;//A structure to hold the server’s address (IP + port + protocol type).
    int addrlen = sizeof(address);//Holds the size of the address structure, used in accept().
    char *message = "Hello from server!";//The message that the server will send to the client.

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
 /*| Argument      | Meaning                        |
| ------------- | ------------------------------ |
| `AF_INET`     | Use **IPv4** address family    |
| `SOCK_STREAM` | Use **TCP** (connection-based) |
| `0`           | Use default protocol for TCP   |
*/
    if (server_fd == 0) {//If socket() fails, it prints an error and exits the program.
        perror("Socket failed");
        exit(EXIT_FAILURE);
    }

    // 2. Bind socket to port
    address.sin_family = AF_INET;//Sets the address family to IPv4.


    address.sin_addr.s_addr = INADDR_ANY;  //Binds to all available network interfaces (e.g., localhost, LAN IP, etc.)


    address.sin_port = htons(PORT);        // Converts the port number to network byte order using htons().



    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)

    /*server_fd :It’s the file descriptor (integer) returned by the socket() function.It represents your server socket.
    (struct sockaddr *)&address :address is a structure of type struct sockaddr_in, which holds:
    address is a structure of type struct sockaddr_in, which holds:

        Field	        Meaning
        sin_family	    Address family (IPv4)
        sin_addr.s_addr	IP address
        sin_port	    Port number


        Why cast to (struct sockaddr *)?
The bind() function expects the second argument to be:

const struct sockaddr *
But address is of type:

struct sockaddr_in
So, you need to typecast it like this:

(struct sockaddr *)&address
This is a common pattern in C networking to handle different address types using the generic sockaddr type.

3. sizeof(address)
It tells the size (in bytes) of the structure you're passing as the address.

In this case, it's the size of struct sockaddr_in.

This helps bind() know how many bytes to read from the address you provide.

📦 Full Breakdown Summary:
Argument	Purpose
server_fd	The socket file descriptor (int)
(struct sockaddr *)&address	The server’s IP and port (with cast)
sizeof(address)	Size of the address structure in bytes
*/
    
    
    {
        perror("Bind failed");
        exit(EXIT_FAILURE);
        /* Binds the socket to the IP address and port.
        If bind() fails, it shows an error (e.g., port already in use).*/
    }

    // 3. Listen for connections
    listen(server_fd, 3);
    /*Puts the server socket in listening mode.
    3 means max 3 pending connections in queue.*/
    printf("Server is listening on port %d...\n", PORT);//Displays a message that the server is now waiting for connections.

    // 4. Accept connection
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);

            /* Accepts an incoming connection from a client.
            new_socket is used to communicate with the connected client.
            (socklen_t *)&addrlen
addrlen is an integer that holds the size of the address structure.

accept() will use it to:

Know how many bytes to read into address.

Fill it with the actual size of the client's address after the connection is accepted.

Since accept() requires a pointer to socklen_t, we write:

(socklen_t *)&addrlen
🧠 What Happens in This Call?

new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);
The server is waiting for a client to connect on server_fd.

When a client connects:

The client’s IP and port info are filled into address.

The size of the address is stored in addrlen.

A new socket (new_socket) is returned to handle communication with this client.

Summary Table:
Part	What it Does
server_fd	The listening socket (server is waiting for clients)
(struct sockaddr *)&address	Where client's IP/port will be stored after connection
(socklen_t *)&addrlen	Pointer to size of address and filled with actual size
            
            */
    if (new_socket < 0) {//Checks if accept() failed.
        perror("Accept failed");
        exit(EXIT_FAILURE);
    }

    // 5. Send message
    send(new_socket, message, strlen(message), 0);
    /* Sends the message "Hello from server!" to the connected client.
strlen(message) is the number of bytes to send.
0 is a flag (usually kept 0 for basic use).*/
    printf("Message sent to client\n");// Confirms that the server has sent the message.



    // 6. Close sockets
    close(new_socket);
    close(server_fd);
    /*Closes the client connection and the server socket.
      Frees up the port and memory.*/

    return 0;//Ends the main() function successfully.


}

