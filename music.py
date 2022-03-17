def solution(string):
    map={}
    map["song"]=0
    map["picture"]=0
    map["cinema"]=0
    map["remaining"]=0 
    string=string.split("\n")
    length = len(st)
    for i in range(length):
        flag=1
        removedSpaceString=string[i].split(" ")
        removedDotString=removedSpaceString[0].split(".")
        if (removedDotString[-1]=="jpg" or removedDotString[-1]=="gif" or removedDotString[-1]=="bmp"):
                   map["picture"]=map["picture"]+int(removedSpaceString[1][:-1])
                   flag=0
        if (removedDotString[-1]=="avi"  or removedDotString[-1]=="mp4" or removedDotString[-1]=="mkv"):
                   map["cinema"]=map["cinema"]+int(removedSpaceString[1][:-1])
                   flag=0
        if (removedDotString[-1]=="flac" or removedDotString[-1]=="mp3" or removedDotString[-1]=="aac"):
                   map["song"]=map["song"]+int(removedSpaceString[1][:-1])
                   flag=0
        if (flag==1):
                   map["remaining"]=map["remaining"]+int(removedSpaceString[1][:-1])
    
    st=""
    st=st+"music"+" "+str(map["song"])+"b"+"\n"+"images"+" "+str(map["picture"])+"b"+"\n"+"movies"+" "+str(map["cinema"])+"b"+"\n"+"other"+" "+str(map["remaining"])+"b"
    return st