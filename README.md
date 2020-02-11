# GraphSearch: BFS, DFS and DIJKSTRA

Breadth-First, Depth-First and Dijkstra Search algorithms have been implemented in C++ using OOP on the graph 

![Graph](/images/Graph.JPG)

The above presented graph is stored in an 'Adjacency_List'

 ![Adjacency_List](/images/Adjacency_List.JPG)
 
 # Making changes to the file

Represent your graph and list the data of the nodes in the vertices array 

![](/images/Vertices.jpg)

The index number of each vertice is used to refer the node in the algorithm

Create an adjecency list for your application using the index numbers of nodes as per your graph.
In the above example, Node 1 is connected to nodes 2 & 3, so the first row of adjacency list has number 1 (for node 2) and 2 (for node 3).


Adjacency_list = { {1,2},
                   {0,3,4},
                   {0,4},
                   {1,4,5},
                   {1,2,3,5},
                   {3,4} };
                 
Once done, create objects to the class and call the method SearchNode() with the Start node data and End Node Data as arguments

'''

class_name Object1;
Object1.SearchNode(int startnode, int searchnode);

'''
After calling the SearchNode method, you can call the algorithm implementation methods: [either BFS() or DFS()] and run the code.

The output displays the node data in the order it traverses them and if the 'search_node' was found or not.
