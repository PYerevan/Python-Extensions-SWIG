import matplotlib.pyplot as plt


def read_data():
    with open("data.txt") as f:
        for num in f:
            yield float(num.strip())


data = list(read_data())
plt.style.use('ggplot')
plt.title("Gaussian/Normal distribution")
plt.hist(data, bins=200)
plt.show()
