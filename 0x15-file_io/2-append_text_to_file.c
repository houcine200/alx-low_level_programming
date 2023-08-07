#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    int op, wr;
    
    if(!filename)
        return (0);
    
    op = open(filename, O_CREAT | O_WRONLY | O_APPEND);
    
    if(op == -1)
        return (-1);
        
    if (text_content == NULL)
	    text_content = "";
	    
	wr = write(op, text_content, strlen(text_content));
        
    if(wr == -1)
        return (-1);
    
    close(op);
    
    return (1);
}
