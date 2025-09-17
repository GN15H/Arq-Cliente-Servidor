def total_area(figures):
	return sum(figure.area() for figure in figures)

from abc import ABC, abstractmethod

class Figure(ABC):
	@abstractmethod
	def area(self):
		pass

class Rectangle(Figure):
	def __init__(self, base, height):
		self.base = base
		self.height = height

	def area(self):
		return self.base * self.height

class Triangle(Figure):
	def __init__(self, base, height):
		self.base = base
		self.height = height

	def area(self):
		return 0.5 * self.base * self.height
