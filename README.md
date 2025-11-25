# Harvesting Drone Project

An autonomous drone system designed to support agricultural harvesting by identifying fruit and following predefined paths. This project includes both **software** and **hardware** components developed for two drones: **Parrot Mambo** and **DJI Tello**.  

---

## Overview

This project explores the development of a **Harvesting Drone**, aimed at improving agricultural efficiency by automating fruit-picking tasks.  
Due to hardware limitations and time constraints, the fruit-picking mechanism was not completed, but two fully functional drone navigation systems were developed:

- **Parrot Mambo** (MATLAB & Simulink)
- **DJI Tello** (Python)

Both drones:
- Follow a predefined path  
- Identify fruit using image processing  
- Land autonomously when reaching target markers  

---

## Features

### **Drone Mobility**
- Line tracking via image processing  
- Circle detection for landing  
- Real-time adjustments based on camera feedback  
- Path-planning state machine (MATLAB/Simulink)  
- Virtual world simulation for both drones  

### **Fruit Identification**
- RGB masking  
- Threshold-based segmentation  
- Challenges with similar color tones

### **Virtual Environments**
- Simulated test room  
- Virtual world for Tello with angle/distance computation

---

## Technical Components

### **Parrot Mambo (MATLAB/Simulink)**
- Modified Flight Control System block  
- Image Processing System mask to detect lines and circles  
- Sub-matrix analysis for pixel distribution
- Path-Planning state machine to update drone orientation  

### **DJI Tello (Python)**
- Uses OpenCV and Hough Transform for line detection  
- Follows a drawn line and lands on circle marker  

---

## Prototype

Drones used:
- **DJI Tello**  
- **Parrot Mambo**  

---

## Installation & Running

### **Parrot Mambo**
1. Connect via Bluetooth  
2. Upload MATLAB/Simulink code  
3. Position the drone  
4. Activate the program  
5. Replace/charge battery when needed  

### **DJI Tello**
1. Connect via Wi-Fi  
2. Run the Python script  
3. Position the drone  
4. Activate the program  
5. Replace/charge battery as needed  

---

## Performance Evaluation

- Stable flight and reliable path-following  
- Limited by:
  - Similar color tones affecting fruit detection  
  - Difficulty in confined spaces  
- Battery life constraints (~1–2 hours)  

---

## Budget

The entire project was completed with a budget under **150€**, supported by university resources.  

---

## Conclusion

Although the fruit-picking mechanism was not completed, the project successfully implemented:
- Autonomous navigation for two drones  
- Fruit detection algorithms  
- Virtual testing environments  

---

