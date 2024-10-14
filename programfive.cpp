#include <iostream>
#include <string>

int main() {
    std::string equation;
    std::string p, q;
    std::string andOr;
    std::string notP;
    std::string notQ;

    std::cout << "Question 1 - Do you want to use And (1) or Or (2): ";
    std::cin >> andOr;

    if (andOr == "1") {
        andOr = "A";
    } else {
        andOr = "V";
    }

    std::cout << "Question 2 - Do you want to NOT p (1 for NO, 2 for YES): ";
    std::cin >> notP;

    if (notP == "1") {
        notP = "p";
    } else {
        notP = "~p";
    }

    std::cout << "Question 3 - Do you want to NOT q (1 for NO, 2 for YES): ";
    std::cin >> notQ;

    if (notQ == "1") {
        notQ = "q";
    } else {
        notQ = "~q";
    }

    equation = notP + " " + andOr + " " + notQ;

    std::cout << "p     q    " << equation << std::endl;

    bool pVals[4] = {false, false, true, true};
    bool qVals[4] = {false, true, false, true};

    for (int i = 0; i < 4; ++i) {
        bool p = pVals[i];
        bool q = qVals[i];

        if (notP == "~p") {
            p = !p;
        }
        if (notQ == "~q") {
            q = !q;
        }

        bool result;
        if (andOr == "A") {
            result = p && q;
        } else {
            result = p || q;
        }

        std::cout << pVals[i] << "     " << qVals[i] << "       " << result << std::endl;
    }

    return 0;
}