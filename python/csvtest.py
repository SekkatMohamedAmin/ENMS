import matplotlib.pyplot as plt
import csv
import pandas as pd 

variable1 = ""
variable2 = ""

with open('E:\ENMS\python\hi.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)

    # Get the first row
    first_row = next(csv_reader, None)
    print(first_row)
   
    variable1 = first_row[0]
    print(variable1)
    variable2 = first_row[1]
    print(variable2)

# Use pandas to read the CSV file
df = pd.read_csv('E:\ENMS\python\hi.csv', header=None, names=[variable1, variable2])

# Plotting
x = df[variable2]
y = df[variable1]

plt.bar(x, y)
plt.title('Doooooo')
plt.xlabel(variable2)
plt.ylabel(variable1)
plt.show()
