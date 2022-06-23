#include "trekscii.h"


/*==============================================
 *  Star trek ship ASCII art
 *
 *  Note: 'a' encodes an actual empty space,
 *  as opposed to ' ' which denotes transparency.
 *================================================*/

const std::vector<std::string> SHIP_ART = {

R"SHIP(   __
 /|
/a\
\aa\
}]::)==-{)
/aa/
\a/
 \|__)SHIP",

R"SHIP(     _o_
 _,---O---,_
 `         ')SHIP",

R"SHIP(    ___________
   /-/_"/-/_/-/|
  /"-/-_"/-_//||
 /__________/|/|
 |"|_'='-]:+|/||
 |-+-|.|_'-"||//
 |[".[:!+-'=|//
 |='!+|-:]|-|/
  ----------)SHIP",

".-=-.",

R"SHIP(======o==o  ___---___
      \\|| ============
      __\\| /a/
      \_______/)SHIP",


R"SHIP(___________________          _-_
\__(==========/_=_/ ____.---'---`---.____
            \_a\    \----._________.----/
              \a\   /aa/    `-_-'
          __,--`.`-'..'-_
         /____aaaaaaaaaa||
              `--.____,-')SHIP",

R"SHIP(  _      _-_      _
_|_|.---'---`---.|_|_
\----._________.----/
    `.aa`]-['aa,'
      `.'a_a`.'
       |a(_)a|
        `___')SHIP",

R"SHIP(   __________
  //a_||a_a|a`.
 //_/aa|[_]|aaa`.
/______|___|_____\
\______|___|___,-'
 [_][______][_>)SHIP",

R"SHIP(     _____
    /aaaaa\
   /|aaaaa|\
  /_|_____|_\
 _\_|_____|_/_
<_>`-\___/-'<_>)SHIP",

R"SHIP(               ___.----~~~----.___ 
,--------.-.,-'-------------------`
`--------"-'-.,---`~~~-----~~~'
 '---'-._____/)SHIP",

R"SHIP(   _...--'~~~'-.=========--.
,-'-,----,------\-,~~~~~[@`-\
`-.-`----`------|='======\_-|
   `---.______.-'          `|)SHIP",


R"SHIP(________________        _
\__(=======/_=_/____.--'-`--.___
          \a\   `,--,-.___.----'
        .--`\\--'../
       '---._____.|])SHIP",

R"SHIP(              __,--=====-.__
 _________,--'_,--'/_-__-___`--._
{======>________,._.-------------'
       ``---._____/)SHIP",

R"SHIP( _______
[_______].----~~~----.___
  /---/------------------`
.-------.-)~~-----~~~'
`-------"-')SHIP",

R"SHIP(       _________________________
 __.--'--,.-'a---------'--'--'a/`-.__
|__--(--(a|aaaaNX-74205aa====a/-----.`--._
   `---.__\aa--========)>aaaaa|__|___)_>aa`-.
           \_________|________/aaaaaaaa`----')SHIP",

};



/*============================================
 *  Planet & moon & space element ASCII art
 *============================================*/

const std::vector<std::string> SPACE_ART = {R"MOON(   _..._   
 .::::.a`.
:::::::.aa:
::::::::aa:
`::::::'a.'
  `'::'-')MOON",

R"MOON( ,-,-.
/.(a+.\
\a{.a*/
 `-`-')MOON",

 R"MOON( .-.
(a(
 `-')MOON",

R"PLANET(       _____
    .-'.aa':'-.
  .'':::a.:aaaa'.
 /aaa:::::'aaaaaa\
;.aaaa':'a`aaaaaaa;
|aaaaaaa'..aaaaaaa|
;a'aaaaaa::::.aaaa;
 \aaaaaaa'::::aaa/
  '.aaaaaa:::aa.'
    '-.___'_.-')PLANET",

R"PLANET( .-.,="``"=. 
 '=/_aaaaaaa\  
  |aa'=._aaaa|
   \aaaaa`=./`,
    '=.__.='a`=')PLANET",

R"CONST(         '
    *          .
           *       '
      *                *)CONST",

R"CONST(   *   '*
           *
                *
                       *
               *
                     *)CONST",

R"CONST(   .       . 
 +  :      .
           :       _
       .   !   '  (_)
          ,|.' 
-  -- ---(-O-`--- --  -
         ,`|'`.
       ,   !    .
           :       :  " 
           .     --+--
 .:        .       !)CONST",

R"COMET(                 .:'
    ....     _.::'
  .:-""-:.  (_.'
.:/aaaaaa\:.
:|aaaaaaaa|:
':\aaaaaa/:'
 '::-..-::'
   `''''`)COMET"

};



const std::vector<char> STAR_CHARS = {'.', '*', '\'', 'o', 'O', '+', '0'};

const std::string RenderConfig::ENDC = "\x1b[0m";
const std::vector<std::string> COLORSET = {"\x1b[31m", "\x1b[33m", "\x1b[32m", "\x1b[35m", "\x1b[37m", "\x1b[36m"};