class Car:
    def __init__(self, brand, year):
        self.year = year
        self.brand = brand

    def __str__(self):
        return f"{self.year} model {self.brand}"

car = Car("Sedan", 2023)
print(car)
