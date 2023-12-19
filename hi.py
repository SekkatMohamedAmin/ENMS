import matplotlib.pyplot as plt
import numpy as np

def plot_lines_with_colors():
    # Generate some example data
    x = np.linspace(0, 10, 100)

    # Example functions to plot
    functions = [np.sin(x), np.cos(x), np.tan(x)]

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
