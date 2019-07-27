n = input()
cnt = 0
for i in n:
	cnt = cnt + int(i)
temp = ['ling', 'yi', 'er', 'san', 'si', 'wu', 'liu', 'qi', 'ba', 'jiu']
res = str(cnt)
for i in res[:-1]:
	print(temp[int(i)], end = ' ')
print(temp[int(res[-1])])
