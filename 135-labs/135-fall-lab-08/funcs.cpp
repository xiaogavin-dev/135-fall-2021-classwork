#include <iostream> 
#include <string> 
#include <cassert>
#include <vector>
#include <fstream>
#include "funcs.h"
#include "imageio.h"

// invert, invert_half, box, frame, scale, pixelate


void invert(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    int out[MAX_H][MAX_W];

    for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
            int temp = image[row][col];
            temp = 255 - temp; 
			out[row][col] = temp; 
		}
	}

    writeImage(out_name, out, height, width);
    return;
}

void invert_half(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    int out[MAX_H][MAX_W];

    for (int row = 0; row < height; row++) {
		for (int col = 0; col < width / 2; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			out[row][col] = image[row][col];
		}

        for (int col = width / 2; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
            int temp = image[row][col];
            temp = 255 - temp; 
			out[row][col] = temp;
		}
	}

    writeImage(out_name, out, height, width);
    return;
}

void box(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    int out[MAX_H][MAX_W];

    for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
            // white box should go from 25% -> 75% all dimensions 
            // bottom: (height / 4) * 3 >= row
            // left: width / 4 <= col
            // top: height / 4 <= row
            // right: (width / 4) * 3 >= col
            if((height / 4) * 3 >= row && width / 4 <= col && height / 4 <= row && (width / 4) * 3 >= col) { 
                out[row][col] = 255;
            } else {
                out[row][col] = image[row][col];
            }
        }
    }

    writeImage(out_name, out, height, width);
    return;
}

void frame(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    int out[MAX_H][MAX_W];

    for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
            // bottom: (height / 4) * 3 >= row : ((height / 4) * 3 >= row && (height / 4) * 3 - 1 < row && width / 4 <= col && (width / 4) * 3 >= col)
			// top: height / 4 <= row          : (height / 4 <= row && height / 4 + 1 > row && width / 4 <= col && (width / 4) * 3 >= col)

            // left: width / 4 <= col : (width / 4 <= col && width / 4 + 1 > col && height / 4 <= row && (height / 4) * 3 >= row)
            // right: (width / 4) * 3 >= col : ((width / 4) * 3 - 1 < col && (width / 4) * 3 >= col && height / 4 <= row && (height / 4) * 3 >= row)
						
			// row : height | col : width 

            if((height / 4 <= row && height / 4 + 1 > row && width / 4 <= col && (width / 4) * 3 >= col) || 
			((height / 4) * 3 >= row && (height / 4) * 3 - 1 < row && width / 4 <= col && (width / 4) * 3 >= col) || 
			(width / 4 <= col && width / 4 + 1 > col && height / 4 <= row && (height / 4) * 3 >= row) || 
			((width / 4) * 3 - 1 < col && (width / 4) * 3 >= col && height / 4 <= row && (height / 4) * 3 >= row)) { 
                out[row][col] = 255; 
            } else { 
                out[row][col] = image[row][col];
            }
		}
	}

    writeImage(out_name, out, height, width);
    return; 
}

void scale(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    std::ofstream ostr;
	ostr.open(out_name);
	if (ostr.fail()) {
		std::cout << "Unable to write file\n";
		exit(1);
	};

    std::vector<int> row_vector; 

    // print the header
	ostr << "P2" << std::endl;
	// width, height
	ostr << width * 2 << ' ';
	ostr << height * 2 << std::endl;
	ostr << 255 << std::endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);

			ostr << image[row][col] << ' ';
            ostr << image[row][col] << ' ';

            row_vector.push_back(image[row][col]);
            row_vector.push_back(image[row][col]);
		}

        for(int i = 0; i < row_vector.size(); i++) {
            ostr << row_vector[i] << " ";
        }

        ostr << std::endl;
        row_vector.clear();
	}

	ostr.close();
}

void pixelate(std::string name, std::string out_name) {
    int height, width; 
    int image[MAX_H][MAX_W];
    readImage(name, image, height, width); 

    std::ofstream ostr;
	ostr.open(out_name);
	if (ostr.fail()) {
		std::cout << "Unable to write file\n";
		exit(1);
	};

    // print the header
	ostr << "P2" << std::endl;
	// width, height
	ostr << width << ' ';
	ostr << height << std::endl;
	ostr << 255 << std::endl;

	std::vector<int> nums; 

	// For simplicity, assume that the width and the height of the image are even numbers 

	for (int row = 0; row < height; row += 2) {
		for (int col = 0; col < width; col += 2) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);

			// pixel is based on 2x2 squares 

			double temp = (image[row][col] + image[row][col + 1] + image[row + 1][col] + image[row + 1][col + 1]) / 4;

			if(temp - (int)temp != 0) { 
				temp = (int)temp + 1; 
			}
			
			nums.push_back((int)temp);
			nums.push_back((int)temp); 

			// ostr << image[row][col] << ' ';
			// ostr << endl;
		}
		
		for(int j = 0; j < 2; j++) { 
			for(int i = 0; i < width; i++) { 
				ostr << nums[i] << ' ';
				ostr << std::endl;
			}
		}

		nums.clear();
	}

	ostr.close();
}