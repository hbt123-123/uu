// rea decompile_all
// name: FUN_1004bd8f8
// address: 0x1004bd8f8
// body: available
// range: 0x1004bd8f8-0x1004bd9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1004bd8f8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  FUN_100008184(uVar2,uVar1);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 6);
  FUN_100008184(uVar4,uVar5);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  uVar3 = *(ulong *)(param_2 + 0xe);
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    FUN_100008184(uVar2,uVar3);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    *(ulong *)(param_1 + 0xe) = uVar3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  }
  return param_1;
}

