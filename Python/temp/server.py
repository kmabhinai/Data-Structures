import socket
import threading


# Function to handle client connections
def handle_client(client_socket, client_address):
    print(f"Accepted connection from {client_address}")

    # Request client's name
    client_socket.send("Enter your name: ".encode())
    client_name = client_socket.recv(1024).decode()
    print(f"{client_name} has joined the chat.")

    while True:
        # Receive message from the client
        try:
            message = client_socket.recv(1024).decode()
            if not message:
                break
            print(f"{client_name}: {message}")

            # Broadcast the received message to all clients
            broadcast(f"{client_name}: {message}", client_socket)

        except Exception as e:
            print(f"Error: {e}")
            break

    # Client disconnected
    print(f"{client_name} has left the chat.")
    client_socket.close()


# Function to broadcast message to all clients
def broadcast(message, sender_socket):
    for client in clients:
        if client != sender_socket:
            try:
                client.send(message.encode())
            except Exception as e:
                print(f"Error broadcasting message: {e}")
                client.close()
                clients.remove(client)


# Initialize server
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind(("localhost", 12345))
server.listen(5)

print("Server is listening for connections...")

# List to hold client sockets
clients = []

# Accept incoming connections
while True:
    client_socket, client_address = server.accept()
    clients.append(client_socket)

    # Start a new thread to handle client connection
    client_thread = threading.Thread(
        target=handle_client, args=(client_socket, client_address)
    )
    client_thread.start()
