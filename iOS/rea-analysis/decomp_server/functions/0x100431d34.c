// rea decompile_all
// name: FUN_100431d34
// address: 0x100431d34
// body: available
// range: 0x100431d34-0x100431e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100431d34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_2[8];
  if ((((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (*(byte *)(param_2 + 9) == 0xff)
     ) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    uVar3 = param_2[3];
    uVar10 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    bVar6 = *(byte *)(param_2 + 9) & 1;
    switchD_10017a950::caseD_83(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,bVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar7;
    *(byte *)(param_1 + 9) = bVar6;
  }
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  FUN_100008184(uVar8,uVar9);
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  return param_1;
}

