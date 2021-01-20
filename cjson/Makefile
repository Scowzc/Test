#gcc -o json jsonGJ.c -I ../../cJSON -lcjson
CC = gcc
OBJ = jsonGJ.o
MAI = jsonGJ.c
TAR = json1
TARD = json2
RMRF = rm -rf
LIB_PATH = -I ../../cJSON
LI_PATH = -L ../../cJSON
LIBS = -lcjson
LIB = -l:libcjson.a

.PHONY:all cleanall

all:json1 json2

json1:$(TAR)
json2:$(TRAD)

$(TAR):$(OBJ)
	$(CC) -o $@ $^ $(LI_PATH) $(LIB)
$(TARD):$(MAI)
	$(CC) -o $@ $^ $(LIB_PATH) $(LIBS)
%.o:%.c
	$(CC) -o $@ -c $^ $(LIB_PATH) 


clean:clean clean1 clean2

clean:
	$(RMRF) $(OBJ)
clean1:
	$(RMRF) $(TAR)
clean2:
	$(RMRF) $(TARD)