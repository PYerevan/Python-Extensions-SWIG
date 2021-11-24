from Gaussian import Gaussian
import time

# Parameters
mean = 5
sigma = 2
num_events = 1000000

# Calculations
start = time.perf_counter()
g = Gaussian(mean, sigma, num_events)
print(f"Elapsed time {time.perf_counter()-start:.2f} seconds")
nums = g.get_values()
print(f"Generated events: {len(nums)}")

print("Writing data into 'data.txt'")
start = time.perf_counter()
with open("data.txt", "w") as f:
    for num in nums:
        f.write(f"{num}\n")
print(f"Done in {time.perf_counter()-start:.2f} seconds")
