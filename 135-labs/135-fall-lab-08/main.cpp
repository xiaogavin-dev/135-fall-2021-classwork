#include <iostream>
#include <array> 
#include <string> 
#include <cassert>
#include "imageio.h"
#include "funcs.h"

const std::array<std::string, 3> names_of_images = {"image1.pgm", "image2.pgm", "image3.pgm"};
const std::array<std::string, 6> task = {"A", "B", "C", "D", "E", "F"}; 

typedef void (*Functions) (std::string name, std::string out_name); 


int main() { 
    std::string input; 
    std::string out_name; 

    Functions funcs[] = {invert, invert_half, box, frame, scale, pixelate}; 

    for(int i = 0; i < task.size(); i++) {
        for(int j = 0; j < names_of_images.size(); j++) {
            std::string out_name = "task" + task[i] + "-" + names_of_images[j];
            funcs[i](names_of_images[j], out_name);
        }
    }

    return 0;
}