function makeSet(parent, rank, n) {
  for (let i = 0; i < n; i++) {
    parent[i] = i;
    rank[i] = 0;
  }
}

function findParent(parent, component) {
  if (parent[component] == component) return component;

  return (parent[component] = findParent(parent, parent[component]));
}

function unionSet(u, v, parent, rank, n) {
  u = findParent(parent, u);
  v = findParent(parent, v);

  if (rank[u] < rank[v]) {
    parent[u] = v;
  } else if (rank[u] < rank[v]) {
    parent[v] = u;
  } else {
    parent[v] = u;
    rank[u]++;
  }
}

function kruskalAlgo(n, edge) {
  edge.sort((a, b) => {
    return a[2] - b[2];
  });

  let parent = new Array(n);
  let rank = new Array(n);

  makeSet(parent, rank, n);

  let minCost = 0;

  console.log("Following are the edges in the constructed MST");
  for (let i = 0; i < n; i++) {
    let v1 = findParent(parent, edge[i][0]);
    let v2 = findParent(parent, edge[i][1]);
    let wt = edge[i][2];

    if (v1 != v2) {
      unionSet(v1, v2, parent, rank, n);
      minCost += wt;
      console.log(edge[i][0] + " -- " + edge[i][1] + " == " + wt);
    }
  }

  console.log("Minimum Cost Spanning Tree:", minCost);
}

let edge = [
  [0, 1, 10],
  [0, 2, 6],
  [0, 3, 5],
  [1, 3, 15],
  [2, 3, 4],
];

kruskalAlgo(5, edge);
