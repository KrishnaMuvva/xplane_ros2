import numpy as np


class PID:

	def __init__(self):

		self.kpe, self.kpa, self.kpr, self.kpt = 0.05,  0.0,  0.1,   0
		self.kde, self.kda, self.kdr, self.kdt  = 0.00, 0.00,  0.0,  0
		self.kie, self.kia, self.kir, self.kit = 0.000, 0.000, 0.00, 0

		self.kp = [self.kpe, self.kpa, self.kpr, self.kpt]
		self.kd = [self.kde, self.kda, self.kdr, self.kdt]
		self.ki = [self.kie, self.kia, self.kir, self.kit]

		self.kp, self.kd, self.kr = np.array(self.kp), np.array(self.kd), np.array(self.ki)