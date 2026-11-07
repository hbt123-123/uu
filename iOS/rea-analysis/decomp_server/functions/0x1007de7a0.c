// rea decompile_all
// name: _mach_msg
// address: 0x1007de7a0
// body: available
// range: 0x1007de7a0-0x1007de7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_msg_return_t
_mach_msg(mach_msg_header_t *msg,mach_msg_option_t option,mach_msg_size_t send_size,
         mach_msg_size_t rcv_size,mach_port_name_t rcv_name,mach_msg_timeout_t timeout,
         mach_port_name_t notify)

{
  mach_msg_return_t mVar1;
  
  mVar1 = (mach_msg_return_t)msg;
                    /* WARNING: Could not recover jumptable at 0x0001007de7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_msg_100a1ebb8)(mVar1,option,send_size,rcv_size,rcv_name,timeout,notify);
  return mVar1;
}

