#include "header.h"
#include <string>
#include <iostream>
#include <sstream> 

using std::cout;
using std::endl;
std::string here = "here\n";


void test_xml()
{
	char node_value[99999];
	xmlDocPtr doc = NULL;
	doc = xmlNewDoc(BAD_CAST "1.0");
	xmlNodePtr root_node = xmlNewNode(NULL, BAD_CAST "server_db");
	xmlDocSetRootElement(doc,root_node);
	xmlNodePtr node = root_node;

	int i =1;
	snprintf(node_value, sizeof(node_value),"%i",i);
	xmlNewChild(node, NULL, BAD_CAST "numjobs", BAD_CAST node_value);
	
	xmlBuffer *xml_buffer = xmlBufferCreate();
	xmlOutputBuffer *outputBuffer = xmlOutputBufferCreateBuffer( xml_buffer, NULL );
	xmlSaveFormatFileTo( outputBuffer, doc, "utf-8", 1 );
	std::string xml_out_str( (char*) xml_buffer->content, xml_buffer->use );
	cout<<xml_out_str<<endl;


}
int main()
{
	//test_xml();
	std::ostringstream str;
	str<<1;
	cout<<str.str()<<endl;
	str.str("");
	str<<2;
	cout<<str.str().c_str()<<endl;
	
	
	return 0 ;
}
