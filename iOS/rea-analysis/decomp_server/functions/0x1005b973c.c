// rea decompile_all
// name: FUN_1005b973c
// address: 0x1005b973c
// body: available
// range: 0x1005b973c-0x1005b97db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b973c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (*(byte *)(param_2 + 3) == 0xff)
     ) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar2 = param_2[1];
    bVar1 = *(byte *)(param_2 + 3) & 1;
    FUN_10051feb8(uVar4,uVar2,uVar3,bVar1);
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    *(byte *)(param_1 + 3) = bVar1;
  }
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  FUN_100008184(uVar4,uVar2);
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  return param_1;
}

