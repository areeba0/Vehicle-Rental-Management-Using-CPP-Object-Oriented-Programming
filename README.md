# Rental Reservation System using C++ and Object-Oriented Programming
This project implements a simple rental reservation system in C++. It allows users to create and manage rental reservations for vehicles, keeping track of reservation details such as customer information, car details, pickup and return dates, rental duration, rental rate, and total cost.

# Features:
- Object-Oriented Design: Utilizes classes and objects to encapsulate reservation data and functionalities.
- Constructor and Destructor: Initializes reservation details upon creation and handles cleanup when reservations are no longer needed.
- Getter and Setter Methods: Provides access to private member variables while enforcing validation checks for reservation ID format.
- Dynamic Calculation: Automatically calculates rental duration and total cost based on pickup and return dates and predefined rental rates.
- Display Function: Prints detailed reservation information in a structured format.
- Update Functionality: Allows for updating reservation details including pickup date, return date, and reservation ID.

# Implementation Details:
## Class Definition: 
The Rental_reservation class is defined with private member variables for reservation details and public member functions for accessing and modifying these details.
## Constructor: 
Initializes reservation details including reservation ID, customer name, car make and model, pickup date, and return date. It also sets default values for rental duration, rate, and total cost, and calculates these based on input.
## Setter Methods: 
Update pickup and return dates triggers recalculation of rental duration and total cost.
## Validation: 
Includes a validation method (checkRes_ervation_ID) to ensure reservation IDs follow a specific format and validate against criteria like special characters and checksum.
## Display Function: 
Prints reservation details neatly formatted for easy readability.
## Main Function: 
Demonstrates usage of the class by creating a reservation object, updating its details, and displaying the updated information.

# Usage:
To use the rental reservation system:
- Create Object: Instantiate a Rental_reservation object with parameters for reservation ID, customer name, car make and model, pickup date, and return date.
- Display Details: Call display_ReservationDetails() to view the initial reservation details.
- Update Details: Use setter methods (set_pickup_date, set_return_date, set_reservation_ID) to update reservation information.
- Display Updated Details: Call display_ReservationDetails() again to see the updated reservation details.
