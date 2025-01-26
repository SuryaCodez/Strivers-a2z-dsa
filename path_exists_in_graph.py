class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        if source == destination:
            return True
        graph = defaultdict(list)
        for u,v in edges:
            graph[u].append(v)
            graph[v].append(u)
        seen = set()
        seen.add(source)
        stack=[source]
        while stack:
            node=stack.pop()
            if node==destination:
                return True
            for neighbour_node in graph[node]:
                if neighbour_node not in seen:
                    seen.add(neighbour_node)
                    stack.append(neighbour_node)
        return False


