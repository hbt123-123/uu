// rea decompile_all
// name: FUN_1007a6740
// address: 0x1007a6740
// body: available
// range: 0x1007a6740-0x1007a68df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1007a6740(int param_1)

{
  switch(param_1) {
  case 0x10004002:
    return "The specified receive_name was invalid.";
  case 0x10004003:
switchD_1007a677c_caseD_10000004:
    return "The timeout interval expired.";
  case 0x10004004:
    return 
    "When using MACH_RCV_LARGE, the message was larger than receive_limit. The message is left queued, and its actual size is returned in the message header/message body."
    ;
  case 0x10004005:
switchD_1007a677c_caseD_10000007:
    return "A software interrupt occurred.";
  case 0x10004006:
    return "receive_name specified a receive right which was moved into a port set during the call."
    ;
  case 0x10004007:
    return "When using MACH_RCV_NOTIFY, the notify argument did not denote a valid receive right.";
  case 0x10004008:
    return "The specified message buffer was not writable.";
  case 0x10004009:
    return "The caller lost the rights specified by receive_name.";
  case 0x1000400a:
    return "The specified port was a member of a port set.";
  case 0x1000400b:
    return "A resource shortage prevented the reception of the port rights in the message header.";
  case 0x1000400c:
    return 
    "A resource shortage prevented the reception of a port right or out-of- line memory region in the message body."
    ;
  case 0x1000400d:
    return 
    "When using MACH_RCV_OVERWRITE, one or more scatter list descriptors did not have the type matching the corresponding incoming message descriptor or had an invalid copy (disposition) field."
    ;
  case 0x1000400e:
    return 
    "When not using MACH_RCV_LARGE with MACH_RCV_OVERWRITE, one or more scatter list descriptors specified an overwrite region smaller than the corresponding incoming region. The message was de-queued and destroyed."
    ;
  case 0x1000400f:
    return 
    "The trailer type desired, or the number of trailer elements desired, is not supported by the kernel."
    ;
  }
  switch(param_1) {
  case 0x10000002:
    return "The supplied message buffer was not readable.";
  case 0x10000003:
    return "The msgh_remote_port value was invalid.";
  case 0x10000004:
    goto switchD_1007a677c_caseD_10000004;
  case 0x10000007:
    goto switchD_1007a677c_caseD_10000007;
  case 0x10000008:
    return "The last data item in the message ran over the end of the message.";
  case 0x10000009:
    return "The msgh_local_port value was invalid.";
  case 0x1000000a:
    return "The message body specified a port right which the caller didn\'t possess.";
  case 0x1000000b:
    return "When using MACH_SEND_CANCEL, the notify argument did not denote a valid receive right.";
  case 0x1000000c:
    return "The message body specified out-of-line data that was not readable.";
  case 0x1000000d:
    return "A resource shortage prevented the kernel from allocating a message buffer.";
  case 0x1000000f:
    return "A kernel processed descriptor was invalid.";
  case 0x10000010:
    return "The msgh_bits value was invalid.";
  case 0x10000011:
    return 
    "The trailer to be sent does not correspond to the current kernel format, or the sending task does not have the privilege to supply the message attributes."
    ;
  default:
    if (param_1 == 0) {
      return "Success.";
    }
  case 0x10000005:
  case 0x10000006:
  case 0x1000000e:
    return "Unknown error.";
  }
}

