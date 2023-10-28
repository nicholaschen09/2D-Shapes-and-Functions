/* ------------------------
 Nicholas Chen       
 ICS4U1-2      
 Assignment #1: 2D shapes   
--------------------------- */
#include <iostream>
using namespace std;

void drawHorizontalLine (int line);

void drawVerticalLine (int line);

void drawRectangle (int width, int height);

void drawLeftSlantTriangle (int height);

void drawRightSlantTriangle (int height);

void drawIsoscelesTriangle (int height);

void drawBox (int height);

void drawGlass (int height);

// QUESTIONS //

int question1 ();

int question2 ();

int question3 ();
      
int question4 ();

int question5 ();

int question6 ();

int question7 ();

int question8 ();

int main() {

  //counters for the summary of shapes 
int horizontal = 0;
int vertical = 0;
int rectangle = 0;
int leftSlantTriangle = 0;
int rightSlantTriangle = 0;
int isoscelesTriangle = 0;
int box = 0;
int glass = 0;

 int choice;
   
  string answer;
  
//prints out welcome messages
  cout << "Welcome to the shape generator: " << endl;
  cout << "This program draws the following shapes: " << endl;
  
  do {
    
   //questions for user to choose from
    cout << "1) Horizontal line" << endl;
    cout << "2) Vertical Line" << endl;
    cout << "3) Rectange" << endl;
    cout << "4) Left-Slanted Triangle"<< endl;
    cout << "5) Right-Slanted Triangle"<< endl;
    cout << "6) Isosceles Triangle" << endl;
    cout << "7) Box" << endl;
    cout << "8) Glass: " << endl;
  
    cin >> choice;
    cin.ignore();
    
    //condition for choices
       while(choice < 1 || choice > 8) {
         cout << "Invalid choice! Your choice must be between 1 and 8." << endl;
         break;
       }
    
    switch(choice) {
        
        case 1:horizontal += question1();break;
        case 2:vertical += question2();break;
        case 3:rectangle += question3();break;
        case 4:leftSlantTriangle += question4();break;
        case 5:rightSlantTriangle += question5();break;
        case 6:isoscelesTriangle += question6();break;
        case 7:box += question7();break;
        case 8:glass += question8();break;
  
    }
    cout << "Would you like to draw another one (y/n)?" << endl;
    cin >> answer;
    while (answer == "n" || answer == "N" ) { 

      //summary
      cout << " Here is a summary of the shapes that were drawn. " << endl;
      cout << " Horizontal Lines: " << horizontal << endl;
      cout << " Vertical Lines: " << vertical << endl;
      cout << " Rectangles: " << rectangle << endl;
      cout << " Left slant right angle triangle: " << leftSlantTriangle << endl;
      cout << " Right slant right angle triangle: " << rightSlantTriangle << endl;
      cout << " Isosceles triangles: " << isoscelesTriangle << endl;
      cout << " Boxes: " << box << endl;
      cout << " Glasses: " << glass << endl;
      cout << " Thank you for using Shape Generator. Goodbye!!" << endl;
      
      //ends program after user enters n or N
      exit(0);
    
    }
      
  }

      while (choice != 9);
}
    
 void drawHorizontalLine (int line) {
  
  //prints asterisks for horizontal line 
  for (int i = 0; i < line; i++) {
    cout << "*";
  } 
  cout << endl;
  cout << endl;
}

void drawVerticalLine (int line) {
  
  //prints asterisks for vertical line 
  for (int i = 0; i < line; i++) {
    cout << "*" << endl;
  }
   cout << endl;
}

void drawRectangle (int width, int height) {
  
  //print asterisks for the rows (height)
  for (int i = 0; i < height; i++) {
    cout << "*";
    
    //prints the columns for the rectangle's width
    for (int j = 0; j < width; j++) {
    cout << "*";

    }
    
    //ends the line once the width is printed
    cout << endl;
  }
   cout << endl;
}

void drawLeftSlantTriangle (int height) {
   for (int i = 0; i < height; i++) {
     
        // Print spaces for indentation (before asterisks)
        for (int j = height; j < height - i; j++) {
            cout << " ";
        }

        // Print asterisks for the current row
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
  }
  cout << endl;
}

