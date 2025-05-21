public static void Main(String[] args) {
    
    func ot { System.out.print |0| | | ^ System.out.print | | | | ^ System.out.print | | | | }
    func tt { System.out.print | |0| | ^ System.out.print | | | | ^ System.out.print | | | | }
    int x = 1
    int y = 3
    str press = None
    System.out.print %x% %y%
    System.out.print %press%
    System.out.print |0| | |
    System.out.print | | | |
    System.out.print | | | |
    System.keyboard.read press
    
    if %press% == w : int y = %y% + 1
    if %press% == s : int y = %y% - 1
    if %press% == a : int x = %x% - 1
    if %press% == d : int x = %x% + 1
    if %press% == e : exit()
    
    System.cls
    
    System.out.print %x% %y%
    System.out.print %press%
    
    if %x% == 1 : if %y% == 3 : call_fn ot
    if %x% == 1 : if %y% == 2 : System.out.print | | | |
    if %x% == 1 : if %y% == 2 : System.out.print |0| | |
    if %x% == 1 : if %y% == 2 : System.out.print | | | |
    if %x% == 1 : if %y% == 1 : System.out.print | | | |
    if %x% == 1 : if %y% == 1 : System.out.print | | | |
    if %x% == 1 : if %y% == 1 : System.out.print |0| | |

    if %x% == 2 : if %y% == 3 : call_fn tt
    if %x% == 2 : if %y% == 2 : System.out.print | | | |
    if %x% == 2 : if %y% == 2 : System.out.print | |0| |
    if %x% == 2 : if %y% == 2 : System.out.print | | | |
    if %x% == 2 : if %y% == 1 : System.out.print | | | |
    if %x% == 2 : if %y% == 1 : System.out.print | | | |
    if %x% == 2 : if %y% == 1 : System.out.print | |0| |

    if %x% == 3 : if %y% == 3 : System.out.print | | |0|
    if %x% == 3 : if %y% == 3 : System.out.print | | | |
    if %x% == 3 : if %y% == 3 : System.out.print | | | |
    if %x% == 3 : if %y% == 2 : System.out.print | | | |
    if %x% == 3 : if %y% == 2 : System.out.print | | |0|
    if %x% == 3 : if %y% == 2 : System.out.print | | | |
    if %x% == 3 : if %y% == 1 : System.out.print | | | |
    if %x% == 3 : if %y% == 1 : System.out.print | | | |
    if %x% == 3 : if %y% == 1 : System.out.print | | |0|

    goto 11
    
}