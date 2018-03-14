require_extension('A');
require_rv64;
p->get_state()->load_reservation = RS1;
std::cerr << "reservation <- 0x" << std::hex << (RS1) << std::endl;
WRITE_RD(MMU.load_int64(RS1));
