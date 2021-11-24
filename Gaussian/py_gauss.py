import random
import time

# Parameters
mu = 5
sigma = 2
num_events = 1000000


def generate(mean, sigma, N):
    for i in range(N):
        yield random.gauss(mean, sigma)


# Calculations
start = time.perf_counter()
nums = list(generate(mu, sigma, num_events))
print(f"Elapsed time {time.perf_counter()-start:.2f} seconds")
print(f"Generated events: {len(nums)}")

print("Writing data into 'data.txt'")
start = time.perf_counter()
with open("data.txt", "w") as f:
    for num in nums:
        f.write(f"{num}\n")
print(f"Done in {time.perf_counter()-start:.2f} seconds")
