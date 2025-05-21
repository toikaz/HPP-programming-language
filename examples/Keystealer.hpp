public static void Main(String[] args) {
    
    str filename = "C:\keys.txt"
    goto 3
    if.notexist C:\keys.txt : System.create.file C:\keys.txt
    System.keyboard.read content
    System.add_edit.file %filename% %content%
    if %content% == esc : exit()
    goto 1
    

}