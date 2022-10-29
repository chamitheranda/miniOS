#include "frame_buffer.c"
#include "serial_port.c"

void kmain(){
    
	char buffer[] = " This is a message which needs to display in frame buffer !!  ";
	fb_write(buffer,sizeof(buffer));
	/*fb_write_cell(0,'C',2,1);
	fb_write_cell(2,'H',2,1);
	fb_write_cell(4,'A',2,1);
	fb_write_cell(6,'M',2,1);
	fb_write_cell(8,'I',2,1);
	fb_write_cell(10,'T',2,1);
	fb_write_cell(12,'H',2,1);
	fb_write_cell(14,'E',2,1);
	fb_write_cell(16,'R',2,1);
	fb_write_cell(18,'A',2,1);
	fb_write_cell(20,'N',2,1);
	fb_write_cell(22,'D',2,1);
	fb_write_cell(24,'A',2,1);*/
        fb_move_cursor(1000);
	serial_configure(SERIAL_COM1_BASE, Baud_115200);
  	serial_write(SERIAL_COM1_BASE, buffer, sizeof(buffer));
  	
}
