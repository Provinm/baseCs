#coding=utf-8

from socket import *
from time import ctime



class SocketServer(object):
    '''socket server 

    '''
    def __init__(self):
        
        self.HOST = ""
        self.PORT = 21576
        self.BUFSIZE = 1024
        self.ADDR = (self.HOST, self.PORT)
    def run(self):
        tcp_server_sock = socket(AF_INET, SOCK_STREAM)
        tcp_server_sock.bind(self.ADDR)
        tcp_server_sock.listen(5)  

        while True:
            # 接受客户端的请求
            print("waiting for connection...")
            tcp_client_socket, addr = tcp_server_sock.accept()
            print("...connected from : ", addr)

            while True:
                # 获取客户端发送的信息
                data = tcp_client_socket.recv(self.BUFSIZE)
                if not data:
                    break

                print("client: {}".format(data))
                r_data = input(">>>>")
                tcp_client_socket.send(bytes(r_data, "utf-8"))
                
            # 信息接受完毕后，关闭客户端的链接
            tcp_client_socket.close()
        # 关闭服务端的连接
        tcp_server_sock.close()

if __name__ == "__main__":

    server = SocketServer()
    server.run()
