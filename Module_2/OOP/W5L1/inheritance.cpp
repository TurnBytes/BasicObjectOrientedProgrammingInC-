#include <iostream>
#include <string>

using namespace std;

// ===== BASE CLASS (General Vehicle) =====
class Vehicle {
    
    // General member variables for all vehicles
    private:
        string color;
        string model;
        int productionYear;
        string fuelType;
        string brand;
        bool isHybrid;
        int horsepower;
    
    public:
        // Constructor
        Vehicle(string b, string m, int year, string fuel, int hp, bool hybrid, string col){
            brand = b;
            model = m;
            productionYear = year;
            fuelType = fuel;
            horsepower = hp;
            isHybrid = hybrid;
            color = col;
        }
        
        // ===== GENERAL METHODS (For all vehicles) =====
        
        // Color getters and setters
        void setColor(string col){
            this->color = col;
        }
        string getColor(){
            return this->color;
        }
        
        // Model getter
        string getModel(){
            return this->model;
        }
        
        // Brand getter
        string getBrand(){
            return this->brand;
        }
        
        // Year getter
        int getYear(){
            return this->productionYear;
        }
        
        // Fuel type getter
        string getFuelType(){
            return this->fuelType;
        }
        
        // Horsepower getter
        int getHorsepower(){
            return this->horsepower;
        }
        
        // General method to display vehicle info
        void displayInfo(){
            cout << "\n--- Vehicle Information ---" << endl;
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << productionYear << endl;
            cout << "Color: " << color << endl;
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Horsepower: " << horsepower << " HP" << endl;
            cout << "Is Hybrid: " << (isHybrid ? "Yes" : "No") << endl;
        }
        
        // General method to start vehicle
        void startEngine(){
            cout << "Engine started!" << endl;
        }
};


// ===== DERIVED CLASS 1: BMW (Specific car brand) =====
class BMW : public Vehicle {
    
    // BMW-specific member variables
    private:
        bool hasSportMode;
        string bmwAssistancePackage;
        bool hasLaserHeadlights;
    
    public:
        // Constructor
        BMW(string model, int year, string fuel, int hp, string color, 
            bool sportMode, string assistance, bool laser)
            : Vehicle("BMW", model, year, fuel, hp, false, color) {
            hasSportMode = sportMode;
            bmwAssistancePackage = assistance;
            hasLaserHeadlights = laser;
        }
        
        // ===== BMW-SPECIFIC METHODS =====
        
        // Activate sport mode
        void activateSportMode(){
            if(hasSportMode){
                cout << "BMW Sport Mode ACTIVATED! Performance increased!" << endl;
            } else {
                cout << "This BMW doesn't have Sport Mode." << endl;
            }
        }
        
        // Display BMW features
        void displayBMWFeatures(){
            cout << "\n--- BMW Special Features ---" << endl;
            cout << "Sport Mode: " << (hasSportMode ? "Yes" : "No") << endl;
            cout << "Assistance Package: " << bmwAssistancePackage << endl;
            cout << "Laser Headlights: " << (hasLaserHeadlights ? "Yes" : "No") << endl;
        }
        
        // BMW-specific drive method
        void drive(){
            cout << "BMW is driving smoothly on the Autobahn!" << endl;
        }
};


// ===== DERIVED CLASS 2: Mercedes (Another specific car brand) =====
class Mercedes : public Vehicle {
    
    // Mercedes-specific member variables
    private:
        bool hasAirSuspension;
        string luxuryInterior;
        int premiumSpeakers;
    
    public:
        // Constructor
        Mercedes(string model, int year, string fuel, int hp, string color,
                bool airSuspension, string interior, int speakers)
            : Vehicle("Mercedes", model, year, fuel, hp, false, color) {
            hasAirSuspension = airSuspension;
            luxuryInterior = interior;
            premiumSpeakers = speakers;
        }
        
        // ===== MERCEDES-SPECIFIC METHODS =====
        
        // Activate air suspension
        void activateAirSuspension(){
            if(hasAirSuspension){
                cout << "Air Suspension activated! Ride is now silky smooth." << endl;
            } else {
                cout << "This Mercedes doesn't have Air Suspension." << endl;
            }
        }
        
        // Play premium audio
        void playPremiumAudio(){
            cout << "Playing audio through " << premiumSpeakers << " premium speakers!" << endl;
        }
        
        // Display Mercedes luxury features
        void displayMercedesFeatures(){
            cout << "\n--- Mercedes Luxury Features ---" << endl;
            cout << "Air Suspension: " << (hasAirSuspension ? "Yes" : "No") << endl;
            cout << "Luxury Interior: " << luxuryInterior << endl;
            cout << "Premium Speakers: " << premiumSpeakers << endl;
        }
        
        // Mercedes-specific drive method
        void drive(){
            cout << "Mercedes is driving with elegance and comfort!" << endl;
        }
};


// ===== MAIN FUNCTION (Demo) =====
int main(){
    
    cout << "========== INHERITANCE DEMONSTRATION ==========" << endl;
    
    // ===== Create BMW object =====
    BMW myBMW("M5", 2024, "Petrol", 625, "Black", true, "Professional Plus", true);
    
    cout << "\n[BMW OBJECT - General & Specific Features]" << endl;
    myBMW.displayInfo();      // Inherited method from Vehicle
    myBMW.displayBMWFeatures(); // BMW-specific method
    myBMW.startEngine();      // Inherited method
    myBMW.activateSportMode(); // BMW-specific method
    myBMW.drive();            // BMW-specific method
    
    // ===== Create Mercedes object =====
    Mercedes myMercedes("S-Class", 2024, "Petrol", 503, "Silver", true, "Nappa Leather", 13);
    
    cout << "\n[MERCEDES OBJECT - General & Specific Features]" << endl;
    myMercedes.displayInfo();       // Inherited method from Vehicle
    myMercedes.displayMercedesFeatures(); // Mercedes-specific method
    myMercedes.startEngine();       // Inherited method
    myMercedes.activateAirSuspension(); // Mercedes-specific method
    myMercedes.playPremiumAudio();  // Mercedes-specific method
    myMercedes.drive();             // Mercedes-specific method
    
    cout << "\n========== END OF DEMONSTRATION ==========" << endl;
    
    return 0;
}