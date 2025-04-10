from typing import List

def CreateGrid(N: int) -> List[List[int]]:
  grid = []
  for i in range(N):
    grid.append([])
    for _ in range(N):
      grid[i].append(1)
  return grid

def Format(grid):
  return '\n'.join([''.join(map(str, row)) for row in grid])

while True:
  linha = input()

  if linha == '0':
    break
  
  linha = int(linha)
  grid = CreateGrid(linha)
  start = 0

  while linha > 0:
    linha -= 2
    if linha <= 0:
      break
    start += 1
    for i in range(linha):
      for o in range(linha):
        grid[i+start][o+start] += 1

  print(Format(grid))