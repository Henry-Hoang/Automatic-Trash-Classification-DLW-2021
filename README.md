# MLDA Deep Learning Week Hackathon

Fine-tune the ResNet50 to classify recyclable waste into 6 categories: cardboard, glass, metal, paper, plastic, and other trash. 
Turn on the LED light that corresponds to predicted category.
 
- `config.py`: configuration file that contains important paths and parameters.
- `build_dataset.py`: categorize and split into three datasets, train/valid/test with ratio 70/13/17.
- `train_model.ipynb`: train the model and save it to `trash_classifier.model`.
- `test_webcam.ipynb`: use the webcam to test the model in real-time and return serial output to the esp32 microcontroller.
- `esp32code.ino`: embedded functionality code for esp32.
