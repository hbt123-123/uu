// rea decompile_all
// name: FUN_10003ab2c
// address: 0x10003ab2c
// body: available
// range: 0x10003ab2c-0x10003abff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10003ab2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10002d088(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  FUN_10002d088(uVar1,uVar2,uVar3);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar3;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = *(undefined1 *)(param_2 + 8);
  FUN_10002c9dc(uVar1,uVar2,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = *(undefined1 *)((long)param_2 + 0x59);
  uVar4 = *(undefined1 *)(param_2 + 0xb);
  FUN_10002d098(uVar1,uVar2,uVar4,uVar3);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined2 *)((long)param_1 + 0x5a) = *(undefined2 *)((long)param_2 + 0x5a);
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}

