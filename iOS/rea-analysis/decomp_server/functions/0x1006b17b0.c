// rea decompile_all
// name: thunk_FUN_1006afc84
// address: 0x1006b17b0
// body: available
// range: 0x1006b17b0-0x1006b17b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * thunk_FUN_1006afc84(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = "No error detected";
  switch(param_1) {
  case 0:
    goto switchD_1006afcb0_caseD_0;
  case 1:
    return "Error (generic)";
  default:
    pcVar1 = "Unspecified error code";
switchD_1006afcb0_caseD_0:
    return pcVar1;
  case 10:
    return "Unknown frame descriptor";
  case 0xc:
    return "Version not supported";
  case 0xe:
    return "Unsupported frame parameter";
  case 0x10:
    return "Frame requires too much memory for decoding";
  case 0x14:
    return "Corrupted block detected";
  case 0x16:
    return "Restored data doesn\'t match checksum";
  case 0x1e:
    return "Dictionary is corrupted";
  case 0x20:
    return "Dictionary mismatch";
  case 0x22:
    return "Cannot create Dictionary from provided samples";
  case 0x28:
    return "Unsupported parameter";
  case 0x2a:
    return "Parameter is out of bound";
  case 0x2c:
    return "tableLog requires too much memory : unsupported";
  case 0x2e:
    return "Unsupported max Symbol Value : too large";
  case 0x30:
    return "Specified maxSymbolValue is too small";
  case 0x3c:
    return "Operation not authorized at current processing stage";
  case 0x3e:
    return "Context should be init first";
  case 0x40:
    return "Allocation error : not enough memory";
  case 0x42:
    return "workSpace buffer is not large enough";
  case 0x46:
    return "Destination buffer is too small";
  case 0x48:
    return "Src size is incorrect";
  case 0x4a:
    return "Operation on NULL destination buffer";
  case 100:
    return "Frame index is too large";
  case 0x66:
    return "An I/O error occurred when reading/seeking";
  }
}

