import os

ORIG_INPUT_DATASET = "dataset-original"
BASE_PATH = "dataset-split"

TRAIN_PATH = os.path.sep.join([BASE_PATH, "training"])
VAL_PATH = os.path.sep.join([BASE_PATH, "validation"])
TEST_PATH = os.path.sep.join([BASE_PATH, "testing"])

# define the amount of data that will be used training
TRAIN_SPLIT = 0.70
VAL_SPLIT = 0.13
# define the names of the classes
CLASSES = ["cardboard", "glass", "metal", "paper", "plastic", "trash"]

# initialize the initial learning rate, batch size, and number of
# epochs to train for
INIT_LR = 0.001
BS = 32
NUM_EPOCHS = 20
MODEL_PATH = "trash_detector.model"