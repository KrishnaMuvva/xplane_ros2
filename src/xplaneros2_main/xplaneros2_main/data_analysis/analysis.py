import pandas as pd
import matplotlib.pyplot as plt


data = pd.read_csv("pose.csv")

data_np = data.to_numpy()

print(data_np[0,0], data_np[0,2])

plt.plot(data_np[:,0], data_np[:,2])
plt.scatter(data_np[0,0],data_np[0,2])
plt.xlabel("X")
plt.ylabel("Z")
plt.show()