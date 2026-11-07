// rea decompile_all
// name: FUN_1006ba980
// address: 0x1006ba980
// body: available
// range: 0x1006ba980-0x1006baa27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006ba980(ulong param_1,int param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  uVar2 = param_1;
  FUN_1006b70ac(param_1,0);
  if (0xffffffffffffff88 < uVar2) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x428) != 0) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (param_2 < -0x20000) {
    param_2 = -0x20000;
  }
  else if (param_2 < 0x17) {
    if (param_2 == 0) goto LAB_1006ba9ec;
  }
  else {
    param_2 = 0x16;
  }
  *(int *)(param_1 + 0x3c) = param_2;
LAB_1006ba9ec:
  if (*(int *)(param_1 + 0x428) != 0) {
    return 0xffffffffffffffc4;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 + 1;
  }
  *(long *)(param_1 + 0x180) = lVar1;
  return 0;
}

