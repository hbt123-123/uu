// rea decompile_all
// name: FUN_100045ca4
// address: 0x100045ca4
// body: available
// range: 0x100045ca4-0x100045dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100045ca4(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = *(undefined1 *)((long)param_2 + 0x11);
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100044b24(uVar8,uVar2,uVar5,uVar4,FUN_10002d088);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar6 = *(undefined1 *)((long)param_1 + 0x11);
  *param_1 = uVar8;
  param_1[1] = uVar2;
  uVar7 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  *(undefined1 *)((long)param_1 + 0x11) = uVar4;
  FUN_100044b38(uVar1,uVar3,uVar7,uVar6,FUN_10002d0ec);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  param_1[3] = param_2[3];
  uVar8 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_2[5];
  uVar2 = param_2[6];
  uVar4 = *(undefined1 *)(param_2 + 7);
  FUN_10002d088(uVar8,uVar2,uVar4);
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  uVar5 = *(undefined1 *)(param_1 + 7);
  param_1[5] = uVar8;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = uVar4;
  FUN_10002d0ec(uVar1,uVar3,uVar5);
  uVar8 = param_2[8];
  uVar2 = param_2[9];
  uVar4 = *(undefined1 *)(param_2 + 10);
  FUN_10002d088(uVar8,uVar2,uVar4);
  uVar1 = param_1[8];
  uVar3 = param_1[9];
  uVar5 = *(undefined1 *)(param_1 + 10);
  param_1[8] = uVar8;
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = uVar4;
  FUN_10002d0ec(uVar1,uVar3,uVar5);
  return param_1;
}

