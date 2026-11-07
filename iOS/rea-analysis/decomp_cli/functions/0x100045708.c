// rea decompile_all
// name: FUN_100045708
// address: 0x100045708
// body: available
// range: 0x100045708-0x1000457cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100045708(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar2 = *(undefined1 *)((long)param_2 + 0x11);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar3 = *(undefined1 *)((long)param_1 + 0x11);
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = uVar2;
  FUN_100044b38(uVar5,uVar6,uVar4,uVar3,FUN_10002d0ec);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  uVar5 = param_2[4];
  uVar6 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar2 = *(undefined1 *)((long)param_2 + 0x39);
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar3 = *(undefined1 *)((long)param_1 + 0x39);
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  uVar4 = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  *(undefined1 *)((long)param_1 + 0x39) = uVar2;
  FUN_100044b38(uVar5,uVar6,uVar4,uVar3,FUN_10002c9fc);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  uVar5 = param_2[9];
  uVar6 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

