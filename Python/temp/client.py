import socket
import threading


def receive_messages(sock):
    while True:
        try:
            message = sock.recv(1024).decode()
            if message:
                print(message)
        except Exception as e:
            print(f"Error receiving message: {e}")
            break


# Connect to the server
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(("localhost", 12345))

# Send client's name to the server
name = input("Enter your name: ")
client.send(name.encode())

# Start a thread to receive messages from the server
receive_thread = threading.Thread(target=receive_messages, args=(client,))
receive_thread.start()

# Send messages to the server
while True:
    message = input()
    if message.lower() == "exit":
        break
    client.send(message.encode())

client.close()
