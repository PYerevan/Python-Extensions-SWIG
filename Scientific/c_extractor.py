import sys
import time

import extractor


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("ERROR\nPlease run by the following command.\n")
        print("./executable input.txt\n")
        sys.exit(0)

    filename = sys.argv[1]
    start = time.perf_counter()
    extractor.extract(filename)
    print(time.perf_counter()-start)
