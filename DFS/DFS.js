const graph = {
  A: ["B", "D"],
  B: ["A", "C", "E"],
  C: ["B"],
  D: ["A", "E"],
  E: ["B", "D", "F"],
  F: ["E"],
};
function dfs(graph, start) {
  const stack = [start];
  const visited = [];
  const result = [];
  while (stack.length) {
    const vertex = stack.pop();
    if (!visited.includes(vertex)) {
      visited.push(vertex);
      result.push(vertex);
      for (const neighbor of graph[vertex]) {
        stack.push(neighbor);
      }
    }
  }
  return result;
}
console.log(dfs(graph, "A")); // Output: [ 'A', 'D', 'E', 'F', 'B', 'C' ]