proc Echo_Server {port} {
	global echo 
	set echo(main) [ socket -server EchoAccept $port ]
}
proc EchoAccept {sock addr port} {
	global echo 
	puts "Accepts $sock from $addr port $port"
	set echo(addr,$sock) [list $addr $port]
