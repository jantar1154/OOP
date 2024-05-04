#############################################
#    -- jantar1154's uni C++ Makefile --    #
#############################################

# Config
TARGET = main
CC = g++
SRCDIR = src
OBJDIR = obj
EXT = cpp
ARGS = -g -Wall -fsanitize=address -std=c++11

#############################################
#   -- Don't touch anything below here --   #
#############################################

SRC_FILES = $(wildcard $(SRCDIR)/*.$(EXT))
SRC_FILES += $(wildcard $(SRCDIR)/**/*.$(EXT))
OBJ_FILES = $(SRC_FILES:$(SRCDIR)/%.$(EXT)=$(OBJDIR)/%.o)

# Compile from object files
$(TARGET) : $(OBJ_FILES)
	$(CC) $(ARGS) $^ -o $@

# Make object files
$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(ARGS) -c $^ -o $@

# Clean up after yourself!
# If OBJDIR is '.', rmdir throws an error. Ignore it
.PHONY : clean
clean:
	-rm -f $(TARGET)
	-rm -rf $(OBJDIR)
