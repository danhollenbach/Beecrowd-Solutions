import os

exs = os.listdir("Solutions.c")

result = []
for ex in exs:
    ex, extension = ex.split(".")

    buf = f'- {ex[-4:]} - {ex[0:-7]} &nbsp; -> &ensp; [*.{extension}*](<Solutions.c/{ex}.{extension}>) &ensp; / &ensp; [*.bee*](https://judge.beecrowd.com/pt/problems/view/{ex[-4:]})'
    result.append(buf)

result.sort()

for i in result:
    print(i)