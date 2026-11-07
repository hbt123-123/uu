// rea decompile_all
// name: FUN_10043205c
// address: 0x10043205c
// body: available
// range: 0x10043205c-0x10043212b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10043205c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = param_1[8];
  bVar6 = *(byte *)(param_1 + 9);
  uVar9 = param_2[8];
  bVar7 = *(byte *)(param_2 + 9);
  if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar6 != 0xff)) {
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar7 != 0xff)) {
      uVar10 = *param_1;
      uVar2 = param_1[1];
      uVar13 = param_1[2];
      uVar3 = param_1[3];
      uVar12 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar11 = *param_2;
      uVar15 = param_2[3];
      uVar14 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar11;
      param_1[3] = uVar15;
      param_1[2] = uVar14;
      uVar11 = param_2[4];
      uVar15 = param_2[7];
      uVar14 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar11;
      param_1[7] = uVar15;
      param_1[6] = uVar14;
      param_1[8] = uVar9;
      *(byte *)(param_1 + 9) = bVar7 & 1;
      switchD_10004048c::caseD_6a
                (uVar10,uVar2,uVar13,uVar3,uVar12,uVar4,uVar1,uVar5,uVar8,bVar6 & 1);
      goto LAB_100432108;
    }
    FUN_100432014(param_1);
  }
  uVar10 = param_2[4];
  uVar12 = param_2[7];
  uVar13 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar12;
  param_1[6] = uVar13;
  uVar10 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar10;
  uVar12 = *param_2;
  uVar13 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar13;
  param_1[2] = uVar10;
LAB_100432108:
  uVar10 = param_1[10];
  uVar13 = param_1[0xb];
  uVar12 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar12;
  FUN_100006cdc(uVar10,uVar13);
  return param_1;
}

