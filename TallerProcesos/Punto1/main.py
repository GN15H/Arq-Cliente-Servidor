import threading
from figure import Figure, Rectangle, Triangle 

def thread_area(figure: Figure, areas: list[float], index: int) -> None:
    area = figure.area()
    areas[index] = area

def __main__():
    triangle_a = Triangle(10,12)
    rectanle_a = Rectangle(8, 7)
    rectangle_b = Rectangle(14, 5)
    triangle_b = Triangle(2,5)
    figure_composed: list[Figure] = [triangle_a, triangle_b, rectanle_a, rectangle_b]
    thread_list: list[threading.Thread] = []
    areas = [0,0,0,0]
    for index, figure in enumerate(figure_composed):
        t = threading.Thread(target=thread_area, args=(figure, areas, index))
        thread_list.append(t)
    for t in thread_list:
        t.start()
    for t in thread_list:
        t.join()    
    print(sum(areas))

__main__()
