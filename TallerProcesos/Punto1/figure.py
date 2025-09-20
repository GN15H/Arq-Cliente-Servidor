from abc import ABC, abstractmethod
from typing import override

class Figure(ABC):
	@abstractmethod
	def area(self) -> float:
		pass

class Rectangle(Figure):
    def __init__(self, base : float, height : float):
        self.base: float = base
        self.height: float = height

    @override
    def area(self) -> float:
        return self.base * self.height

class Triangle(Figure):
    def __init__(self, base: float, height: float):
        self.base: float = base
        self.height: float = height

    @override
    def area(self) ->float:
        return 0.5 * self.base * self.height


def total_area(figures: list[Figure]) -> float:
	return sum(figure.area() for figure in figures)
