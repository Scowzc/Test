#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cJSON.h>

void Create_cJSON() {
    cJSON *root;
    cJSON *result;
    cJSON *p1,*p2,*p3;
    root = cJSON_CreateObject(); //创建一个json对象
    result = cJSON_CreateArray(); 
    p1 = cJSON_CreateObject();
    p2 = cJSON_CreateObject();
    p3 = cJSON_CreateObject();
    cJSON_AddStringToObject(p1,"sex","male");
    cJSON_AddStringToObject(p1,"name","小帅");
    cJSON_AddStringToObject(p1,"year","1998");
    cJSON_AddStringToObject(p2,"sex","male");
    cJSON_AddStringToObject(p2,"name","小雷");
    cJSON_AddStringToObject(p2,"year","1999");
    cJSON_AddStringToObject(p3,"sex","female");
    cJSON_AddStringToObject(p3,"name","小美");
    cJSON_AddStringToObject(p3,"year","2000");
    cJSON_AddItemToArray(result,p1);
    cJSON_AddItemToArray(result,p2);
    cJSON_AddItemToArray(result,p3);
    cJSON_AddStringToObject(root,"people","3");
    cJSON_AddItemToObject(root,"information",result);
    cJSON_AddStringToObject(root,"where","anywhere");
    char *buf = cJSON_Print(root);
    printf(buf);
    FILE *f = fopen("test.json","w");
    fwrite(buf,strlen(buf),1,f);
    fclose(f);
    free(buf);
    cJSON_Delete(root);
}

void Parsing_cJSON() {
    FILE *f = fopen("./test.json","rb");
    long len;
    char *content;
    cJSON *root;
    fseek(f,0,SEEK_END);
    len = ftell(f);
    fseek(f,0,SEEK_SET);
    content = (char*) malloc(len+1);
    fread(content,1,len,f);
    fclose(f);
    root = cJSON_Parse(content);
    free(content);
    if(!root) {
        printf("Error: [%s]\n",cJSON_GetErrorPtr());
        return ;
    }
    printf(cJSON_Print(root));
    cJSON_Delete(root);
}
int main(){
    Create_cJSON();
    Parsing_cJSON();
    return 0;
}