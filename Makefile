CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		MathGame.o

LIBS =

TARGET =	MathGame.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
