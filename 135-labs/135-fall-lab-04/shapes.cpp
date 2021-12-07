#include "shapes.h" 
#include <string> 
#include <iostream> 

// Task A
std::string box(int width, int height) { 
    std::string result = ""; 

    for(int i = 0; i < height; i++) { 
        for(int j = 0; j < width; j++) { 
            result += "*";
        }
        result +=  "\n";
    }

    return result; 
}

// Task B
std::string checkerboard(int width, int height) { 
    std::string result = ""; 

    for(int i = 0; i < height; i++) { 
        for(int j = 0; j < width; j++) { 
            if(i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 == 0)  {
                result +=  " ";
            } else { 
                result +=  "*";
            }
        }
        result += "\n";
    }

    return result; 
}

// Task C
std::string cross(int size) { 
    std::string result = ""; 

    for(int i = 0; i < size; i++) { 
        for(int j = 0; j < size; j++) { 
            if(j == i || j == size - 1 - i) { 
                result += "*"; 
            } else { 
                result += " ";
            }
        }

        result += "\n";
    }

    return result; 
}

// Task D
std::string lower(int length) { 
    std::string result = "";
    for(int row = length; row > 0; row--) { 
        for(int col = length; col > 0; col--) { 
            if(row <= col) { 
                result += "*";
            } else { 
                result += " ";
            }
        }

        result += "\n";
    }

    return result; 
}

//Task E
std::string upper(int length) { 
    std::string result = ""; 
    for(int row = 1; row <= length; row++) { 
        for(int col = 1; col <= length; col++) { 
            if(row <= col) { 
                result += "*";
            } else { 
                result += " ";
            }
        }

        result += "\n";
    }

    return result; 
}

// Task F
std::string trapezoid(int width, int height) { 
    std::string result = "";
    int stars = width; 
    int space = 0; 

    if(width / 2 >= height || (width + 1) / 2 >= height) { 
        for(int i = 0; i < height; i++) { 
            for(int k = space; k > 0; k--) { 
                result += " ";
            }

            for(int j = stars; j > 0; j--) { 
                result += "*";
            }
            
            result += "\n";
            stars -= 2;
            space += 1;
        }
    } else { 
        return "Impossible shape!";
    }

    return result;
}

// Task G
std::string checkerboard3x3(int width, int height) { 
    std::string result = ""; 
    // used for a row 
    bool three_star = true, three_space = false;
    int star_count = 0, space_count = 0;

    // used for col
    bool line = true; 
    int line_count = 0; 

    for(int i = 0; i < height; i++)  {
        line_count++;

        for(int j = 0; j < width; j++) { 
            if(star_count == 3) { 
                three_star = !three_star;
                three_space = !three_space; 
                star_count = 0; 
            }

            if(space_count == 3) { 
                three_star = !three_star; 
                three_space = !three_space; 
                space_count = 0; 
            }

            if(three_star) { 
                result += "*";
                star_count++;
            }
            
            if(three_space) { 
                result += " ";
                space_count++;
            }
        }

        if(line_count > 5) { 
            line = true; 
            line_count = 0; 
        }

        if(line_count < 3 && line) { 
            three_star = true;
            three_space = false;
            if(line_count == 3) { 
                line = !line; 
            }
        } else { 
            three_star = false;
            three_space = true;
        }

        result += "\n"; 
        space_count = 0; 
        star_count = 0;               
    }

    return result;
}