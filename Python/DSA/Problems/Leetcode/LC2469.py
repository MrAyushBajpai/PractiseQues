class TemperatureConverter:
    def convertTemperature(self, celsius):
        kelvinTemp = celsius + 273.15
        fahrenheitTemp = celsius * 1.80 + 32
        return [kelvinTemp, fahrenheitTemp]

if __name__ == "__main__":
    celsius = float(input())
    converter = TemperatureConverter()
    result = converter.convertTemperature(celsius)
    print(result)
