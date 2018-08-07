#coding=utf-8

from socket import *

class SocketClient(object):

    def __init__(self):

        self.host = "localhost"
        self.port = 21576
        self.bufsize = 1024
        self.addr = (self.host, self.port)

    def run(self):

        tcp_client_sock = socket(AF_INET, SOCK_STREAM)
        tcp_client_sock.connect(self.addr)

        while True:
            
            data = input(">>>>")
            if not data:
                break

            tcp_client_sock.send(bytes(data, "utf-8"))
            data = tcp_client_sock.recv(self.bufsize)

            if not data:
                break
            
            print("server: {}".format(data))


        tcp_client_sock.close()


if __name__ == "__main__":

    client = SocketClient()
    client.run()