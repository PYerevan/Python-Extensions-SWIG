import sys
import time


def extract(filename: str):
    patterns = {
        "COMPOUND NUCLEUS ENERGY",
        "isomer state population",
        "ground state population"
    }
    with open(filename) as f:
        for line in f:
            for pattern in patterns:
                if pattern in line:
                    print(line, end="")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("ERROR\nPlease run by the following command.\n")
        print("./executable input.txt\n")
        sys.exit(0)

    f_name = sys.argv[1]
    start = time.perf_counter()
    extract(f_name)
    print(time.perf_counter()-start)
