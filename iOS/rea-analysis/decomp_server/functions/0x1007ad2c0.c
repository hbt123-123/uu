// rea decompile_all
// name: FUN_1007ad2c0
// address: 0x1007ad2c0
// body: available
// range: 0x1007ad2c0-0x1007ad5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1007ad2c0(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KERN_SUCCESS";
  switch(param_1) {
  case 0:
    goto switchD_1007ad2e8_caseD_0;
  case 1:
    return "KERN_INVALID_ADDRESS";
  case 2:
    return "KERN_PROTECTION_FAILURE";
  case 3:
    return "KERN_NO_SPACE";
  case 4:
    return "KERN_INVALID_ARGUMENT";
  case 5:
    return "KERN_FAILURE";
  case 6:
    return "KERN_RESOURCE_SHORTAGE";
  case 7:
    return "KERN_NOT_RECEIVER";
  case 8:
    return "KERN_NO_ACCESS";
  case 9:
    return "KERN_MEMORY_FAILURE";
  case 10:
    return "KERN_MEMORY_ERROR";
  case 0xb:
    return "KERN_ALREADY_IN_SET";
  case 0xc:
    return "KERN_NOT_IN_SET";
  case 0xd:
    return "KERN_NAME_EXISTS";
  case 0xe:
    return "KERN_ABORTED";
  case 0xf:
    return "KERN_INVALID_NAME";
  case 0x10:
    return "KERN_INVALID_TASK";
  case 0x11:
    return "KERN_INVALID_RIGHT";
  case 0x12:
    return "KERN_INVALID_VALUE";
  case 0x13:
    return "KERN_UREFS_OVERFLOW";
  case 0x14:
    return "KERN_INVALID_CAPABILITY";
  case 0x15:
    return "KERN_RIGHT_EXISTS";
  case 0x16:
    return "KERN_INVALID_HOST";
  case 0x17:
    return "KERN_MEMORY_PRESENT";
  case 0x18:
    return "KERN_MEMORY_DATA_MOVED";
  case 0x19:
    return "KERN_MEMORY_RESTART_COPY";
  case 0x1a:
    return "KERN_INVALID_PROCESSOR_SET";
  case 0x1b:
    return "KERN_POLICY_LIMIT";
  case 0x1c:
    return "KERN_INVALID_POLICY";
  case 0x1d:
    return "KERN_INVALID_OBJECT";
  case 0x1e:
    return "KERN_ALREADY_WAITING";
  case 0x1f:
    return "KERN_DEFAULT_SET";
  case 0x20:
    return "KERN_EXCEPTION_PROTECTED";
  case 0x21:
    return "KERN_INVALID_LEDGER";
  case 0x22:
    return "KERN_INVALID_MEMORY_CONTROL";
  case 0x23:
    return "KERN_INVALID_SECURITY";
  case 0x24:
    return "KERN_NOT_DEPRESSED";
  case 0x25:
    return "KERN_TERMINATED";
  case 0x26:
    return "KERN_LOCK_SET_DESTROYED";
  case 0x27:
    return "KERN_LOCK_UNSTABLE";
  case 0x28:
    return "KERN_LOCK_OWNED";
  case 0x29:
    return "KERN_LOCK_OWNED_SELF";
  case 0x2a:
    return "KERN_SEMAPHORE_DESTROYED";
  case 0x2b:
    return "KERN_RPC_SERVER_TERMINATED";
  case 0x2c:
    return "KERN_RPC_TERMINATE_ORPHAN";
  case 0x2d:
    return "KERN_RPC_CONTINUE_ORPHAN";
  case 0x2e:
    return "KERN_NOT_SUPPORTED";
  case 0x2f:
    return "KERN_NODE_DOWN";
  case 0x30:
    return "KERN_NOT_WAITING";
  case 0x31:
    return "KERN_OPERATION_TIMED_OUT";
  case 0x32:
    return "KERN_CODESIGN_ERROR";
  default:
    switch(param_1) {
    case 0x101:
      return "EXC_ARM_DA_ALIGN";
    case 0x102:
      return "EXC_ARM_DA_DEBUG";
    case 0x103:
      return "EXC_ARM_SP_ALIGN";
    case 0x104:
      return "EXC_ARM_SWP";
    case 0x105:
      return "EXC_ARM_PAC_FAIL";
    default:
      pcVar1 = (char *)0x0;
    }
switchD_1007ad2e8_caseD_0:
    return pcVar1;
  }
}