void drawRightSlantTriangle (int height) {
 for (int i = 1; i <= height; i++) {
   
        // Print spaces for indentation 
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        
        // Print asterisks for the current row
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        
        // Move to next row
        cout << endl;
 } 
}

void drawIsoscelesTriangle (int height) {
     for (int i = 1; i <= height; i++) {
       
        // Prints leading spaces
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        // Print asterisks for the isosceles triangle
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }
   cout << endl;
}

void drawBox (int height) {
  
  //prints the top line of the box
  for (int i = 0; i < height*2; i++) {
    cout << "*";
  }
  cout << endl;
  
  //prints the heights of the box
  for (int i = 0; i < height - 2; i++) {
    cout << "*";
    for (int j = 0; j < (height*2) - 2; j++) {
     cout << " ";
    }
    cout << "*";
    cout << endl;
  }
  
  //prints the bottom line of the box
  for (int i = 0; i < height*2; i++) {
    cout << "*";
  }
  cout << endl;
}

void drawGlass (int height) {
  
  //prints the left triangle
    for (int i = 0; i <= height; i++) {
      for (int k = 0; k < i; k++) 
        cout << "*";
      
      //prints the gap between the two slanted triangles
      for (int j = 0; j < 2*(height - i); j++) 
      cout << " ";
      
      //prints the right triangle
        for (int j = 0; j < i; j++) 
        cout << "*";
        cout << endl;
    }
}

// QUESTIONS //

int question1 () {
  int length;
  while (true) {
  cout << "enter the horizontal line length: (1-20) ";
  cin >> length;
    
    //condition for dimension of shape
  if (length > 0 && length < 21) {
      break;
  }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawHorizontalLine(length);
  return 1;

}

int question2 () {
  int length2;
  while (true) {
  cout << "enter the vertical line length: (1-20) ";
  cin >> length2;
    
    //condition for dimension of shape
 if (length2 > 0 && length2 < 21) {
      break;
  }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawVerticalLine(length2);
  return 1;
}

int question3 () {
  int width;
  int length3;
  while (true) {
  cout << "enter the width of the rectangle (1-20): ";
  cin >> width;
    
    //condition for dimension of shape
     if (width > 0 && width < 21) {
      break;
     }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  while (true) {
  cout << "enter the length of the rectangle (1-20): ";
  cin >> length3;
    
    //condition for dimension of shape
    if (length3 > 0 && length3 < 21) {
    break;
    }
  else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
  }
    
  }
drawRectangle(width, length3);
  return 1;
  }
      
int question4 () {
  int height;
  while (true)  {
  cout << "enter the height of the left-slanted triangle (1-20): ";
  cin >> height;
    
    //condition for dimension of shape
  if (height > 0 && height < 21) {
      break;
      }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawLeftSlantTriangle(height);
  return 1;
}

int question5 () {
  int height;
  while (true) {
  cout << "enter  the height of the right-slanted triangle (1-20): ";
  cin >> height;
    
    //condition for dimension of shape
  if (height > 0 && height < 21) {
      break;
  }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawRightSlantTriangle(height);
  return 1;
}

int question6 () {
  int height;
  while (true) {
  cout << "enter the height of the isosceles triangle (1-20): ";
  cin >> height;
    
    //condition for dimension of shape
   if (height > 0 && height < 21) {
      break;
    }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawIsoscelesTriangle(height);
  return 1;
}

int question7 () {
  int height;
  while (true) {
  cout << "enter the dimension of the box (1-20): ";
  cin >> height;
    
    //condition for dimension of shape
   if (height > 0 && height < 21) {
      break;
      }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
  }
  drawBox(height);
  return 1;
}

int question8 () {
  int height;
  while (true) {
  cout << "enter the dimension of the glass (1-20): ";
  cin >> height;
    
    //condition for dimension of shape
   if (height > 0 && height < 21) {
      break;
      }
    else {
       cout << "Invalid dimension! The dimension must be between 1 and 20." << endl;
    }
    }
  drawGlass(height);
  return 1;
}

