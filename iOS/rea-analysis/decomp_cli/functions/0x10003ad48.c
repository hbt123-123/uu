// rea decompile_all
// name: FUN_10003ad48
// address: 0x10003ad48
// body: available
// range: 0x10003ad48-0x10003ae0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10003ad48(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10002d0ec(uVar5,uVar6,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar2 = *(undefined1 *)(param_1 + 5);
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 5) = uVar1;
  FUN_10002d0ec(uVar5,uVar6,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 8);
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  uVar2 = *(undefined1 *)(param_1 + 8);
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  *(undefined1 *)(param_1 + 8) = uVar1;
  FUN_10002c9fc(uVar5,uVar6,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  uVar2 = *(undefined1 *)((long)param_2 + 0x59);
  uVar5 = param_1[9];
  uVar6 = param_1[10];
  uVar3 = *(undefined1 *)((long)param_1 + 0x59);
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  uVar4 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  *(undefined1 *)((long)param_1 + 0x59) = uVar2;
  FUN_10002d0fc(uVar5,uVar6,uVar4,uVar3);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  uVar5 = param_2[0xd];
  uVar6 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

