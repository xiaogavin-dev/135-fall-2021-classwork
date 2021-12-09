/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 10

Image is a checkboard pattern, 
alt between black and white, only has the code for the loop, 
*/

// for(int row = 0; row < h; row++) { 
    // for int col = 0; col < w; col++) { 
        // implementation 
        if(col % 2 == 1 && row % 2 == 0 || col % 2 == 0 && row % 2 == 1) { 
            out[row][col] = img[row][col]; 
        } else { 
            out[row][col] = 0;
        }
    // }
// }