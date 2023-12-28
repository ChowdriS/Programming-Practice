# import socket

# sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
# udp_host = socket.gethostname()      # Host IP
# udp_port = 12345                    # specified port to connect

# msg = "Hai"
# msg_bytes = msg.encode('utf-8')  # Convert the string to bytes
# print("UDP target IP:", udp_host)
# print("UDP target Port:", udp_port)

# sock.sendto(msg_bytes, (udp_host, udp_port))  # Sending message to UDP server




# import socket

# sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
# udp_port = 12345  # specified port to connect

# server_ip = input("Enter the server IP address: ")

# print("Chat Client is running. Type 'bye' to exit.")

# while True:
#     msg = input("You: ")  # Get your message
#     sock.sendto(msg.encode('utf-8'), (server_ip, udp_port))  # Sending message to UDP server
    
#     if msg.lower() == "bye":
#         print("Exiting chat.")
#         break
    
#     data, addr = sock.recvfrom(1024)  # receive reply from server
#     reply = data.decode('utf-8')
#     print("Server:", reply)


import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # For UDP
udp_host = "10.1.32.19"  # Server's IP address
udp_port = 20004  # specified port to connect

print("Chat Client is running. Type 'bye' to exit.")

while True:
    msg = input("You: ")  # Get your message
    sock.sendto(msg.encode('utf-8'), (udp_host, udp_port))  # Sending message to UDP server
    
    if msg.lower() == "bye":
        print("Exiting chat.")
        break
    
    data, addr = sock.recvfrom(1024)  # receive reply from server
    reply = data.decode('utf-8')
    print("Server:", reply)

