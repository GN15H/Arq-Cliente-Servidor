import threading
import random

def random_numbers(elements: list[int], index: int):
    total = 0
    for _ in range(100):
        total += random.randint(1, 1000)
    elements[index] = total


def __main__():
    thread_amount = 10
    thread_sum = [0 for _ in range(thread_amount)]
    threads = []
    for i in range(thread_amount):
        t = threading.Thread(target=random_numbers, args=(thread_sum, i))
        threads.append(t)
        t.start()
    
    for t in threads:
        t.join()
    
    #get the position with the max value
    max_index = 0
    for i in range(thread_amount):
        if thread_sum[i] > thread_sum[max_index]:
            max_index = i
    print(f"The thread with the highest sum is thread {max_index} with a sum of {thread_sum[max_index]}")
    print(thread_sum)

__main__()