# ICT2104-B1-MappingAndNavigation

# Basic idea
,,,A graph will be used to represent the map. The vertices/nodes will be represented as grids/elements in a matrix.
3 matrix will be used each for tracking edges, barcodes and humps between vertices.
,,,

# Current Capabilities
'''
1) Prints a dot format of the total edges, which then can be converted into a graph with this tool: https://graphs.grevian.org/graph (Just copy and paste)
   Example:
   '''
   graph {
0 -- 1[label="b"];
0 -- 4;
1 -- 0[label="b"];
1 -- 2;
2 -- 1;
2 -- 3;
3 -- 2;
4 -- 0;
4 -- 5;
4 -- 8;
5 -- 4;
5 -- 6;
5 -- 9;
6 -- 5;
6 -- 7[label="h"];
6 -- 10;
7 -- 6[label="h"];
8 -- 4;
8 -- 12[label="h"];
9 -- 5;
9 -- 10;
10 -- 6;
10 -- 9;
10 -- 11;
10 -- 14;
11 -- 10;
11 -- 15;
12 -- 8[label="h"];
12 -- 13;
13 -- 12;
13 -- 14;
14 -- 10;
14 -- 13;
15 -- 11;
}
,,,

Converts to:
![image](https://user-images.githubusercontent.com/93698724/197350318-d0758162-660f-4b9d-8ea0-16ab3db19f8e.png)


2) Produce a 2d Map that shows available routes, walls, barcodes and humps.
   Example:
   <img width="246" alt="image" src="https://user-images.githubusercontent.com/93698724/197350332-001c16e8-2ee0-4604-ac2d-a1e74d3f4042.png">

'''
# Features yet to be implemented
'''
1) No layer to process and use data from line, ultrasonic sensors and accelerometer.
2) Humps' heights not shown in 2d Map.
3) No layer to send commands to motor module to control movement for mapping/navigation.
4) No algorithms implemented to find shortest path for navigation.
'''

# More info located in the PDF file.
