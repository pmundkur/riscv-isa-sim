require_extension('A');
std::cerr << "reservation: 0x" << std::hex << p->get_state()->load_reservation << ", key=0x" << (RS1) << std::endl;
if (RS1 == p->get_state()->load_reservation)
{
  MMU.store_uint32(RS1, RS2);
  WRITE_RD(0);
}
else
  WRITE_RD(1);
