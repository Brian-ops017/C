import numpy as np
from scipy.integrate import dblquad

# Define the function z = x^2 + y^2
def integrand(y, x):
    return x**2 + y**2

# Limits for x and y: 0 to 1
volume, error = dblquad(integrand, 0, 1, lambda x: 0, lambda x: 1)
print(f"Volume under the surface: {volume:.4f}")
