// rea decompile_all
// name: FUN_1006aad98
// address: 0x1006aad98
// body: available
// range: 0x1006aad98-0x1006aaf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aaf5c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aad98(long param_1,undefined8 param_2,undefined1 *param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 *local_e8 [2];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  byte abStack_90 [56];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_e8[0] = auStack_b8;
  local_e8[1] = auStack_d8;
  cVar2 = *param_4;
  cVar3 = param_4[1];
  lVar12 = (long)cVar3;
  sVar4 = *(short *)(param_4 + 2);
  iVar1 = sVar4 + 0xe;
  if (-8 < sVar4) {
    iVar1 = sVar4 + 7;
  }
  FUN_1006aaf60(auStack_b8,param_2,iVar1 >> 3);
  FUN_1006aaf60(&uStack_98,param_1,lVar12);
  FUN_1006aaf60(&uStack_98 + cVar2,param_1 + lVar12,lVar12);
  puVar7 = auStack_b8;
  FUN_1006aaffc(puVar7,auStack_b8,auStack_d8,param_4);
  if (PTR_FUN_100aba058 == (undefined *)0x0) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    puVar13 = local_e8[(long)puVar7];
    puVar8 = puVar13;
    FUN_1006aabc4(puVar13,param_4 + 8,(long)cVar2);
    if ((int)puVar8 == 0) goto LAB_1006aaf28;
    sVar4 = *(short *)(param_4 + 2);
  }
  FUN_1006ab0c8(&uStack_98,&uStack_98,local_e8[(ulong)puVar7 ^ 1],puVar13,(int)(short)(sVar4 + 1),
                param_4);
  uVar9 = (uint)cVar3;
  if (0 < (int)uVar9) {
    lVar12 = (long)(int)cVar3;
    uVar11 = cVar3 * 8;
    do {
      uVar9 = uVar9 - 1;
      uVar11 = uVar11 - 8;
      *param_3 = (char)(*(ulong *)((long)&uStack_98 + (ulong)(uVar9 & 0xfffffff8)) >>
                       (uVar11 & 0x38));
      lVar12 = lVar12 + -1;
      param_3 = param_3 + 1;
    } while (lVar12 != 0);
  }
  if (0 < (char)(*param_4 << 1)) {
    lVar12 = (long)(int)(char)(*param_4 << 1);
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    pbVar10 = (byte *)&uStack_98;
    do {
      bVar14 = *pbVar10 | bVar14;
      bVar15 = pbVar10[1] | bVar15;
      bVar16 = pbVar10[2] | bVar16;
      bVar17 = pbVar10[3] | bVar17;
      bVar18 = pbVar10[4] | bVar18;
      bVar19 = pbVar10[5] | bVar19;
      bVar20 = pbVar10[6] | bVar20;
      bVar21 = pbVar10[7] | bVar21;
      bVar22 = pbVar10[8] | bVar22;
      bVar23 = pbVar10[9] | bVar23;
      bVar24 = pbVar10[10] | bVar24;
      bVar25 = pbVar10[0xb] | bVar25;
      bVar26 = pbVar10[0xc] | bVar26;
      bVar27 = pbVar10[0xd] | bVar27;
      bVar28 = pbVar10[0xe] | bVar28;
      bVar29 = pbVar10[0xf] | bVar29;
      lVar12 = lVar12 + -2;
      pbVar10 = pbVar10 + 0x10;
    } while (lVar12 != 0);
    auVar5[1] = bVar15;
    auVar5[0] = bVar14;
    auVar5[2] = bVar16;
    auVar5[3] = bVar17;
    auVar5[4] = bVar18;
    auVar5[5] = bVar19;
    auVar5[6] = bVar20;
    auVar5[7] = bVar21;
    auVar5[8] = bVar22;
    auVar5[9] = bVar23;
    auVar5[10] = bVar24;
    auVar5[0xb] = bVar25;
    auVar5[0xc] = bVar26;
    auVar5[0xd] = bVar27;
    auVar5[0xe] = bVar28;
    auVar5[0xf] = bVar29;
    auVar6[1] = bVar15;
    auVar6[0] = bVar14;
    auVar6[2] = bVar16;
    auVar6[3] = bVar17;
    auVar6[4] = bVar18;
    auVar6[5] = bVar19;
    auVar6[6] = bVar20;
    auVar6[7] = bVar21;
    auVar6[8] = bVar22;
    auVar6[9] = bVar23;
    auVar6[10] = bVar24;
    auVar6[0xb] = bVar25;
    auVar6[0xc] = bVar26;
    auVar6[0xd] = bVar27;
    auVar6[0xe] = bVar28;
    auVar6[0xf] = bVar29;
    NEON_ext(auVar5,auVar6,8,1);
  }
LAB_1006aaf28:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

