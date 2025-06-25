//Digital_Comp_Project
#include <iostream>
using namespace std;

void personalInfo();
void calculateCarbonFootprint();
void quiz();

int main() {
    char choice;
    
    do {
        // Clear screens
        system("cls");  

        cout << "=====================================================" << endl;
        cout << "||          EcoSmart City: A Greener Future        ||" << endl;
        cout << "=====================================================" << endl;
        cout << "\nChoose an option:\n" << endl;
        cout << "[1] Your Personality Test" << endl;
        cout << "[2] Calculate Your Carbon Footprint" << endl;
        cout << "[3] Eco Knowledge Quiz" << endl;
        cout << "[0] Exit Program\n" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                personalInfo();
                break;
            case '2':
                calculateCarbonFootprint();
                break;
            case '3':
                quiz();
                break;
            case '0':
            	system("cls");
                cout << "Thank you for using EcoSmart City. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n" << endl;
                system("pause"); 
        }

    } while (choice != '0');

    return 0;
}

void personalInfo() {
    system("cls");

    int ecoScore = 0;
    char answer;

    // Question 1
	do {
	    system("cls"); 
	    cout << "\n--- Environmental Personality Test ---" << endl;
	    cout << "\n1. How often do you recycle at home?\n" << endl;
	    cout << "[A] Never\n[B] Sometimes\n[C] Often\n[D] Always\n" << endl;
	    cout << "Your answer (A/B/C/D): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
	        cout << "\nInvalid input! Please enter A, B, C, or D.\n";
	        system("pause");  
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

    if (answer == 'B') ecoScore += 1;
    if (answer == 'C') ecoScore += 2;
    if (answer == 'D') ecoScore += 3;

    // Question 2 -
    do {
    	system("cls");
    	cout << "\n--- Environmental Personality Test ---" << endl;
        cout << "\n2. What kind of transport do you use most?\n" << endl;
        cout << "[A} Private car\n[B] Public transport\n{C} Bicycle\n[D} Walk\n" << endl;
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;
        answer = toupper(answer);
        
        if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
	        cout << "\nInvalid input! Please enter A, B, C, or D.\n";
	        system("pause");  
	    }
	    
    } while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

    if (answer == 'B') ecoScore += 1;
    if (answer == 'C') ecoScore += 2;
    if (answer == 'D') ecoScore += 3;

    // Question 3
    do {
    	system ("cls");
    	cout << "\n--- Environmental Personality Test ---" << endl;
        cout << "\n3. How do you prefer to shop?\n" << endl;
        cout << "[A] Buy lots of new items\n[B] Sometimes buy second-hand\n[C] Mostly buy only what is needed\n[D] Minimalist, avoid consumption\n" << endl;
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;
        answer = toupper(answer);
        
        if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
	        cout << "\nInvalid input! Please enter A, B, C, or D.\n";
	        system("pause");  
	    }
	    
    } while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

    if (answer == 'B') ecoScore += 1;
    if (answer == 'C') ecoScore += 2;
    if (answer == 'D') ecoScore += 3;

    // Question 4
    do {
    	system ("cls");
    	cout << "\n--- Environmental Personality Test ---" << endl;
        cout << "\n4. How do you handle food waste?\n" << endl;
        cout << "[A] Throw it away\n[B] Try to reduce waste\n[C] Compost when possible\n[D] Plan meals carefully to avoid waste\n" << endl;
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;
        answer = toupper(answer);

        if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
	        cout << "\nInvalid input! Please enter A, B, C, or D.\n";
	        system("pause");  
	    }
	    
    } while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

    if (answer == 'B') ecoScore += 1;
    if (answer == 'C') ecoScore += 2;
    if (answer == 'D') ecoScore += 3;

    // Question 5
    do {
    	system ("cls");
    	cout << "\n--- Environmental Personality Test ---" << endl;
        cout << "\n5. What is your attitude toward sustainability?\n" << endl;
        cout << "[A] Not important to me\n[B] I support it when convenient\n[C] I actively try to live sustainably\n[D] It's one of my core values\n" << endl;
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;
        answer = toupper(answer);

        if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
	        cout << "\nInvalid input! Please enter A, B, C, or D.\n";
	        system("pause");  // Wait for user, then loop again
	    }
	    
    } while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

    if (answer == 'B') ecoScore += 1;
    if (answer == 'C') ecoScore += 2;
    if (answer == 'D') ecoScore += 3;

    // Show personality results
    system ("cls");
    cout << "\n======================================" << endl;
    cout << "||  Your Environmental Personality  ||" << endl;
    cout << "======================================\n" << endl;

    if (ecoScore >= 13) {
        cout << "Eco Champion: You lead by example and inspire others!" << endl;
    } else if (ecoScore >= 9) {
        cout << "Eco Aware: You are conscious of your actions and making a positive difference." << endl;
    } else if (ecoScore >= 5) {
        cout << "Eco Beginner: You are starting your eco-journey - keep it up!" << endl;
    } else {
        cout << "Not very eco-minded - it's never too late to start!" << endl;
    }

	cout << "\n--------------------------------------" << endl;
    cout << "Returning to main menu..." << endl;
    system("pause");
}

