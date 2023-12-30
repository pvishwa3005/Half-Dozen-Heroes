#include <stdio.h>

struct Appointment {
    char patientName[50];
    char doctorName[50];
    char date[20];
    char time[10];
};

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Schedule an appointment\n");
    printf("2. Change an appointment\n");
    printf("3. View medical service prices\n");
    printf("4. View scheduled appointments\n");
    printf("5. Exit\n");
}

int main() {
    struct Appointment appointment;
    int choice;
    int isAppointmentScheduled = 0;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter patient name: ");
                scanf("%s", appointment.patientName);
                printf("Enter doctor name: ");
                scanf("%s", appointment.doctorName);
                printf("Enter date: ");
                scanf("%s", appointment.date);
                printf("Enter time: ");
                scanf("%s", appointment.time);
                isAppointmentScheduled = 1;
                printf("Appointment scheduled successfully!\n");
                break;
            case 2:
                if (isAppointmentScheduled) {
                    printf("Enter new date: ");
                    scanf("%s", appointment.date);
                    printf("Enter new time: ");
                    scanf("%s", appointment.time);
                    printf("Appointment changed successfully!\n");
                } else {
                    printf("No appointment is scheduled. Please schedule an appointment first.\n");
                }
                break;
            case 3:
                printf("Medical service prices:\n");
                printf("- Fever: ₹1000\n");
                printf("- diabeties : ₹1500\n");
                printf("- astma : ₹2000\n");
                printf("- general checkup : ₹500");
                printf("- chicken pox : ₹1000");
                break;
            case 4:
                if (isAppointmentScheduled) {
                    printf("Scheduled Appointment Details:\n");
                    printf("Patient Name: %s\n", appointment.patientName);
                    printf("Doctor Name: %s\n", appointment.doctorName);
                    printf("Date: %s\n", appointment.date);
                    printf("Time: %s\n", appointment.time);
                } else {
                    printf("No appointment is scheduled.\n");
                }
                break;
            case 5:
                printf("Thankyou for consulting us\n Get wellsoon");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
