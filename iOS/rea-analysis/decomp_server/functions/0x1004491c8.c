// rea decompile_all
// name: FUN_1004491c8
// address: 0x1004491c8
// body: available
// range: 0x1004491c8-0x1004492bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004491c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  bVar4 = *(byte *)((long)param_2 + 0x34);
  if (((bVar4 >> 1 == 0 && uVar5 >> 0x21 == 0) && (uVar1 & 0x3000000000000000) == 0x3000000000000000
      ) && (uVar2 & 0xfffffffe00000000) == 0x7ffffffe00000000) {
    uVar7 = *param_2;
    uVar6 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    param_1[3] = uVar6;
    param_1[2] = uVar8;
    uVar7 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar7;
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 6);
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uVar6 = param_2[2];
    FUN_10017ac64(uVar7,uVar8,uVar6,uVar1,uVar2,uVar5,(ulong)CONCAT14(bVar4,uVar3));
    *param_1 = uVar7;
    param_1[1] = uVar8;
    param_1[2] = uVar6;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    param_1[5] = uVar5;
    *(byte *)((long)param_1 + 0x34) = bVar4;
    *(undefined4 *)(param_1 + 6) = uVar3;
  }
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  FUN_100008184(uVar7,uVar8);
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  return param_1;
}

