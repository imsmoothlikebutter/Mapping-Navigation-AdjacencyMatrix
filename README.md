# ICT2104-B1-MappingAndNavigation

# Basic idea
A graph will be used to represent the map. The vertices/nodes will be represented as grids/elements in a matrix.\n
3 matrix will be used each for tracking edges, barcodes and humps between vertices.\n

# Current Capabilities
'''bash
1) Prints a dot format of the total edges, which then can be converted into a graph with this tool: https://graphs.grevian.org/graph (Just copy and paste)\n
Example:\n
'''c
graph {\n
0 -- 1[label="b"];\n
0 -- 4;\n
1 -- 0[label="b"];\n
1 -- 2;\n
2 -- 1;\n
2 -- 3;\n
3 -- 2;\n
4 -- 0;\n
4 -- 5;\n
4 -- 8;\n
5 -- 4;\n
5 -- 6;\n
5 -- 9;\n
6 -- 5;\n
6 -- 7[label="h"];\n
6 -- 10;\n
7 -- 6[label="h"];\n
8 -- 4;\n
8 -- 12[label="h"];\n
9 -- 5;\n
9 -- 10;\n
10 -- 6;\n
10 -- 9;\n
10 -- 11;\n
10 -- 14;\n
11 -- 10;\n
11 -- 15;\n
12 -- 8[label="h"];\n
12 -- 13;\n
13 -- 12;\n
13 -- 14;\n
14 -- 10;\n
14 -- 13;\n
15 -- 11;\n
}


Converts to:
![image](https://user-images.githubusercontent.com/93698724/197350318-d0758162-660f-4b9d-8ea0-16ab3db19f8e.png)


2) Produce a 2d Map that shows available routes, walls, barcodes and humps.\n
Example:\n
<img width="246" alt="image" src="https://user-images.githubusercontent.com/93698724/197350332-001c16e8-2ee0-4604-ac2d-a1e74d3f4042.png">


# Features yet to be implemented
1) No layer to process and use data from line, ultrasonic sensors and accelerometer.
2) Humps' heights not shown in 2d Map.
3) No layer to send commands to motor module to control movement for mapping/navigation.
4) No algorithms implemented to find shortest path for navigation.


# More info located in the PDF file.
