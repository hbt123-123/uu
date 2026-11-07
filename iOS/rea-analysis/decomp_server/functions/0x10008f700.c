// rea decompile_all
// name: FUN_10008f700
// address: 0x10008f700
// body: available
// range: 0x10008f700-0x10008fa3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008f700(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_d8 [9];
  undefined4 local_cf;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  uint3 local_af;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_2 + 0x94) == '\x03') {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10008c16c,0,0xd00000000000009f,0x800000010087e740,0xd000000000000016,
                  0x800000010087ea10,0x20a,0);
    uVar18 = 0;
    lVar19 = 0;
    lVar17 = 0;
    lVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uStack_70 = 0xf000000000000000;
    local_78 = 0;
    goto LAB_10008f9f8;
  }
  uVar15 = *(undefined8 *)(param_2 + 100);
  uVar1 = *(uint *)(param_2 + 0x6c);
  uVar2 = *(uint *)(param_2 + 0x70);
  lVar8 = (long)*(int *)(param_2 + 0x74);
  uVar16 = *(undefined8 *)(param_2 + 0x84);
  lVar17 = (long)*(int *)(param_2 + 0x8c);
  FUN_1004517b8(auStack_d8);
  iVar3 = *(int *)(param_2 + 0x28);
  uVar18 = 1;
  if (iVar3 < 0x5a) {
    if (iVar3 != 0x1e) {
      if (iVar3 == 0x3c) {
        uVar18 = 2;
      }
      else {
LAB_10008f890:
        uVar18 = 0;
      }
    }
  }
  else if (iVar3 == 0x5a) {
    uVar18 = 3;
  }
  else {
    if (iVar3 != 0x90) goto LAB_10008f890;
    uVar18 = 4;
  }
  lVar7 = (long)*(int *)(param_2 + 0x2c);
  FUN_10043e6e4();
  uVar12 = param_3 >> 8;
  lVar19 = 5;
  if ((param_3 & 0x100) == 0) {
    lVar19 = lVar7;
  }
  bVar4 = (byte)param_3;
  FUN_10043e4f8();
  uVar13 = param_3 >> 8;
  if ((param_3 & 0x100) != 0) {
    lVar17 = 1;
  }
  bVar5 = (byte)param_3;
  FUN_10043e4f8();
  if ((param_3 & 0x100) != 0) {
    lVar8 = 1;
  }
  dVar20 = (double)(long)*(double *)(param_2 + 0x30);
  if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10008fa38);
    (*pcVar6)();
  }
  if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10008fa3c);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10008fa40);
    (*pcVar6)();
  }
  uVar9 = 1;
  if (0x16c16c16c16c16c <
      ((long)dVar20 * 0x4fa4fa4fa4fa4fa5 + 0x2d82d82d82d82d8U >> 2 |
      (long)dVar20 * 0x4fa4fa4fa4fa4fa5 << 0x3e)) {
    uVar9 = 2;
  }
  uVar10 = (ulong)CONCAT34(CONCAT12(local_c9,local_cb),local_cf) << 8 | 1;
  uVar11 = CONCAT71(CONCAT34(CONCAT12(local_b9,local_bb),local_bf),bVar4 & 1 | (byte)uVar12 & 1);
  uVar12 = (ulong)uVar1 << 0x20 | (ulong)local_af << 8 | (ulong)(bVar5 & 1 | (byte)uVar13 & 1);
  uVar13 = (ulong)uVar2 << 0x20 | (ulong)CONCAT12(local_95,local_97) << 8 |
           (ulong)((byte)param_3 & 1 | (byte)(param_3 >> 8) & 1);
  uVar14 = (ulong)CONCAT34(CONCAT12(local_79,local_7b),local_7f) << 8 | 1;
LAB_10008f9f8:
  *param_1 = uVar18;
  param_1[1] = uVar10;
  param_1[2] = lVar19;
  param_1[3] = uVar11;
  param_1[4] = lVar17;
  param_1[5] = uVar12;
  param_1[6] = uVar15;
  param_1[7] = lVar8;
  param_1[8] = uVar13;
  param_1[9] = uVar16;
  param_1[10] = uVar9;
  param_1[0xb] = uVar14;
  param_1[0xd] = uStack_70;
  param_1[0xc] = local_78;
  return;
}

