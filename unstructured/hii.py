import heapq
def minimum_intensity(A, B, C, D, E): # Initialize distances and intensities distances = [float('inf)] *A
distances[D-1] = 0
intensities = [float('inf')] * A
intensities[D-1] = 0
# Create an adjacency list 
adj_list = [] for _ in range(A)] for u, v in B:
adj_list[u-1].append((v-1, 1)) # Assuming all roads have equal distance of 1 
adj_list[v-1].append((u-1, 1))
# Create a priority queue for Dijkstra's algorithm 
pq = [(0, D-1)]
while pq:
dist, node = heapq.heappop(pq)
if dist> distances[node]: continue
for neighbor, in adj_list[node]: new_dist = dist + 1
if new_dist< distances[neighbor]: distances[neighbor] = new_dist
# Update intensity for this neighbor 
intensities[neighbor] = max(intensities[node], C[neighbor]) 
heapq.heappush(pq, (new_dist, neighbor))
if distances [E-1] == float('inf):
return -1
else: return intensities[E-1]
# Example usage
A 4
B = [(1, 2), (2, 3), (3, 4)]
C = [3, 2, 1, 4]
D=1
E=4
result = minimum_intensity(A, B, C, D, E) print(result) # Output: 3