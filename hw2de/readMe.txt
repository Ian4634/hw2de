<< makefile >>
  According to the requirement, I created a makefile in the outer folder.
  Simply tyle make all, every needed source file will be compiled and linked in
  both D and E. 

  -- bonus --
    I also created makefiles for individual homeworks. 
    type make in the hw2D or hw2E will compile and link all needed source files
    for that folder.
  
<< 2D >>
  The user should write his/her own main function to test and use the tree class. However,
  I've created a simple main.cpp file to demonstrate it to the TAs so it would be easier.
  
  -- How to create a tree --
    format: Node treeNodeName(int id, Node *leftChild, Node *rightChild);
    1. Do remember to set the left and right child to nullptr if there are no children
       during the create time. 
    2. Do NOT assign children that haven't been created to a new node.
    3. You can use set_left(Node *) and set_right(Node *) to set children after a 
       tree is created. 

<< 2E >>
  -- Bonus --
     Instead of a function, I created a class Draw which has the member function
     drawBoxTrio. It also has a member function get_area() to return the largest 
     yellowBox drew by drawBoxTrio.

     Also, I arranged the files so that the class declaration is in Draw.h
     while the implementation is in Draw.cpp.

     One of the advantages is that the user can easily draw multiple graphs by creating
     different instances. Also, the return value(area of largest yello box), will be
     stored in a private data member.

  -- Helps I got --
    1. I discussed with 周造麟 and 吳梓豪 about how the graph should
       be drew. 