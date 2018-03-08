import socket
udpsocket = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
udpsocket.bind(('',7788))
recvdata = udpsocket.recvfrom(1024)
print(recvdata)
