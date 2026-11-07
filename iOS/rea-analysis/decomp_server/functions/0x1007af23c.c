// rea decompile_all
// name: FUN_1007af23c
// address: 0x1007af23c
// body: available
// range: 0x1007af23c-0x1007af2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_1007af23c(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  double dVar3;
  
  if (((param_1 & 1) != 0) && ((0xb3UL >> (param_1 >> 1 & 7) & 1) == 0)) {
    return (double)((long)param_1 >> 8);
  }
  uVar1 = param_1;
  _CFNumberGetType();
  switch(uVar1) {
  case 1:
  case 7:
    iVar2 = (int)*(char *)(param_1 + 0x10);
    goto LAB_1007af2c0;
  case 2:
  case 8:
    iVar2 = (int)*(short *)(param_1 + 0x10);
    goto LAB_1007af2c0;
  case 3:
  case 9:
    iVar2 = *(int *)(param_1 + 0x10);
LAB_1007af2c0:
    dVar3 = (double)iVar2;
    break;
  case 4:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    dVar3 = (double)*(long *)(param_1 + 0x10);
    break;
  case 5:
  case 0xc:
    dVar3 = (double)*(float *)(param_1 + 0x10);
    break;
  case 6:
  case 0xd:
  case 0x10:
    dVar3 = *(double *)(param_1 + 0x10);
    break;
  default:
    dVar3 = NAN;
  }
  return dVar3;
}

