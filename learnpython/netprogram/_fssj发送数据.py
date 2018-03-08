import socket
udpsocket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
senddate = input("请输入发送内容")
sendip  =  input("请输入接受者ip")
sendport = int(input("请输入接受者端口"))

udpsocket.sendto(senddate.encode("utf-8"),('192.168.1.101',8080))

