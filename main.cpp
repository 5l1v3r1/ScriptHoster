
#include <stdio.h>
#include <string.h>

#include "ScriptHoster.h"
#include "ScriptResolve.h"
#include "ScriptSyntax.h"

void main(long parm_count,char** parm_list) {
    if (2==parm_count) {
        if (load_script(parm_list[1])) {//"C:\\Users\\Administrator\\Desktop\\code_file\\SmallSystem_ScriptHoster\\Debug\\�����ļ�.txt")){  //parm_list[1])) {
            printf("execute ok!");
            clean_script();
        } else
            printf("load err");
    }
}
