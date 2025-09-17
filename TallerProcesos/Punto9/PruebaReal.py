from datetime import datetime, timedelta
import time
import uuid
import random

import math
import threading #


class OrdersManager:
    __orders = []
    __orders_processed = 0
    __last_printed_log = datetime.now()
    __sem = threading.Semaphore()

    def __init__(self, threads: int=1) -> None:
        self.__generate_fake_orders(quantity=1_000)
        self.__thread_arr: list[threading.Thread] = self.__setup_threads(threads=threads)

    def __generate_fake_orders(self, quantity):
        self.__log(f"Generating fake orders")
        self.__orders = [(uuid.uuid4(), x) for x in range(quantity)]
        self.__log(f"{len(self.__orders)} generated...")

    def __log(self, message):
        print(f"{datetime.now()} > {message}")

    def __fake_save_on_db(self, order):
        id, number = order

        self.__log(
            message=f"Order [{id}] {number} was successfully prosecuted."
        )

        time.sleep(random.uniform(0, 1))
    
    def __setup_threads(self, threads:int):
        thread_arr: list[threading.Thread] = []
        print("huh?")
        for i in range(threads):
            t = threading.Thread(target=self.__process_orders_segment, args=(i,))
            thread_arr.append(t)
        return thread_arr

    
    def __process_orders_segment(self, segment: int):
        segment_size = math.floor(len(self.__orders)/len(self.__thread_arr))
        start_pos = segment*segment_size
        end_pos = (segment + 1) * segment_size if segment < len(self.__thread_arr) - 1 else len(self.__orders)

        print("aver", start_pos, end_pos)
        for i in range(start_pos, end_pos):
            self.__fake_save_on_db(order=self.__orders[i])
            self.__sem.acquire()
            self.__orders_processed += 1
            if datetime.now() > self.__last_printed_log:
                self.__last_printed_log = datetime.now() + timedelta(seconds=5)
                self.__log(
                    message=f"Total orders executed: {self.__orders_processed}/{len(self.__orders)}"
                )
            self.__sem.release()


    def process_orders(self):
        # for order in self.__orders:
        #     self.__fake_save_on_db(order=order)
        #     self.__orders_processed += 1
        #     if datetime.now() > self.__last_printed_log:
        #         self.__last_printed_log = datetime.now() + timedelta(seconds=5)
        #         self.__log(
        #             message=f"Total orders executed: {self.__orders_processed}/{len(self.__orders)}"
        #         )
        for t in self.__thread_arr:
            t.start()
        for t in self.__thread_arr:
            t.join()


#
#
# ---
orders_manager = OrdersManager(15)

start_time = time.time()

orders_manager.process_orders()

delay = time.time() - start_time

print(f"{datetime.now()} > Tiempo de ejecucion: {delay} segundos...")