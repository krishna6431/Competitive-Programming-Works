import math


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def fill_grid(n, m):
    grid = [[0] * m for _ in range(n)]
    visited = [[False] * m for _ in range(n)]

    dx = [0, 1, 0, -1]  # Direction vectors for adjacent cells
    dy = [1, 0, -1, 0]

    def dfs(x, y, num):
        grid[x][y] = num
        visited[x][y] = True

        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                diff = abs(grid[x][y] - grid[nx][ny])
                if is_prime(diff):
                    continue
                dfs(nx, ny, num + 1)
                return

    dfs(0, 0, 1)

    return grid


# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read the dimensions of the grid
    n, m = map(int, input().split())

    # Fill the grid
    grid = fill_grid(n, m)

    # Print the grid
    for row in grid:
        print(' '.join(map(str, row)))
    print()
