# PicAxeBasicToXc8
The question posed  in https://picaxeforum.co.uk/threads/convert-my-picaxe-basic-code.22249/#post-344981 by drewbagd
The full MPLABX  XC8 solution  for you in C  no less 

Hello!

I've made a small program for my picaxe 08M chips that works pretty well. However, I want to be able to put it into different programming languages (C, Basic, etc) and I'm not sure the best way to go about it. I've only learned Picaxe Basic, so I'm not sure what kind of work the basic interpreter does. I suppose if I knew that, I would know how to write my program in regular Basic code. Any help would be greatly appreciated!

Thank you

My response as follows  which I think will be of great  value to many 

 ********************************************************************
Code: By drewbagd

symbol counter1 = b1         
symbol counter2 = b2
symbol counter3 = b3
symbol counter4 = b4
symbol counter5 = b5
symbol math = b6
symbol RED = B.4            
symbol GOLD = B.2
main:
    if pin3 = 0 then pause 3000 endif
    if pin3 = 1 then
	for counter5 = 0 to 255
		low RED
		low GOLD 
		math = 255-counter5
		Pause math
		high RED
		high GOLD 
		Pause math
		if pin3 = 0 then exit
		next counter5
	for counter5 = 255 to 0 step - 1
		low RED
		low GOLD 
		math = math + 1
		Pause math
		high RED
		high GOLD 
		Pause math
		if pin3 = 0 then exit
		next counter5
	else goto game
	endif		
	goto main
game:   
    for counter1 = 1 to 25     ; start a for...next loop
        high RED                   ; switch pin 4 high
        low GOLD
        pause 100                  ; wait for 0.5 second
        high GOLD
        low RED                   ; switch pin 4 low
        pause 100                 ; wait for 0.5 second
    next counter1
    for counter2 = 1 to 59     ; start a for...next loop
        low RED                   ; switch pin 4 high
        low GOLD
        pause 58000 
         for counter4 = 1 to 50     ; start a for...next loop
     		high RED                   ; switch pin 4 high
        	low GOLD
        	pause 50                  ; wait for 0.5 second
        	high GOLD
        	low RED                   ; switch pin 4 low
        	pause 50                 ; wait for 0.5 second
    	    next counter4      			 ; wait for 0.5 second
    next counter2                  ; end of for...next loop
    do				     ; start a for...next loop
        high RED                   ; switch pin 4 high
        low GOLD
        pause 750                  ; wait for 0.5 second
        high GOLD
        low RED                   ; switch pin 4 low
        pause 750                 ; wait for 0.5 second
    loop
    low RED
    low GOLD
end
*******************************************************************


My answer  you can  now both download , test and implement 

Many  such questions are no answerable  with technology that has progressed 200 fold since Sep 30, 2012 

How much have farther  have we since progressed and how many  issues that were once out of reach  can we now resolve 

Enjoy 

MD Harrington 

https://www.facebook.com/mark.harrington.14289/

https://eliteprojects.x10host.com/


https://www.instagram.com/direct/t/17844238322930944/

My other links for code  shares  for  anyone  whom is interested  

https://codeshare.io/zyylOO

https://pastebin.com/u/Mark2020H

 Have a great  day and make every minute, every second , every hour count  , Learn as much as you can  as knwoldege they can never ever take from you 



