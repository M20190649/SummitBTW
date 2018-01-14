import socket   #for sockets
import sys  #for exit
 
#create an INET, STREAMing socket
try:
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
except socket.error:
    print 'Failed to create socket'
    sys.exit()
print 'Socket Created'
 
host = '127.0.0.1';
port = 1482;
 
#Connect to remote server
try:
    s.connect((host , port))
except Exception as e:
    print(e)
#Send some data to remote server
while True:
    id_desired = input("## Write id of object you are interested for >>\n")
    try :
        #Set the whole string
        s.sendall(str(id_desired))
    except socket.error as e:
        #Send failed
        print e
        sys.exit()
    print 'Message send successfully'
     
    reply = s.recv(4096)
    print reply