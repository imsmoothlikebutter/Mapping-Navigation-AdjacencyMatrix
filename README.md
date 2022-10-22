# ICT2104-B1-MappingAndNavigation

# Basic idea
A graph will be used to represent the map. The vertices/nodes will be represented as grids/elements in a (int)matrix. This matrix will be a local var only to be used for printing the 2D map.<br>
3 (bool*) matrix will be used each for tracking edges, barcodes and humps between vertices.<br>

# Current Capabilities
1) Prints a dot format of the total edges, which then can be converted into a graph with this tool: https://graphs.grevian.org/graph (Just copy and paste)<br>
Example Map:<br>
![IMG_ACCC3CFB1E16-1](https://user-images.githubusercontent.com/93698724/197352395-e59d304e-b46f-4f74-bf84-848a1aad0a2f.jpeg)<br>
Console dot format output:<br>
<img width="123" alt="image" src="https://user-images.githubusercontent.com/93698724/197350751-34018022-9ae7-409d-9663-726affc9624d.png"><br>
Converts to:<br>
![image](https://user-images.githubusercontent.com/93698724/197350318-d0758162-660f-4b9d-8ea0-16ab3db19f8e.png)<br>
2) Produce a 2D Map that shows available routes, walls, barcodes and humps.<br>
Example:<br>
<img width="246" alt="image" src="https://user-images.githubusercontent.com/93698724/197350332-001c16e8-2ee0-4604-ac2d-a1e74d3f4042.png"><br>
# Features yet to be implemented
1) No layer to process and use data from line, ultrasonic sensors and accelerometer.
2) Humps' heights not shown in 2D Map.
3) No layer to send commands to motor module to control movement for mapping/navigation.
4) No algorithms implemented to find shortest path for navigation.


# More info located in the PDF file.
