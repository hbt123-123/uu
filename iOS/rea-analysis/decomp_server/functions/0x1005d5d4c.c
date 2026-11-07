// rea decompile_all
// name: FUN_1005d5d4c
// address: 0x1005d5d4c
// body: available
// range: 0x1005d5d4c-0x1005d5dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005d5d4c(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (uint)*(byte *)(param_2 + 0xc);
  if (1 < *(byte *)(param_2 + 0xc)) {
    uVar1 = *param_2 + 2;
  }
  if (uVar1 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 10);
    lVar3 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar3;
    param_1[5] = uVar2;
    (*(code *)**(undefined8 **)(lVar3 + -8))();
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (uVar1 == 0) {
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    FUN_100008184(uVar2,uVar4);
    *param_1 = uVar2;
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar2 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar2;
    *(char *)(param_1 + 6) = (char)param_2[0xc];
  }
  return param_1;
}

