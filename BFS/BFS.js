const graph = {
  A: ["B", "D"],
  B: ["A", "C", "E"],
  C: ["B"],
  D: ["A", "E"],
  E: ["B", "D", "F"],
  F: ["E"],
};
function bfs(graph, start) {
  const queue = [start];
  const visited = [];
  const result = [];
  while (queue.length) {
    const vertex = queue.shift();
    if (!visited.includes(vertex)) {
      visited.push(vertex);
      result.push(vertex);
      for (const neighbor of graph[vertex]) {
        queue.push(neighbor);
      }
    }
  }
  return result;
}
console.log(bfs(graph, "A")); // Output: [ 'A', 'B', 'D', 'C', 'E', 'F' ]