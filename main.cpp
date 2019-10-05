#include <iostream>
#include <random>
#include <thread>
#include <chrono>
using std::string;
using namespace std::this_thread;  // sleep_for, sleep_until
using namespace std::chrono_literals;  // ns, us, ms, s, h, etc.

int main()
{
    std::random_device device;  // Using "device" as random generator.
    std::mt19937 generator(device());  // Coupling mt19937 generator with device.
    std::uniform_int_distribution<int> distribution(1,100);  // Generating 100 int variables.
    int guess = distribution(device);  // guess is the randomly generated number.
    int guessed{0};  // Turns guessed.
    int remain{9};  // Guess remaining.


    // Basic  greetings.
	std::cout << "Welcome to \"Guess the Number!\".\n";
	std::cout << "Let's start!\n";

	// Introduction and user input.
	std::cout << "What is your name?: ";
	string name{};
	std::getline(std::cin, name);
	std::cout << "Dear " << name << ", please fire your brain cells.\n";
	std::cout << "Guess a number between 1 and 100. Attention, you will have 9 tries: ";
	int x{};
    std::cin >> x;
    std::cin.ignore(32767, '\n');
    std::cout <<'\n';

    while (true)
    {
        if (((x > 0) && (x < 100)) || (x == 100))
        {
            break;
        }
        else
        {
            std::cout << "Guess a number between 1 and 100. Attention, you will have 9 tries: ";
            int nx{};
            std::cin >> nx;
            x = nx;
            std::cin.ignore(32767, '\n');
            std::cout <<'\n';
        }
     }

     // Function in action.
     while (guessed < 9)
     {
        guessed = guessed + 1;
        remain = remain - 1;

        if (x < guess)
        {
            std::cout << remain << " tries left.\n";
            std::cout << "Enter a higher number: ";
            int nx{};
            std::cin >> nx;
            x = nx;
            std::cin.ignore(32767, '\n');
            std::cout <<'\n';
        }
        else if (x > guess)
        {
            std::cout << remain << " tries left.\n";
            std::cout << "Enter a lower number: ";
            int nx{};
            std::cin >> nx;
            x = nx;
            std::cin.ignore(32767, '\n');
            std::cout <<'\n';
        }
        else if (x == guess)
        {
            break;
        }

    if (x == guess)
        {
         std::cout << "You guessed it! Bravo " << name << "! And you guessed in " << guessed << " turns!\n";
         break;
        }
     }

    std::cout << "Tough luck " << name << ". The answer is " << guess << ". You wasted " << guessed << " turns.\n";
    std::cout << "Thank you for your participation!\n";

}
