
.model small
.stack 100h  //[stack ar j size ta dekhay dewar jnno stack use kora hoache ]
.code        //[ai khane ami direct value nibo cx dia ty data segment na likhe direct code segment lekha hoache]
main proc    //[main proc mane main procedure]
mov cx,4     //[loop ar vitore j register chole ta hoche cx register.and jehetu ami user input ba data segment use kortesina ty ami cx register nia koma dia joto gula star print korte chai tar valu dibo . ami aikhane 4 ta print korbo ty 4 diachi.
leb1:        //[jehetu aita nested loop hishabe kaj korbe ty ami akta level create korchi leb1: dia ]
    mov bx,cx    //[akhon ami chachi amr cx ar value gula aro akta register a store hoa thakuk ty ami cx ar value bx register a allocate korechi akhon cx ar 4ta start bx a dekhabe]

    leb2:        //[aituk kaj korar por ami r akta lebel creat korchi nam dichi leb2: jehetu aita akta nested loop]
        mov ah,2     //[akhon ami fst ar star(*) gula print korbo.string typ ar data chara onno typ data print korar jnno j function k amra cl kore thaki  ta hoche mov ah,2]
        mov dl,'*'   //[j data amra print korbo tar kaj kore thake mov dl,and j value print korbo ta dl ar pashe likhte hobe '*']
        int 21h      //[akhon  hoche ai print ta exicute korar jnno int 21h likhte hobe tahole amder * lekhaata print hobe]
        loop leb2    //[amder akta * print hoa gese . akhon ai star kotokhn print hobe ta koto khon cholbe tar jnno amra leb2 k loop ar vitor dia dibo and aita mov ah,2 porjonto cholbe]
    mov ah,2     //[akhon poroborti line print korar jnno abr akta function likhlam jate kore 3ta * print hoa ]
    mov dl,10
    int 21h      //[ager moto exicuit korar jnno likhechi ]
    mov dl,13    //[value gula jeno ak ak kore komte thake  ty ai function use korechi]
    int 21h

    mov cx,bx    //[fst a amra j value ta cx a chilo 4 sheta bx a rakhar por bx ar value 1 kore komle amra shei value abr cx a rakhbo]

    loop leb1    //[ai kaj ta totokhn cholbe jotokhn na cx ar value 4,3,2,1 hoa]


exit:        //[amder kaj complt hoa gele amra exit ar madhome loop theka ber hoa ashbo ty exit function use korbo]
 mov ah, 4ch
int 21h
main endp
end main
