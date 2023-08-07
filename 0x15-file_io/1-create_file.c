#include "main.h"

/**
 * create_file - Create a file and write content to it
 * @filename: The name of the file to create
 * @text_content: The text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, bw;

    /* Check if the filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Open the file with the specified permissions (rw-------) */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    /* Check if opening the file failed */
    if (fd == -1)
        return (-1);

    /* If text_content is NULL, create an empty file */
    if (text_content == NULL)
        text_content = "";

    /* Write the text_content to the file */
    bw = write(fd, text_content, strlen(text_content));

    /* Check if writing to the file failed */
    if (bw == -1)
    {
        close(fd);
        return (-1);
    }

    /* Close the file and return success (1) */
    close(fd);
    return (1);
}

