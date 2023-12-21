'''
import matplotlib.pyplot as plt
import numpy as np

def plot_lines_with_colors():
    # Generate some example data
    x = np.linspace(0, 10, 100)

    # Example functions to plot
    functions = [ x, x*x, np.cos(x)]

    # Corresponding colors for each function
    colors = ['blue', 'green', 'red']

    # Plot each function with its corresponding color
    for i, func in enumerate(functions):
        plt.plot(x, func, label=f'Function {i+1}', color=colors[i])

    # Add labels and a legend
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title('Multiple Functions with Different Colors')
    plt.legend()

    # Show the plot
    plt.show()


# Call the function to plot lines with different colors
plot_lines_with_colors()

'''

import matplotlib.pyplot as plt
import numpy as np

def plot_bar_chart():
    # Example data
    categories = ['Category 1', 'Category 2', 'Category 3', 'Category 4', 'Category 5']
    values = [10, 24, 18, 30, 15]

    # Plot the bar chart
    plt.bar(categories, values, color='skyblue')

    # Add labels and a title
    plt.xlabel('Categories')
    plt.ylabel('Values')
    plt.title('Bar Chart Example')

    # Show the plot    
    

# Call the function to plot the bar chart
plot_bar_chart()


plt.savefig("/home/btwist/Desktop/crow/python/char")