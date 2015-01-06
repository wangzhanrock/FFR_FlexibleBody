# #shapeFile= open('test.dat', 'r')
# modeOutputFileName = 'PHI.dat'
# 
# with open('test.dat', 'r') as infile, open(modeOutputFileName,"w") as outfile:
#     collector = []
#     for line in infile:
#         if line == "                                       N O D E   O U T P U T\r\n":
#             collector = []
#             for i in range(10):
#                 line = next(infile)
#         collector.append(line)
#         if line.startswith("\r\n"):
#             for outline in collector:
#                 outfile.write(outline)

modeIndex= 0 

numOfModes = 3  # TODO: search the value form the output file.

mode = [[] for i in range(numOfModes)]

with open("test.dat") as infile, open("outfile.txt","w") as outfile:
    collector = []
    for line in infile:
        if line.startswith("                                       N O D E   O U T P U T\r\n"):
            collector = []
            for i in range(10):
               line = next(infile)
        collector.append(line)
        if line.startswith(" AT NODE"):
            for outline in collector:
                outfile.write(outline)
            mode[modeIndex]= collector
            print modeIndex
            print mode[1]  
            modeIndex +=1
print mode[1]   