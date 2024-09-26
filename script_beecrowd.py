import glob

exs = glob.glob('*.c')

result = []
for ex in exs:
    buf = f'- {ex[-6:-2]} - {ex[0:-9]} &nbsp; -> &ensp; [.c](<Solutions.c/{ex}>) &ensp; / &ensp; [.bee](https://judge.beecrowd.com/pt/problems/view/{ex[-6:-2]})'
    result.append(buf)

result.sort()

for i in result:
    print(i)