void calculateCarbonFootprint() {
    system("cls");

    double electricity, carKm, flights, meatMeals, plasticBags;
    double totalFootprint = 0.0;

    // Electricity usage (kWh per month)
    while (true) {
    	system("cls");
    	cout << "\n--- Carbon Footprint Calculator ---\n" << endl;
        cout << "1. Enter your monthly electricity usage (kWh)" << endl;
        cout << ">> ";
        cin >> electricity;

        if (cin.fail() || electricity < 0) {
            cout << "Invalid input! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            system("pause");
        } else {
            break;
        }
    }
    totalFootprint += electricity * 0.5;

    // Car usage (km per week)
    while (true) {
    	system("cls");
    	cout << "\n--- Carbon Footprint Calculator ---\n" << endl;
        cout << "2. How many km do you drive per week? " << endl;
        cout << ">> ";
        cin >> carKm;

        if (cin.fail() || carKm < 0) {
            cout << "Invalid input! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            system("pause");
        } else {
            break;
        }
    }
    totalFootprint += carKm * 0.21 * 4;

    // Flights per year
    while (true) {
    	system("cls");
    	cout << "\n--- Carbon Footprint Calculator ---\n" << endl;
        cout << "3. How many short flights (1-3 hours) do you take per year? " << endl;
        cout << ">> ";
        cin >> flights;

        if (cin.fail() || flights < 0) {
            cout << "Invalid input! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            system("pause");
        } else {
            break;
        }
    }
    totalFootprint += flights * 250;

    // Meat meals per week
    while (true) {
    	system("cls");
    	cout << "\n--- Carbon Footprint Calculator ---\n" << endl;
        cout << "4. How many meals with meat do you eat per week? " << endl;
        cout << ">> ";
        cin >> meatMeals;

        if (cin.fail() || meatMeals < 0) {
            cout << "Invalid input! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            system("pause");
        } else {
            break;
        }
    }
    totalFootprint += meatMeals * 7 * 0.5;

    // Plastic bags per week
    while (true) {
    	system("cls");
    	cout << "\n--- Carbon Footprint Calculator ---\n" << endl;
        cout << "5. How many plastic bags do you use per week? " << endl;
        cout << ">> ";
        cin >> plasticBags;

        if (cin.fail() || plasticBags < 0) {
            cout << "Invalid input! Please enter a positive number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            system("pause");
        } else {
            break;
        }
    }
    totalFootprint += plasticBags * 4 * 0.1;

    // Show total footprint
    system("cls");
    cout << "\n=======================================" << endl;
    cout << "||  Your Estimated Carbon Footprint  ||" << endl;
    cout << "=======================================" << endl;
    cout << "Total CO2 emissions: " << totalFootprint << " kg CO2 per month" << endl;

    // Feedback
    if (totalFootprint < 500) {
        cout << "\nLow Footprint - Great job, keep it up!" << endl;
    } else if (totalFootprint < 1000) {
        cout << "\nMedium Footprint - You are doing well, but there is room to improve." << endl;
    } else {
        cout << "\nHigh Footprint - Consider ways to reduce your carbon footprint!" << endl;
    }

	cout << "----------------------------------------" << endl;
    cout << "\nReturning to main menu..." << endl;
    system("pause");
}

