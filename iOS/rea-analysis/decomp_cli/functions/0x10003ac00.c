// rea decompile_all
// name: FUN_10003ac00
// address: 0x10003ac00
// body: available
// range: 0x10003ac00-0x10003ad23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10003ac00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_10002d088(uVar8,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = *(undefined1 *)(param_1 + 2);
  *param_1 = uVar8;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_10002d0ec(uVar1,uVar3,uVar5);
  uVar8 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  FUN_10002d088(uVar8,uVar2,uVar4);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar5 = *(undefined1 *)(param_1 + 5);
  param_1[3] = uVar8;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar4;
  FUN_10002d0ec(uVar1,uVar3,uVar5);
  uVar8 = param_2[6];
  uVar2 = param_2[7];
  uVar4 = *(undefined1 *)(param_2 + 8);
  FUN_10002c9dc(uVar8,uVar2,uVar4);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  uVar5 = *(undefined1 *)(param_1 + 8);
  param_1[6] = uVar8;
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = uVar4;
  FUN_10002c9fc(uVar1,uVar3,uVar5);
  uVar8 = param_2[9];
  uVar2 = param_2[10];
  uVar4 = *(undefined1 *)((long)param_2 + 0x59);
  uVar5 = *(undefined1 *)(param_2 + 0xb);
  FUN_10002d098(uVar8,uVar2,uVar5,uVar4);
  uVar1 = param_1[9];
  uVar3 = param_1[10];
  uVar6 = *(undefined1 *)((long)param_1 + 0x59);
  param_1[9] = uVar8;
  param_1[10] = uVar2;
  uVar7 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar5;
  *(undefined1 *)((long)param_1 + 0x59) = uVar4;
  FUN_10002d0fc(uVar1,uVar3,uVar7,uVar6);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  param_1[0xc] = param_2[0xc];
  uVar8 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}

