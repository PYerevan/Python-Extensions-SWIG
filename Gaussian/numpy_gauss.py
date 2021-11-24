import time
import numpy as np

mean = 5
sigma = 2
num_events = 1000000

start = time.time()
nums = np.random.normal(mean, sigma, num_events)
print(f"Elapsed time {time.time()-start:.2f} seconds")
print(f"Generated events: {len(nums)}")

print("Writing data into 'data.txt'")
start = time.time()
np.savetxt("data.txt", nums, fmt="%.7f")
print(f"Done in {time.time()-start:.2f} seconds")