void quiz() {
	system("cls");
    
    int score=0;
    char answer;
	
	// Question 1
	do {
	    system("cls");  // Full clear — or you can skip this if you prefer no full clear
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n1. What is the main goal of a smart city?\n" << endl;
	    cout << "(A) Increase building heights\n(B) Improve quality of life using technology\n(C) Build more shopping malls\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B or C.\n";
	        system("pause");  // Wait for user, then loop again
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');

    if (answer == 'B') {
    	cout << "\nCorrect Answer!\nProceed to next question..." << endl;
    	score += 1;
    	system("pause");
	}
	else {
		cout << "\nWrong answer! The correct answer is B.\nProceed to next question..." << endl;
		system("pause");
	}  

	// Question 2
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n2. Which transport option is most eco-friendly?\n" << endl;
	    cout << "(A) Car\n(B) Electric scooter\n(C) Bicycle\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'C') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is C.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 3
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n3. What does \"IoT\" stand for in smart city development?\n" << endl;
	    cout << "(A) Internet of Things\n(B) Internet of Transport\n(C) Internal Operating Technology\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'A') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is A.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 4
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n4. Which of the following helps reduce urban air pollution?\n" << endl;
	    cout << "(A) Planting more trees\n(B) Building more roads\n(C) Increasing car sales\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'A') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is A.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 5
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n5. Which is an example of renewable energy?\n" << endl;
	    cout << "(A) Coal\n(B) Solar power\n(C) Natural gas\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'B') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is B.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 6
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n6. What is a benefit of smart waste management systems?\n" << endl;
	    cout << "(A) Encourages littering\n(B) Makes trash invisible\n(C) Optimizes garbage collection and reduces overflow\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'C') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is C.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 7
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n7. What type of building is designed to use less energy and water?\n" << endl;
	    cout << "(A) Red building\n(B) Smart building\n(C) Green building\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'C') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is C.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 8
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n8. Which habit saves the most energy at home?\n" << endl;
	    cout << "(A) Using appliances overnight\n(B) Turning off devices when not in use\n(C) Opening the fridge frequently\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'B') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is B.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 9
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n9. What technology can help manage traffic flow in smart cities?\n" << endl;
	    cout << "(A) Solar panels\n(B) Smart traffic lights\n(C) Wind turbines\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'B') {
	    cout << "\nCorrect Answer!\nProceed to next question..." << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is B.\nProceed to next question..." << endl;
	    system("pause");
	}
	
	// Question 10
	do {
	    system("cls");
	    cout << "\n------------- Quiz Test -------------" << endl;
	    cout << "\n10. What is one main goal of sustainable urban planning?\n" << endl;
	    cout << "(A) Urban sprawl\n(B) Environmental protection and efficiency\n(C) Making cities louder\n" << endl;
	    cout << "Your answer (A/B/C): ";
	    cin >> answer;
	    answer = toupper(answer);
	
	    if (answer != 'A' && answer != 'B' && answer != 'C') {
	        cout << "\nInvalid input! Please enter A, B, or C.\n";
	        system("pause");
	    }
	
	} while (answer != 'A' && answer != 'B' && answer != 'C');
	
	if (answer == 'B') {
	    cout << "\nCorrect Answer!\nEnd of quiz!" << endl;
	    score += 1;
	    system("pause");
	} else {
	    cout << "\nWrong answer! The correct answer is B.\nEnd of quiz!" << endl;
	    system("pause");
	}
	
	// Final score
	system("cls");
	cout << "\n=====================================" << endl;
	cout << "||          QUIZ COMPLETE          ||" << endl;
	cout << "=====================================" << endl;
	cout << "Your total score: " << score << " / 10" << endl;
	
	// Show performance message
	if (score >= 9) {
	    cout << "\nExcellent - You really know your eco-smart knowledge!" << endl;
	} else if (score >= 6) {
	    cout << "\nGood - You have a good understanding of the topic!" << endl;
	} else if (score >= 3) {
	    cout << "\nNeeds Improvement - Keep working on your eco-knowledge." << endl;
	} else {
	    cout << "\nKeep Learning! - Don't give up, every step counts!" << endl;
	}
	
	cout << "-------------------------------------" << endl;
	cout << "\nReturning to main menu..." << endl;
	system("pause");
}
