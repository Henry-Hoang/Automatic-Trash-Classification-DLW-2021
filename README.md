# Automatic Trash Classification - DLW 2021

This repository contains codes for Automatic Trash Classification System (code name: **Trash for Treasure**). 

This project won "Most Socially Impactful Hack" for the DLW Hackaton 2021 hosted by MLDA@EEE.

## Problem Statement

Waste classification is usually overlooked by most people as human behavior is often unconsciously based on taking the easiest actions, and the easiest way to dispose of trash is to just dispose everything into one container.

## Proposed Solution

The goal of this project is to create an automatic trash classification system that creates a positive impact on the environment through human–centered design methodology in two steps:
1. When there is a person carrying a garbage bag and walking towards, the system will first detect and classify the trash into 6 categories: `cardboard`, `glass`, `metal`, `paper`, `plastic`, and `other` trash.
2. After detecting the correct recyclable category, the system will automatically open the corresponding bin for the person to put in easily.

## Implementation Considerations

#### 1. Classification Model

We fine-tuned a ImageNet pre-trained ResNet50, achieved the accuracy of 90% on validation set by using these files:
 - `config.py`: configuration file that contains important paths and parameters.
 - `build_dataset.py`: categorize and split into three datasets, train/valid/test with ratio 70/13/17.
 - `train_model.ipynb`: notebook contains the training pipeline, the trained weights are saved into `trash_classifier.model`.

#### 2. Hardware Integration

Because of the time constraint of this hackathon, instead of 6 trash bins, we only built a simple demo which used a 6-LED system using Arduino using the file `esp32code.ino`, which is the embedded functionality code for esp32.

## Evaluation

`test_webcam.ipynb` contains the code where we evaluated the system in real-time by using the web-cam.

The submitted demo for the hackathon: [DevPost](https://devpost.com/software/project-7osca6ikbq3l)

