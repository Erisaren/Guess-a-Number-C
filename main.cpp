#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
using std::string;
using namespace std::this_thread;  // sleep_for, sleep_until
using namespace std::chrono_literals;  // ns, us, ms, s, h, etc.

int main()
{
    std::srand(std::time(NULL));

    // A simple greeting.
    std::cout << "Welcome to the \"Dilemma Calculator\", based on \"Calculated Decisions\" by Woebot.\nHopefully you will like it.\nIt will be fun!(At least for me!).\n\n";
    sleep_for(3s);

    // Starting point. Choices.
    std::cout << "First thing first, you will tell me which choices are making you undecisive.\n";
    sleep_for(1s);

    // Choice A.
    std::cout << "What is the first choice?\nExample, \"Pancakes for breakfast.\": ";
    string A{};
    std::getline(std::cin, A);
    sleep_for(1s);

    // Choice B.
    std::cout << "What is the second choice?\nExample, \"Waffles for breakfast.\": ";
    string B{};
    std::getline(std::cin, B);
    sleep_for(1s);

    std::cout << "Your choices are \"" << A << "\" and \"" << B <<"\".\n\n";
    sleep_for(2s);

    // Second point. Pros and Cons.
    std::cout << "Now we will rate each pro and con for each choice.\n";
    std::cout << "We start with \"" << A << "\" then we continue with \"" << B << "\".\n\n";
    sleep_for(2s);

    //Option A pro and con.
    std::cout << "Tell me a pro for \"" << A << "\".\nExample, \"Less ingredients.\": ";
    string proA{};
    std::getline(std::cin, proA);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
    int i{};
    std::cin >> i;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);

    std::cout << "Tell me a con for \"" << A << "\".\nExample, \"Not crispy\": ";
    string conA{};
    std::getline(std::cin, conA);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
    int ii{};
    std::cin >> ii;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);


    while (true)
    {
        int response = i + ii;
        std::cout << "Processing...\n";
        sleep_for(3s);
        std::cout << "["<< i << "] + [" << ii << "] should be = 100.\n";
        if (response == 100)
        {
            std::cout << "You have typed \"" << proA << "\" and \"" << conA << "\" with values [" << i << "] and [" << ii << "].\n\n";
            break;
        }
        else if (response != 100)
        {
            std::cout << "The values doesn't sum up to 100. Please try again.\n";
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
            int ni{};
            std::cin >> ni;
            sleep_for(1s);
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
            int nii{};
            std::cin >> nii;
            i = ni;
            ii = nii;
            std::cin.ignore(32767, '\n');
            sleep_for(1s);
        }
        else
        {    std::cout << "Your input is wrong. Please try again.\n\n";
        }

    }


    //Option B pro and con.
    std::cout << "Tell me a pro for \"" << B << "\".\nExample, \"Crispy.\": ";
    string proB{};
    std::getline(std::cin, proB);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
    int iii{};
    std::cin >> iii;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);

    std::cout << "Tell me a con for \"" << B << "\".\nExample, \"More ingredients.\": ";
    string conB{};
    std::getline(std::cin, conB);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
    int iv{};
    std::cin >> iv;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);


    while (true)
    {
        int response = iii + iv;
        std::cout << "Processing...\n";
        sleep_for(3s);
        std::cout << "[" << iii << "] + [" << iv << "] should be = 100.\n";
        if (response == 100)
        {
            std::cout << "You have typed \"" << proB << "\" and \"" << conB << "\" with values [" << iii << "] and [" << iv << "].\n\n";
            break;
        }
        else if (response != 100)
        {
            std::cout << "The values doesn't sum up to 100. Please try again.\n";
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
            int niii{};
            std::cin >> niii;
            sleep_for(1s);
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
            int niv{};
            std::cin >> niv;
            iii = niii;
            iv = niv;
            std::cin.ignore(32767, '\n');
            sleep_for(1s);
        }
        else
        {    std::cout << "Your input is wrong. Please try again.\n\n";
        }

    }


    // Option A vs Option B.
    std::cout << "Next step. We focus on the roots, \"" << A << "\" and \"" << B << "\".\n";
    sleep_for(2s);

    // Pro A and B.
    std::cout << "We will confront the pros for \"" << A << "\" and \"" << B << "\".\n";
    std::cout << "NB: Higher value means very good.\n\n";
    sleep_for(2s);

    std::cout << "Tell me the overall pro for \"" << A << "\".\nExample, \"Better nutritional value.\": ";
    string advA{};
    std::getline(std::cin, advA);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
    int a{};
    std::cin >> a;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);

    std::cout << "Tell me the overall pro for \"" << B << "\".\nExample, \"Takes shorter to cook.\": ";
    string advB{};
    std::getline(std::cin, advB);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
    int b{};
    std::cin >> b;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);


    while (true)
    {
        int response = a + b;
        std::cout << "Processing...\n";
        sleep_for(3s);
        std::cout << "[" << a << "] + [" << b << "] should be = 100.\n";
        if (response == 100)
        {
            std::cout << "You have typed \"" << advA << "\" and \"" << advB << "\" with values [" << a << "] and [" << b << "].\n\n";
            break;
        }
        else if (response != 100)
        {
            std::cout << "The values doesn't sum up to 100. Please try again.\n";
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
            int na{};
            std::cin >> na;
            sleep_for(1s);
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
            int nb{};
            std::cin >> nb;
            a = na;
            b = nb;
            std::cin.ignore(32767, '\n');
            sleep_for(1s);
        }
        else
        {    std::cout << "Your input is wrong. Please try again.\n\n";
        }

    }


    // Con A and B.
    std::cout << "We will confront the cons for \"" << A << "\" and \"" << B << "\".\n";
    std::cout << "NB: Higher value means very bad.\n\n";
    sleep_for(2s);

    std::cout << "Tell me the overall con for \"" << A << "\".\nExample, \"Takes longer to cook\": ";
    string disA{};
    std::getline(std::cin, disA);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
    int c;
    std::cin >> c;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);

    std::cout << "Tell me the overall con for \"" << B << "\".\nExample, \"Worse nutritional value\": ";
    string disB{};
    std::getline(std::cin, disB);
    sleep_for(1s);

    std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
    int d;
    std::cin >> d;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';
    sleep_for(1s);


    while (true)
    {
        int response = c + d;
        std::cout << "Processing...\n";
        sleep_for(3s);
        std::cout << "[" << c << "] + [" << d << "] should be = 100.\n";
        if (response == 100)
        {
            std::cout << "You have typed \"" << disA << "\" and \"" << disB << "\" with values [" << c << "] and [" << d << "].\n\n";
            break;
        }
        else if (response != 100)
        {
            std::cout << "The values doesn't sum up to 100. Please try again.\n";
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"45\": ";
            int nc{};
            std::cin >> nc;
            sleep_for(1s);
            std::cout << "Rate on a scale of 0 to 100.\nExample, \"55\": ";
            int nd{};
            std::cin >> nd;
            c = nc;
            d = nd;
            std::cin.ignore(32767, '\n');
            sleep_for(1s);
        }
        else
        {    std::cout << "Your input is wrong. Please try again.\n\n";
        }

    }


    // Calculations.
    std::cout << "The best part!\n\n";
    sleep_for(1s);

    // w is advantage for A.
    std::cout << "Let's calculate the advantage for \"" << A << "\".\n";
    sleep_for(3s);

    int w {};
    w = i + a;

    std::cout << "Overall advantage for \"" << A << "\" is [" << w << "].\n\n";
    sleep_for(2s);

    // x is disadvantage for A.
    std::cout << "Let's calculate the disadvantage for \"" << A << "\".\n";
    sleep_for(3s);

    int x{};
    x = ii + c;

    std::cout << "Overall disadvantage for \"" << A << "\" is [" << x << "].\n\n";
    sleep_for(2s);

    // tA is the total for option A.
    std::cout << "Let's calculate the average for \"" << A << "\".\n";
    sleep_for(3s);

    int tA{};
    tA = w - x;

    std::cout << "Average for \"" << A << "\" is [" << tA << "].\n\n";
    sleep_for(2s);

    // y is advantage for B.
    std::cout << "Let's calculate the advantage for \"" << B << "\".\n";
    sleep_for(3s);

    int y{};
    y = iii + b;

    std::cout << "Overall advantage for \"" << B << "\" is [" << y << "].\n\n";
    sleep_for(2s);

    // z is disadvantage for B.
    std::cout << "Let's calculate the disadvantage for \"" << B << "\".\n";
    sleep_for(3s);

    int z{};
    z = iv + d;

    std::cout << "Overall disadvantage for \"" << B << "\" is [" << z << "].\n\n";
    sleep_for(2s);

    // tB is the total for option B.
    std::cout << "Let's calculate the average for \"" << B << "\".\n";
    sleep_for(3s);

    int tB{};
    tB = y - z;

    std::cout << "Average for \"" << B << "\" is [" << tB << "].\n\n";
    sleep_for(2s);

    // Drums roll.
    std::cout << "Results are out! Drums roll, please...\n\n";
    sleep_for(3s);


    if ((tA > tB) && (tA >= 0) && (tA != tB)) // If tA > tB, tA should be higher or equal to 0, tA is different of tB.
    {
        std::cout << "Clear decision! \"" << A << "\" is the best choice.\n\n";
    }
    else if ((tB > tA) && (tB >= 0) && (tB != tA)) // If tB > tA, tB should be higher or equal to 0, and tA >0.
    {
        std::cout << "Clear decision! \"" << B << "\" is the best choice.\n\n";
    }
    else if ((tA == tB) && ((tA >= 0) || (tB >= 0))) // If tA == tB, tA and tB should be higher or equal to 0.
    {
        std::cout << "You can choose either one. I will choose one for you.\n\n";
        const string choice[2] = {A, B};
        string k = choice[std::rand()%2];
        sleep_for(1s);
        std::cout << "This is your auto-generated choice: \"" << k << "\".\n\n";
    }
    else if ((tA < 0) && (tB < 0)) // If tA < 0 and tB < 0, game over.
    {
        std::cout << "Please rethink again and start over. You have negative inputs.\n\n";
        sleep_for(1s);
    }


    std::cout << "That is it! I hope you could make a decision and forget not that you can redo this technique over again!\n\n";

    return 0;

}
