 #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here

// https://cryptii.com/pipes/caesar-cipher
TEST_CASE("Task B: Implementing Caesar cipher encryption:") { 
    SUBCASE("Base cases:") { 
        CHECK(encrypt_caesar("Way to Go!", 5) == "Bfd yt Lt!");
        CHECK(encrypt_caesar("Hello, World!" , 10) == "Rovvy, Gybvn!");
    }

    SUBCASE("Special cases:") { 
        CHECK(encrypt_caesar("!@#$%^&*()!(&)!<>?><???", 26) == "!@#$%^&*()!(&)!<>?><???");
        CHECK(encrypt_caesar("117482889421", 500) == "117482889421"); 
    }

    SUBCASE("Extreme cases: ") { 
        CHECK(encrypt_caesar("This works!", 400) == "Drsc gybuc!");
        CHECK(encrypt_caesar("To be or not to be, That is the question", 1555) == "Oj wz jm ijo oj wz, Ocvo dn ocz lpznodji");
    }

    SUBCASE("Negative rshift values:") { 
        CHECK(encrypt_caesar("If he had anything confidential to say", -10) == "Yv xu xqt qdojxydw sedvytudjyqb je iqo");
        CHECK(encrypt_caesar("Caesar cipher: Encode and decode online", -300) == "Omqemd oubtqd: Qzoapq mzp pqoapq azxuzq");
        CHECK(encrypt_caesar("Cryptii Happy Pride", -5) == "Xmtkodd Cvkkt Kmdyz");
    }
}

// https://cryptii.com/pipes/vigenere-cipher
TEST_CASE("Task C: Implementing Vigenere cipher encryption:") { 
    SUBCASE("Base cases:") { 
        CHECK(encrypt_vigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
        CHECK(encrypt_vigenere("\\`F~-z_+=\"[]{}';:!@#v$%^&T*()<a>?,./", "test") == "\\`Y~-d_+=\"\x5b\x5d\x7b\x7d';:!@#n$%^&M*()<t>?,./");
        CHECK(encrypt_vigenere("This, works!", "yes") == "Rlaq, agpok!");
    }

    SUBCASE("Special cases") { 
        CHECK(encrypt_vigenere("Hello, World!", "@#!@@*!@$UGIF*Y@") == "Impossible keyword");
        CHECK(encrypt_vigenere("Hello, World!", "1234567890") == "Impossible keyword");
        CHECK(encrypt_vigenere("Hello, World!", "EGG") == "Lkrpu, Csxrh!");
    }
}

TEST_CASE("Task D: Decryption:") { 
    SUBCASE("Caesar Decryption using Caesar Encryption:") { 
        CHECK(decrypt_caesar(encrypt_caesar("Hello, World!", 10), 10) == "Hello, World!");
        CHECK(decrypt_caesar(encrypt_caesar("To be or not to be, That is the question", 1555), 1555) == "To be or not to be, That is the question");
        CHECK(decrypt_caesar(encrypt_caesar("There's a saying that goes, 'grief is a most peculiar thing; we're so helpless in the face of it. It's like a window that will simply open of its own accord. The room grows cold, and we can do nothing but shiver. But it opens a little less each time, and a little less; and one day we wonder what has become of it.'", 5), 5) == "There's a saying that goes, 'grief is a most peculiar thing; we're so helpless in the face of it. It's like a window that will simply open of its own accord. The room grows cold, and we can do nothing but shiver. But it opens a little less each time, and a little less; and one day we wonder what has become of it.'");
    }

    SUBCASE("Caesar Decryption Special Cases:") { 
        CHECK(decrypt_caesar(encrypt_caesar("!@#$%^&*()!(&)!<>?><???", 26), 26) == "!@#$%^&*()!(&)!<>?><???");
        CHECK(decrypt_caesar(encrypt_caesar("Cryptii Happy Pride", -32), -32) == "Cryptii Happy Pride"); 
    }

    SUBCASE("Vigenere Decrpytion using Vigenere Encryption: ") { 
        CHECK(decrypt_vigenere(encrypt_vigenere("Hello, World!", "cake"), "cake") == "Hello, World!");
        CHECK(decrypt_vigenere(encrypt_vigenere("\\`F~-z_+=\"[]{}';:!@#v$%^&T*()<a>?,./", "test"), "test") == "\\`F~-z_+=\"\x5b\x5d\x7b\x7d';:!@#v$%^&T*()<a>?,./");
        CHECK(decrypt_vigenere(encrypt_vigenere("Lab 06 Is Complete", "Hello!"), "Hello!") == "Impossible keyword");
    }

    SUBCASE("Vigenere Decryption Special Cases:") { 
        CHECK(decrypt_vigenere(encrypt_vigenere("Hello, World!", "1234567890"), "1234567890") == "Impossible keyword");
        CHECK(decrypt_vigenere(encrypt_vigenere("Vigenere", "EGG"), "EGG") == "Vigenere");
    }
}