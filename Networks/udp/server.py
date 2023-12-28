# # import socket

# # sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
# # udp_host = socket.gethostname()          # Host IP
# # udp_port = 12345                        # specified port to connect
# # sock.bind((udp_host, udp_port))

# # while True:
# #     print("Waiting for client...")
# #     data, addr = sock.recvfrom(1024)  # receive data from client
# #     data=data.decode('utf-8')
# #     print("Received Message:", data, " from", addr)
# #     if data.lower() == "hai":
# #         print("Terminating server as per client's request.")
# #         break



# import socket

# sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
# udp_host = ""  # Listen on all available interfaces
# udp_port = 12345  # specified port to connect
# sock.bind((udp_host, udp_port))

# print("Chat Server is running. Type 'bye' to exit.")

# while True:
#     data, addr = sock.recvfrom(1024)  # receive data from client
#     message = data.decode('utf-8')
#     print("Received Message:", message, " from", addr)
    
#     if message.lower() == "bye":
#         print("Client has left the chat.")
#         break
    
#     reply = input("You: ")  # Get your reply
#     sock.sendto(reply.encode('utf-8'), addr)


import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
udp_host = "192.168.56.1"  # Server's IP address
udp_port = 12345  # specified port to connect
sock.bind((udp_host, udp_port))

print("Chat Server is running. Type 'bye' to exit.")

while True:
    data, addr = sock.recvfrom(1024)  # receive data from client
    message = data.decode('utf-8')
    print("Received Message:", message, " from", addr)
    
    if message.lower() == "bye":
        print("Client has left the chat.")
        break
    
    reply = input("You: ")  # Get your reply
    sock.sendto(reply.encode('utf-8'), addr)
