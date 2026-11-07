// rea decompile_all
// name: FUN_1005349e4
// address: 0x1005349e4
// body: available
// range: 0x1005349e4-0x100534adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005349e4(int param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if (0xfffffff5 < param_1 - 0x3aU) {
    bVar1 = 0;
    uVar2 = (ulong)(param_1 - 0x30);
    goto LAB_100534a2c;
  }
  bVar1 = 0;
  uVar2 = 10;
  if (param_1 < 0x61) {
    if (param_1 < 0x44) {
      if (param_1 == 0x41) goto LAB_100534a2c;
      if (param_1 == 0x42) {
LAB_100534ac4:
        bVar1 = 0;
        uVar2 = 0xb;
        goto LAB_100534a2c;
      }
      if (param_1 == 0x43) {
LAB_100534a64:
        bVar1 = 0;
        uVar2 = 0xc;
        goto LAB_100534a2c;
      }
    }
    else {
      if (param_1 == 0x44) {
LAB_100534ab8:
        bVar1 = 0;
        uVar2 = 0xd;
        goto LAB_100534a2c;
      }
      if (param_1 == 0x45) {
LAB_100534ad0:
        bVar1 = 0;
        uVar2 = 0xe;
        goto LAB_100534a2c;
      }
      if (param_1 == 0x46) {
LAB_100534aac:
        bVar1 = 0;
        uVar2 = 0xf;
        goto LAB_100534a2c;
      }
    }
  }
  else if (param_1 < 100) {
    if (param_1 == 0x61) goto LAB_100534a2c;
    if (param_1 == 0x62) goto LAB_100534ac4;
    if (param_1 == 99) goto LAB_100534a64;
  }
  else {
    if (param_1 == 100) goto LAB_100534ab8;
    if (param_1 == 0x65) goto LAB_100534ad0;
    if (param_1 == 0x66) goto LAB_100534aac;
  }
  uVar2 = 0;
  bVar1 = 1;
LAB_100534a2c:
  return uVar2 | (ulong)bVar1 << 0x20;
}

