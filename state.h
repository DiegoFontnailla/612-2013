#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

enum ROBOT_STATE {DRIVE, CLIMB, LIFT};

class RobotState {

public:
    RobotState();   // constructor

    void turn_on_led (int led_no);
    void increment_disk_count (void);
    int get_disk_count (void);
    void delete_all_disks (void);

    ~RobotState();  // destructor
private:
    // methods that will be called only by class methods
    ROBOT_STATE state;
    int number_of_disks;
};

#endif // STATE_H_INCLUDED