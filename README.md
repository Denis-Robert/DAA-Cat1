# DAA-Cat1

1. Prims - The algorithm doesn't work for directed graphs but for the given case, since the 1st iteration is the optimal solution, we are able to obtain a solution. It does not check the -ve edge as the solution is found before checking for that edge.

2. Kruskal's - The algorithm doesn't work for directed graphs but since there are no cycles and omitting the -ve edge, we can get a solution.

3. Djikstra's - It does not work for graphs with -ve edges but by penalising the -ve edge by making it a large +ve cost, we can obtain a solution.

I've chosen C for programming because I feel comfortable working with it over any other language.
