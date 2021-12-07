#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Checking if Caesar Cipher works:" ) { 
    CHECK(encrypt_caesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encrypt_caesar("Hello, World!" , 10) == "Rovvy, Gybvn!");
    CHECK(encrypt_caesar("This works!", 400) == "Drsc gybuc!");
    CHECK(encrypt_caesar("To be or not to be, That is the question", 1555) == "Oj wz jm ijo oj wz, Ocvo dn ocz lpznodji");
}

TEST_CASE("Checking for solve solution: ") { 
    CHECK(solve(encrypt_caesar("For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English.", 5)) == "For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English.");
    CHECK(solve(encrypt_caesar("There's a saying that goes, 'grief is a most peculiar thing; we're so helpless in the face of it. It's like a window that will simply open of its own accord. The room grows cold, and we can do nothing but shiver. But it opens a little less each time, and a little less; and one day we wonder what has become of it.'", 255)) == "There's a saying that goes, \'grief is a most peculiar thing; we're so helpless in the face of it. It's like a window that will simply open of its own accord. The room grows cold, and we can do nothing but shiver. But it opens a little less each time, and a little less; and one day we wonder what has become of it.\'");
    CHECK(solve("Testing if a regular string works") == "Testing if a regular string works");
}

