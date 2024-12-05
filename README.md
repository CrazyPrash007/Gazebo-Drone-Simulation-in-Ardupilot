## ArduPilot and Gazebo Setup Instructions
## 1. Clone ArduPilot

Open a terminal and run the following commands to clone the ArduPilot repository:
    ```
    cd ~
    sudo apt install git
    git clone https://github.com/ArduPilot/ardupilot.git
    cd ardupilot
    ```
## 2. Install Dependencies

Navigate to the ardupilot directory:
    ```
    cd ardupilot
    ```
Run the script to install prerequisites:
    ```
    Tools/environment_install/install-prereqs-ubuntu.sh -y
    ```
Reload the profile:
    ```
    . ~/.profile
    ```
## 3. Install Gazebo (Ubuntu 20.04)
3.1 Add OSRF Repository
    ```
    sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'
    ```
3.2 Setup Keys
    ```
    wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
    ```
3.3 Update Software List
    ```
    sudo apt update
    ```
3.4 Install Gazebo
    ```
    sudo apt-get install gazebo11 libgazebo11-dev
    ```
## 4. Install Gazebo Plugin for APM (ArduPilot Master)

Clone the plugin repository:
    ```
    cd ~
    git clone https://github.com/khancyr/ardupilot_gazebo.git
    cd ardupilot_gazebo
    ```
Build and install the plugin:
    ```
    mkdir build
    cd build
    cmake ..
    make -j4
    sudo make install
    ```
Set up environment variables:
    ```
    echo 'source /usr/share/gazebo/setup.sh' >> ~/.bashrc
    ```
Set paths for models:
    ```
    echo 'export GAZEBO_MODEL_PATH=~/ardupilot_gazebo/models' >> ~/.bashrc
    . ~/.bashrc
    ```
## 5. Install ROS

    Perform a Desktop-Full Installation of ROS Noetic by following the instructions up to Step 1.7 here:
    ROS Noetic Installation Guide

## 6. Build and Set Up the Workspace

    Unzip the catkin_ws folder.

Build the workspace:
    ```
    cd catkin_ws/src/
    catkin build
    ```
## 7. Launch Gazebo World

Run the following command to launch the Gazebo simulation:
    ```
    roslaunch iq_sim runway.launch
    ```
## 8. Run SITL Simulation

Open a new terminal tab and run:
    ```
    cd
    ./startsitl.sh
    ```
Wait for the following messages to appear in the console:
    ```sh
    AP: EKF2 IMU0 is using GPS
    AP: EKF2 IMU1 is using GPS
    ```
## 9. Launch APM

Open another terminal tab and run:
    ```
    cd catkin_ws/src/iq_gnc/launch/
    roslaunch apm.launch
    ```
## 10. Object Detection Using 2D LiDAR

Open another terminal tab and run the following script for object detection:
    ```
    cd catkin_ws/src/3D/Code/
    python3 ./Detection_Pipeline.py
    ```
        Note: The /braking topic outputs:
            True: No object within 1m range.
            False: Object detected within 1m range.

## 11. Moving the Drone

Open another terminal tab and run:
    ```
    cd catkin_ws/src/
    roslaunch iq_gnc square
    ```
When prompted, set the drone to GUIDED mode:

Go back to the terminal where ./startsitl.sh is running.
    Press ENTER and type:
        ```
        mode GUIDED
        ```
This setup allows you to run the simulation, perform object detection, and move the drone based on waypoints in GUIDED mode. Let me know if further clarification is needed!

