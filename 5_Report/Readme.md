
# M2_Power_measurement

## Abstrat

We can see a person standing in front of our house from electricity board, whose duty is to read the energy meter and handover the bills to the owner of that house every month. This is nothing but meter reading. According to that reading we have to pay the bills.

# Requirements
# Introduction
In this project the user can help user retro fit a smart engergy meter on top of the exisinting system.

# Research
High energy consumption by our household appliances is quite bothering and each month we make every possible effort to reduce the electricity bill. Not just that, in the quest to understand and monitor the power usages, we keep checking electricity meters installed in our home/offices. What if we can monitor the electricity bill from anywhere on our smartphones? Yes, with the help from the Internet of Things, we can easily monitor power consumption using a smart energy meter. We have previously done other IoT based Remote Monitoring projects like Temperature and Humidity Monitoring, Battery Monitoring, Food Monitoring, Air Quality Monitoring

# Defining Our System
Current Sensing A Binary number system has only two digits that are 0 and 1. Every number (value) represents with 0 and 1 in this number system. The base of binary number system is 2, because it has only two digits.
Calculations Octal number system has only eight (8) digits from 0 to 7. Every number (value) represents with 0,1,2,3,4,5,6 and 7 in this number system. The base of octal number system is 8, because it has only 8 digits.
Over Current Protection Decimal number system has only ten (10) digits from 0 to 9. Every number (value) represents with 0,1,2,3,4,5,6, 7,8 and 9 in this number system. The base of decimal number system is 10, because it has only 10 digits.

# Strenghts:
1.With number system convertion users can convert a given number system to any other number system. 2.Users can save their time ,without finding it manually. 3.users can reduse the time and effort . 4.Easily get Output.

# WEAKNESS:
1.Vulnerable to viruses. 2.May encounter with Bugs.

# Oprtunity:
Can used for Teaching Purpose
.
# Threats:
Application may crash somtimes.
Can hit error when given huge value.
# 4W's and 1'H
# Who:
Resiential Consumers, Industries, Small scale manufacturing units

# What:
Used for easy and fast tracking

# When:
Demand Basis

# Where:
As a retro-fit

# How:
Purchase from store and DIY or Professional Installation

## Detail requirements
### High level requirements:
| ID |	Description	Category	| Status |
| --- | ------| --- |
| HR01 |	User shall be able to determine from which number system to which it should be converted. |	Technical	Implemented |
| HR02 |	User shall be able to differentiate the input given. |	Technical	Implemented |
| HR03 |	User shall be able to convert one number system to other. |	Technical	Implemented |
| HR04 |	User shall be able to get the equivalent value in other number system. |	Technical	Implemented |
| HR05 |	User shall be able to get the desired output |	Technical	Implemented |

### Low Level Requirements:

| ID |	Description	| HLR ID	| Status (Implemented/Future) |
| --- | ------- | --- | --- |
| LR01 |	(1). User must choose the option for the convertion to start. |	HR01 |	Implemented |
| LR02 |	User must give the correct option. | HR02 |	Implemented |
| LR03 |	User must give the relevent inputs.	| HR03 |	Implemented |
| LR04 |	User desired Output. |	HR04 |	Implemented |


1.First of all we need to enable the ADC feature in ADC.

Since we are measuring room temperature, we don’t really need values beyond hundred degrees (1000mV output of LM35). So we can set up maximum value or reference of ADC to 2.5V.

The controller has a trigger conversion feature, that means ADC conversion takes place only after an external trigger, since we don’t want that we need to set the registers for the ADC to run in continuous free running mode.

For any ADC, frequency of conversion (Analog value to Digital value) and accuracy of digital output are inversely proportional. So for better accuracy of digital output we have to choose lesser frequency. For lesser ADC clock we are setting the presale of ADC to maximum value (128). Since we are using the internal clock of 1MHZ, the clock of ADC will be (1000000/128).

These are the only four things we need to know to getting started with ADC. All the above four features are set by two registers.

![adc](https://user-images.githubusercontent.com/101310082/164171161-ee18e285-9848-487b-a6c2-605287759baf.jpg)

## block diagram
![basic-block-diagram](https://user-images.githubusercontent.com/101310082/164172008-2429a89d-eba2-49a9-abc2-a7f231e5d566.svg)

| OFF | ON |
| --- | --- |
| <img src="6_Images&Videos/OFF.png" width="400"> | <img src="6_Images&Videos/ON.1.png" width="400"> |


#Folder Structure :
| Folder_Name |	Description |
| --- | ----- |
| 1_Reuriments |	Documents detailing requirements and research |
| 2_Design |	Documents specifying design |
| 3_Implemenation	| All codes and Documentation |
| 4_Testplan |	Documents with test plans |
| 5_Report |	Documentation of whole project |
| 6_Images |	All the images of this project |





