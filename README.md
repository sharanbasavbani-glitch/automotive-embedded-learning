# 🚗 Automotive Embedded Learning

**My journey towards Automotive Embedded Software Engineering**

This repository documents my hands-on learning journey in Embedded C, automotive communication protocols, microcontrollers, and automotive software architecture.

My goal is to build a strong foundation in embedded programming and gradually develop practical skills relevant to automotive systems such as ECUs, vehicle networks, diagnostics, and ADAS.

I am focusing on understanding concepts by writing code, testing programs, debugging errors, and building projects.

---

## 🎯 Learning Objectives

* Develop strong programming fundamentals in C.
* Understand bitwise operations and low-level data manipulation.
* Learn how microcontrollers interact with peripherals.
* Understand CAN and CAN FD communication.
* Explore automotive diagnostics using ISO-TP and UDS.
* Learn STM32 microcontroller development.
* Understand the fundamentals of AUTOSAR Classic.
* Build practical projects related to automotive embedded systems.

---

## 📚 Learning Roadmap

| Stage | Topic             | Status                   |
| ----- | ----------------- | ------------------------ |
| 01    | Embedded C        | 🟡 In Progress           |
| 02    | CAN Protocol      | 📋 Planned / In Progress |
| 03    | CAN FD            | 📋 Planned               |
| 04    | ISO-TP            | 📋 Planned               |
| 05    | UDS Diagnostics   | 📋 Planned               |
| 06    | STM32 Development | 📋 Planned               |
| 07    | AUTOSAR Classic   | 📋 Planned               |

*Progress will be updated as I complete exercises and projects.*

---

## 💻 01 — Embedded C

This section contains C programming exercises focused on developing the foundations needed for embedded software.

### Concepts

* Variables and data types
* `printf()` and formatted output
* Arithmetic and comparison operators
* Binary and hexadecimal representation
* Signed and unsigned integers
* Fixed-width integer types such as `uint8_t`
* Bitwise AND, OR, XOR, and NOT
* Left and right shift operations
* Setting, clearing, toggling, and extracting bits
* Conditional statements
* Loops
* Functions

### Practical Exercise: Vehicle Peripheral Status Simulation

**File:** `02_bitwise_vehicle_status.c`

This exercise simulates the status of four vehicle peripherals using an 8-bit status variable.

| Bit   | Simulated peripheral |
| ----- | -------------------- |
| Bit 0 | Headlight            |
| Bit 1 | Brake light          |
| Bit 2 | Left indicator       |
| Bit 3 | Right indicator      |

The program uses bitwise operations to set and clear individual status bits while preserving the states of other peripherals.

#### Concepts Practised

* `uint8_t` for 8-bit status storage
* Bit masks using left shifts
* Bitwise OR to set bits
* Bitwise AND and NOT to clear bits
* `if-else` statements
* Input validation
* Loops for repeated user interaction
* Decimal and hexadecimal output

**Note:** This is a software simulation. It does not directly control physical vehicle hardware.

---

## 🚘 02 — CAN Protocol

This section will document my learning of Controller Area Network communication.

### Planned Topics

* CAN fundamentals
* Dominant and recessive bits
* CAN_H and CAN_L signals
* Differential signalling
* CAN frame structure
* Standard and extended identifiers
* Bit stuffing
* CRC and error handling
* Baud rate and bit timing
* CAN message transmission and reception

The objective is to understand how electronic control units communicate within a vehicle.

---

## ⚡ 03 — CAN FD

Topics to explore:

* Differences between Classical CAN and CAN FD
* Flexible data-rate communication
* CAN FD frame structure
* Payload and bit-rate considerations
* CAN FD use cases in modern vehicles

---

## 🔧 04 — ISO-TP

Topics to explore:

* Single Frames
* First Frames
* Consecutive Frames
* Flow Control Frames
* Multi-frame message transmission
* Segmentation and reassembly

---

## 🩺 05 — UDS Diagnostics

Topics to explore:

* Unified Diagnostic Services fundamentals
* Diagnostic sessions
* Reading diagnostic data
* Diagnostic trouble codes
* ECU reset services
* Security access fundamentals
* UDS communication over ISO-TP

---

## 🧩 06 — STM32 Development

Topics to explore:

* STM32 architecture
* GPIO configuration
* Timers and interrupts
* UART communication
* SPI and I2C
* CAN peripheral configuration
* Register-level programming
* Debugging and testing

---

## 🏗️ 07 — AUTOSAR Classic

Topics to explore:

* AUTOSAR architecture
* Microcontroller Abstraction Layer (MCAL)
* CAN Driver (CanDrv)
* CAN Interface (CanIf)
* PDU Router (PduR)
* Communication Services (COM)
* Runtime Environment (RTE)
* Basic Software (BSW)

The objective is to understand how automotive embedded software is structured into reusable and standardized components.

---

## 🛠️ Tools and Technologies

Tools I am learning or exploring include:

* C programming
* Git and GitHub
* GCC and C development tools
* BusMaster for CAN experimentation
* STM32 development tools
* Arduino IDE for selected microcontroller experiments

Tools will be added as I gain practical experience with them.

---

## 📈 Learning Approach

My approach is to learn through practice:

1. Understand the concept.
2. Write the code independently.
3. Compile and test it.
4. Debug errors and improve the implementation.
5. Document the result.
6. Commit the work to GitHub.
7. Apply the concept in a practical project.

I aim to build a portfolio that demonstrates both my understanding of embedded concepts and my ability to implement them.

---

## 🚀 Long-Term Goal

To develop the skills needed for an entry-level role in automotive embedded software engineering, with a focus on Embedded C, vehicle communication protocols, microcontrollers, and automotive software architecture.

**Learning one concept, writing one program, and improving one project at a time.**
