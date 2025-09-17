import threading
import time

def print_sequence(n1: int, n2: int):
    print("Secuencia desde hilo")
    if n1>=n2:
        return
    for i in range(n1,n2):
        print(i)

def __main__():
    print("Ingrese primer número")
    n1 = int(input())
    print("Ingrese segundo número")
    n2 = int(input())
    t = threading.Thread(target=print_sequence, args=(n1,n2))
    t.start()
    time.sleep(0.01)
    print("Resta desde hilo principal",n2-n1)

__main__()
