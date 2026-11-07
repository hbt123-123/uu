// rea decompile_all
// name: FUN_1006ae95c
// address: 0x1006ae95c
// body: available
// range: 0x1006ae95c-0x1006aebef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aebec to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ae95c(undefined8 param_1,ulong *param_2,byte *param_3,char *param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
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
  undefined1 auVar26 [16];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  bVar10 = *param_3 | (byte)uVar3;
  bVar11 = param_3[1] | (byte)((ulong)uVar3 >> 8);
  bVar12 = param_3[2] | (byte)((ulong)uVar3 >> 0x10);
  bVar13 = param_3[3] | (byte)((ulong)uVar3 >> 0x18);
  bVar14 = param_3[4] | (byte)((ulong)uVar3 >> 0x20);
  bVar15 = param_3[5] | (byte)((ulong)uVar3 >> 0x28);
  bVar16 = param_3[6] | (byte)((ulong)uVar3 >> 0x30);
  bVar17 = param_3[7] | (byte)((ulong)uVar3 >> 0x38);
  bVar18 = param_3[8] | (byte)uVar4;
  bVar19 = param_3[9] | (byte)((ulong)uVar4 >> 8);
  bVar20 = param_3[10] | (byte)((ulong)uVar4 >> 0x10);
  bVar21 = param_3[0xb] | (byte)((ulong)uVar4 >> 0x18);
  bVar22 = param_3[0xc] | (byte)((ulong)uVar4 >> 0x20);
  bVar23 = param_3[0xd] | (byte)((ulong)uVar4 >> 0x28);
  bVar24 = param_3[0xe] | (byte)((ulong)uVar4 >> 0x30);
  bVar25 = param_3[0xf] | (byte)((ulong)uVar4 >> 0x38);
  auVar26[1] = bVar11;
  auVar26[0] = bVar10;
  auVar26[2] = bVar12;
  auVar26[3] = bVar13;
  auVar26[4] = bVar14;
  auVar26[5] = bVar15;
  auVar26[6] = bVar16;
  auVar26[7] = bVar17;
  auVar26[8] = bVar18;
  auVar26[9] = bVar19;
  auVar26[10] = bVar20;
  auVar26[0xb] = bVar21;
  auVar26[0xc] = bVar22;
  auVar26[0xd] = bVar23;
  auVar26[0xe] = bVar24;
  auVar26[0xf] = bVar25;
  auVar2[1] = bVar11;
  auVar2[0] = bVar10;
  auVar2[2] = bVar12;
  auVar2[3] = bVar13;
  auVar2[4] = bVar14;
  auVar2[5] = bVar15;
  auVar2[6] = bVar16;
  auVar2[7] = bVar17;
  auVar2[8] = bVar18;
  auVar2[9] = bVar19;
  auVar2[10] = bVar20;
  auVar2[0xb] = bVar21;
  auVar2[0xc] = bVar22;
  auVar2[0xd] = bVar23;
  auVar2[0xe] = bVar24;
  auVar2[0xf] = bVar25;
  auVar26 = NEON_ext(auVar26,auVar2,8,1);
  if (CONCAT17(bVar17 | auVar26[7],
               CONCAT16(bVar16 | auVar26[6],
                        CONCAT15(bVar15 | auVar26[5],
                                 CONCAT14(bVar14 | auVar26[4],
                                          CONCAT13(bVar13 | auVar26[3],
                                                   CONCAT12(bVar12 | auVar26[2],
                                                            CONCAT11(bVar11 | auVar26[1],
                                                                     bVar10 | auVar26[0]))))))) != 0
     ) {
    FUN_1006af210(auStack_78,param_2,param_2,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(auStack_b8,auStack_78);
    FUN_1006af210(auStack_78,param_1,auStack_b8,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(auStack_98,auStack_78);
    FUN_1006af210(auStack_78,param_1,param_1,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(param_1,auStack_78);
    FUN_1006af210(auStack_78,auStack_b8,auStack_b8,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(auStack_b8,auStack_78);
    FUN_1006af210(auStack_78,param_2,param_3,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(param_3,auStack_78);
    pcVar1 = param_4 + 8;
    FUN_1006adc18(param_2,param_1,param_1,pcVar1,4);
    FUN_1006adc18(param_2,param_2,param_1,pcVar1,4);
    if ((*param_2 & 1) == 0) {
      uVar6 = 0;
      puVar5 = param_2 + 4;
      do {
        puVar5 = puVar5 + -1;
        uVar8 = *puVar5;
        *puVar5 = uVar6 | uVar8 >> 1;
        uVar6 = uVar8 << 0x3f;
      } while (param_2 < puVar5);
    }
    else {
      lVar7 = 0;
      uVar6 = 0;
      do {
        uVar9 = *(ulong *)((long)param_2 + lVar7);
        uVar8 = uVar9 + uVar6 + *(long *)(pcVar1 + lVar7);
        if (uVar8 != uVar9) {
          uVar6 = (ulong)(uVar8 < uVar9);
        }
        *(ulong *)((long)param_2 + lVar7) = uVar8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x20);
      uVar8 = 0;
      puVar5 = param_2 + 4;
      do {
        puVar5 = puVar5 + -1;
        uVar9 = *puVar5;
        *puVar5 = uVar8 | uVar9 >> 1;
        uVar8 = uVar9 << 0x3f;
      } while (param_2 < puVar5);
      param_2[3] = param_2[3] | uVar6 << 0x3f;
    }
    FUN_1006af210(auStack_78,param_2,param_2,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(param_1,auStack_78);
    FUN_1006acfd8(param_1,param_1,auStack_98,pcVar1,4);
    FUN_1006acfd8(param_1,param_1,auStack_98,pcVar1,4);
    FUN_1006acfd8(auStack_98,auStack_98,param_1,pcVar1,4);
    FUN_1006af210(auStack_78,param_2,auStack_98,(long)*param_4);
    (**(code **)(param_4 + 0xc0))(param_2,auStack_78);
    FUN_1006acfd8(param_2,param_2,auStack_b8,pcVar1,4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

