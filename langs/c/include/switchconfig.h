
/* Variadic functoin */

/* an_im_dead() is Variadic function: to sound a fancy
 * a variadic function is one of indefinite "arity". 
 * printf is effectively equivalent
 */

void an_im_dead(const char *fmt, ...){
 
        int errno_save;
        va_list ap;
        errno_save = errno;
        
        va_start(ap, fmt);
        vfprintf(stdout, fmt, ap);
        fprintf(stdout, "\n");
        fflush(stdout);
        
        if(errno_save != 0)
        {
                fprintf(stdout, "(error = %d) : %s\n", errno_save,
                strerror(errno_save));
                fprintf(stdout,"\n");
                fflush(stdout);
        }
        va_end(ap);

        exit(1);
}
