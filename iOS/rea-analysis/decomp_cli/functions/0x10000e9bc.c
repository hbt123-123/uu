// rea decompile_all
// name: FUN_10000e9bc
// address: 0x10000e9bc
// body: available
// range: 0x10000e9bc-0x10000ea9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000e9bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 2:
    uVar1 = 0;
switchD_10000e9e0_caseD_65:
    return uVar1;
  default:
    return 0x17;
  case 0x65:
    goto switchD_10000e9e0_caseD_65;
  case 0x66:
    return 2;
  case 0x68:
    return 3;
  case 0x69:
    return 4;
  case 0x6a:
    return 5;
  case 0x6c:
    return 6;
  case 0x6d:
    return 7;
  case 0x6e:
    return 8;
  case 0x70:
    return 9;
  case 0x71:
    return 10;
  case 0x73:
    return 0xb;
  case 0x76:
    return 0xc;
  case 0x77:
    return 0xd;
  case 0x78:
    return 0xe;
  case 0x79:
    return 0xf;
  case 0x7a:
    return 0x10;
  case 0x7b:
    return 0x11;
  case 0x7c:
    return 0x12;
  case 0x7d:
    return 0x13;
  case 0x7e:
    return 0x14;
  case 0x7f:
    return 0x15;
  case 199:
    return 0x16;
  }
}

