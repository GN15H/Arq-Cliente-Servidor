import threading
import time
import random

MAX_VALUE = 2000
sem = threading.Semaphore()
ev = threading.Event()
nums = []

def check_sum(arr: list[int]):
    while ev.is_set():
        arr_sum = None
        with sem:
            arr_sum = sum(arr)
            print("La suma es", arr_sum)
        if arr_sum > MAX_VALUE:
            ev.clear()
            break
        time.sleep(0.1)

def add_element(arr: list[int]):
    while ev.is_set():
        with sem:
            arr.append(random.randint(1,100))
        time.sleep(0.05)

def change_element(arr: list[int]):
    while ev.is_set():
        with sem:
            for idx, val in enumerate(arr):
                if str(val)[-1] == "0":
                    arr[idx] = -1
        time.sleep(0.05)

def __main__():
    ev.set()
    producer = threading.Thread(target=add_element, args=(nums,))
    consumer = threading.Thread(target=change_element, args=(nums,))
    examiner = threading.Thread(target=check_sum, args=(nums,))
    producer.start()
    consumer.start()
    examiner.start()

    examiner.join()
    print("Final nums:", nums)

__main__()
