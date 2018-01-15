import numpy as np
import matplotlib.pyplot as plt
from scipy import misc

pic = plt.imread('test.png')
print(pic.shape)
print(pic.min())
print(pic.max())

new = np.array(pic)

for i in range(0, new.shape[0]):
	for j in range(0, new.shape[1]):
		for c in range(0, 3):
			if c == 0:
				x = [0, 30, 82, 128, 145, 255]
				y = [19, 62, 148, 88, 200, 150]
				new[i][j][c] = np.interp(new[i][j][c], x, y)
			'''	
				if new[x][y][c] < 50/255:
					new[x][y][c] = (new[x][y][c]*6)/5 + 4/51
				elif new[x][y][c] < 85/255:
					new[x][y][c] = (new[x][y][c]*8)/7 + 32/357
				elif new[x][y][c] < 128/255:
					new[x][y][c] = (new[x][y][c]*42)/43 + 106/731
				elif new[x][y][c] < 228/255:
					new[x][y][c] = (new[x][y][c]*31)/50 + 2066/6375
				else:
					new[x][y][c] = (new[x][y][c]*31)/50 + 160/459
			'''
			if c == 1:
				x = [0, 48, 115, 160, 233, 255]
				y = [0, 72, 188, 120, 245, 255]
				new[i][j][c] = np.interp(new[i][j][c], x, y)
			'''	
				if new[x][y][c] < 18/255:
					new[x][y][c] = (new[x][y][c]*2)/3
				elif new[x][y][c] < 60/255:
					new[x][y][c] = (new[x][y][c]*29)/21 + 6/119
				elif new[x][y][c] < 104/255:
					new[x][y][c] = (new[x][y][c]*29)/22 + 20/561
				elif new[x][y][c] < 148/255:
					new[x][y][c] = (new[x][y][c]*25)/22 + 36/935
				elif new[x][y][c] < 212/255:
					new[x][y][c] = (new[x][y][c]*23)/32 + 191/680
				else:
					new[x][y][c] = (new[x][y][c]*31)/43 + 12/43
			'''
			if c == 2:
				x = [0, 35, 106, 151, 215, 240, 255]
				y = [25, 80, 75, 188, 215, 235, 245]
				new[i][j][c] = np.interp(new[i][j][c], x, y)
			'''
				if new[x][y][c] < 42/255:
					new[x][y][c] = new[x][y][c] + 4/51
				elif new[x][y][c] < 80/255:
					new[x][y][c] = (new[x][y][c]*21)/19 + 296/4845
				elif new[x][y][c] < 124/255:
					new[x][y][c] = (new[x][y][c]*10)/11 + 344/2805
				elif new[x][y][c] < 170/255:
					new[x][y][c] = (new[x][y][c]*19)/23 + 956/5865
				elif new[x][y][c] < 220/255:
					new[x][y][c] = (new[x][y][c]*14)/25 + 434/1275
				else:
					new[x][y][c] = (new[x][y][c]*4)/7 + 118/357
			'''







