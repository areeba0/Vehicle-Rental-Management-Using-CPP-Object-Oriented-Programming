#include <iostream> // include the iostream library
#include <string> // include the string library
using namespace std; // use the standard namespace
// QUESTIOM 6
class Rental_reservation { 
    // define the RentalReservation class
public: 
// public member functions
    Rental_reservation(string res_ID, string name, string car, string pick, string retur)
    { 
        // constructor with parameters
        reservation_ID = res_ID; 
        // initialize reservation ID
        customer_name = name; 
        // initialize customer name
        car_MakeAndModel = car;
        // initialize car make and model
        pickup_date = pick; 
        // initialize pickup date
        return_date = retur; 
        // initialize return date
        // default to zero
        rental_duration = 0; 
        // initialize rental duration to 0 
        rental_rate = 0; 
        // initialize rental rate to 0
        rental_total = 0; 
        // initialize rental total to 0
        set_rental_duration(); 
        // set rental duration
        set_rental_rate(); 
        // set rental rate
        rental_total = calculateRentalTotal(); 
        // calculate rental total
    }

    ~Rental_reservation() 
    { 
        // destructor
        cout << "Rental reservation has been deleted." << endl; // print message 
    }

    // getter and setter methods
    
    string get_reservation_ID() const 
    { // getter method to get reservation ID
        return reservation_ID;
    }

    void set_reservation_ID(string res_ID)
    { // setter method to set reservation ID
        reservation_ID = res_ID;
    }

    string get_customer_name() const
    { // getter method to get customer name
        return customer_name;
    }

    void set_customer_name(string name)
    { // setter method to set customer name
        customer_name = name;
    }

    string get_car_MakeAndModel() const 
    { // getter method to get car make and model
        return car_MakeAndModel;
    }

    void set_car_MakeAndModel(string car)
    { // setter method to set car make and model
        car_MakeAndModel = car;
    }

    string get_pickup_date() const
    { // getter method to get pickup date
        return pickup_date;
    }

    void set_pickup_date(string pick) 
    { // setter method to set pickup date
        pickup_date = pick;
        set_rental_duration(); // set rental duration
        rental_total = calculateRentalTotal(); // calculate rental total
    }

    string get_return_date() const
    { // getter method to get return date
        return return_date;
    }

    void set_return_date(string retur)
    { // setter method to set return date
        return_date = retur;
        set_rental_duration(); // set rental duration
        rental_total = calculateRentalTotal(); // calculate rental total
    }

    int get_rental_duration() const 
    { // getter method to get rental duration
        return rental_duration;
    }

    void set_rental_duration() 
    { // set rental duration
        //calculate rental duration based on return date and pick up date
        rental_duration = 7; // we assume and set  that the rental duration to 7 days
    }

    double get_rental_rate() const
    { // getter method to get rental rate
        return rental_rate;
    }

    void set_rental_rate() 
    { // setter method to set rental rate
        ///calculate rental rate based on car make and model
        rental_rate = 100;
    }

    double get_rental_total() const 
    {
        return rental_total;
    }

    // member functions for validations and calculations
    bool checkRes_ervation_ID() const
    {
        bool check = true;
        // check special characters
        if ( reservation_ID[11] != '-' || reservation_ID[8] != '-' ) 
        {
            check = false;
        }

        // check length of reservation ID
        if (reservation_ID.length() != 14)
        {
            check= false;
        }

        // check last four digits , so we start from 10
        int sum = 0; //initialize to zero
        int i=0;
        for (int i = 10; i < 14; i++) 
        {
            sum =  sum + reservation_ID[i] - '0';
        }
    if (sum != 12)
    {
        check = false;
    }

    return check;
}
double calculateRentalTotal()
{
    // calculate rental total based on rental duration and rental rate
    rental_total = rental_duration * rental_rate; 
    return rental_total;
}
// display member function
void display_ReservationDetails() const 
{
    cout<<"---------------------------------------------------"<<endl;
    cout << "Reservation ID is = " << reservation_ID << endl;  
    // print reservation ID
    cout << "Customer Name is = " << customer_name << endl;  
    // print customer name
    cout << "Car Make and Model is = " << car_MakeAndModel << endl;  
    // print car make and model
    cout << "Pickup Date is =" << pickup_date << endl;  
    // print pickup date
    cout << "Return Date is = " << return_date << endl;
    // print return date
    cout << "Rental Duration is =  " << rental_duration << " days" << endl;  
    // print rental duration in days
    cout << "Rental Rate in dollars is =  $" << rental_rate << " per day" << endl;  
    // print rental rate per day
    cout << "Rental Totalin dollars is = $" << rental_total << endl;  
    // print rental total
}
private: // private member variables
    string return_date; 
    // return date
    int rental_duration; 
    // rental duration in days
    double rental_rate; 
    // rental rate per day
    double rental_total;
    // rental total
    string reservation_ID; 
    // reservation ID
    string customer_name;
    // customer name
    string car_MakeAndModel; 
    // car make and model
    string pickup_date; 
    // pickup date
   
};

int main()
{
    // create a RentalReservation object 
    Rental_reservation reservation("RR-1234-8765-30", "Ali Ahmed", "Honda City", "2022-05-01", "2022-05-06");  
    reservation.display_ReservationDetails();  
    // print details of the reservation
    reservation.set_pickup_date("2023-01-010");  
    // update pickup date of reservation
    reservation.set_return_date("2023-01-17");  
    // update return date of reservation
    cout<<"***********************Updated Information***************************"<<endl;
    reservation.display_ReservationDetails();  
    // print updated details of the reservation
    reservation.set_reservation_ID("RR-0287-8423-74");  
    // update reservation ID of reservation
    reservation.display_ReservationDetails(); 
    // print updated details of the reservation
    return 0;
}
