// rea decompile_all
// name: FUN_100400470
// address: 0x100400470
// body: available
// range: 0x100400470-0x100400d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100400c1c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100400470(long *param_1,undefined8 param_2,ulong *param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 extraout_x13;
  ulong extraout_x14;
  undefined8 extraout_x15;
  code *pcVar9;
  long unaff_x21;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long local_130;
  code *local_128;
  code *local_120;
  long local_118;
  code *local_110;
  long local_108;
  long local_100;
  code *local_f8;
  long local_f0;
  long *local_e8;
  ulong *local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  code *local_a8;
  long local_a0;
  ulong local_98;
  code *local_90;
  long local_88;
  code *local_80;
  undefined8 local_78;
  undefined *local_58;
  
  lVar2 = 0;
  local_e8 = param_1;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar8 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - extraout_x12;
  local_c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (((lVar8 - extraout_x12_00) - extraout_x12_01) - extraout_x12_02) - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar13 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  pcVar6 = (code *)param_3[1];
  local_e0 = param_3;
  local_88 = lVar18;
  local_78 = param_5;
  if ((long)pcVar6 < 1) {
    _swift_bridgeObjectRetain_n(param_5,2);
  }
  else {
    pcVar10 = (code *)*param_3;
    local_108 = lVar8 - extraout_x12_05;
    local_100 = lVar8;
    local_f0 = param_4;
    local_d0 = extraout_x14;
    local_c0 = extraout_x13;
    local_b0 = extraout_x15;
    _swift_bridgeObjectRetain_n(param_5,2);
    pcVar19 = (code *)0x0;
    local_b8 = lVar13;
    local_a0 = lVar2;
    do {
      lVar8 = local_108;
      pcVar11 = pcVar19 + 1;
      if ((long)pcVar11 < (long)pcVar6) {
        pcVar16 = *(code **)(lVar18 + 0x48);
        pcVar14 = pcVar10 + (long)pcVar16 * (long)pcVar11;
        pcVar11 = *(code **)(lVar18 + 0x10);
        local_80 = pcVar6;
        (*pcVar11)(local_108,pcVar14,lVar2);
        lVar13 = local_100;
        local_a8 = pcVar11;
        local_90 = pcVar10;
        (*pcVar11)(local_100,pcVar10 + (long)pcVar16 * (long)pcVar19,lVar2);
        lVar15 = lVar8;
        FUN_1003ff094(lVar8,lVar13,param_5);
        local_98 = CONCAT44(local_98._4_4_,(int)lVar15);
        if (unaff_x21 != 0) {
          pcVar6 = *(code **)(lVar18 + 8);
          (*pcVar6)(lVar13,lVar2);
          (*pcVar6)(lVar8,lVar2);
          goto LAB_100400c64;
        }
        pcVar9 = *(code **)(lVar18 + 8);
        (*pcVar9)(lVar13,lVar2);
        (*pcVar9)(lVar8,lVar2);
        pcVar6 = local_90 + (long)pcVar16 * (long)(pcVar19 + 2);
        pcVar10 = pcVar19 + 2;
        local_f8 = pcVar19;
        local_90 = pcVar16;
        do {
          lVar2 = local_a0;
          pcVar19 = local_a8;
          lVar18 = local_b8;
          pcVar11 = local_80;
          if (local_80 == pcVar10) break;
          (*local_a8)(local_b8,pcVar6,local_a0);
          uVar17 = local_b0;
          (*pcVar19)(local_b0,pcVar14,lVar2);
          lVar8 = lVar18;
          FUN_1003ff094(lVar18,uVar17,local_78);
          (*pcVar9)(uVar17,lVar2);
          (*pcVar9)(lVar18,lVar2);
          pcVar6 = pcVar6 + (long)local_90;
          pcVar14 = pcVar14 + (long)local_90;
          pcVar11 = pcVar10;
          pcVar10 = pcVar10 + 1;
        } while ((((uint)local_98 ^ (uint)lVar8) & 1) == 0);
        lVar2 = local_a0;
        param_3 = local_e0;
        lVar18 = local_88;
        pcVar19 = local_f8;
        param_5 = local_78;
        if ((local_98 & 1) != 0) {
          if ((long)pcVar11 < (long)local_f8) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100400ce4);
            (*pcVar6)();
          }
          if ((long)local_f8 < (long)pcVar11) {
            lVar8 = 0;
            uVar12 = *local_e0;
            pcVar16 = (code *)((long)local_90 * (long)(pcVar11 + -1));
            lVar13 = (long)pcVar11 * (long)local_90;
            pcVar10 = (code *)((long)local_f8 * (long)local_90);
            pcVar14 = local_90;
            pcVar6 = local_f8;
            do {
              if (pcVar6 != pcVar11 + lVar8 + -1) {
                if (uVar12 == 0) {
                  _swift_bridgeObjectRelease_n(local_78,2);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100400d14);
                  (*pcVar6)();
                }
                pcVar19 = pcVar10 + uVar12;
                local_80 = *(code **)(local_88 + 0x20);
                (*local_80)(local_d8,pcVar19,lVar2);
                if (((long)pcVar10 < (long)pcVar16) || ((code *)(uVar12 + lVar13) <= pcVar19)) {
                  _swift_arrayInitWithTakeFrontToBack(pcVar19,pcVar16 + uVar12,1,lVar2);
                }
                else if (pcVar10 != pcVar16) {
                  _swift_arrayInitWithTakeBackToFront(pcVar19,pcVar16 + uVar12,1,lVar2);
                }
                (*local_80)(pcVar16 + uVar12,local_d8,lVar2);
                pcVar14 = local_90;
              }
              pcVar6 = pcVar6 + 1;
              lVar8 = lVar8 + -1;
              pcVar16 = pcVar16 + -(long)pcVar14;
              lVar13 = lVar13 - (long)pcVar14;
              pcVar10 = pcVar10 + (long)pcVar14;
              param_3 = local_e0;
              lVar18 = local_88;
              pcVar19 = local_f8;
              param_5 = local_78;
            } while ((long)pcVar6 < (long)(pcVar11 + lVar8));
          }
        }
      }
      pcVar6 = (code *)param_3[1];
      if ((long)pcVar11 < (long)pcVar6) {
        if (SBORROW8((long)pcVar11,(long)pcVar19)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cc8);
          (*pcVar6)();
        }
        if (local_f0 <= (long)pcVar11 - (long)pcVar19) goto LAB_100400898;
        if (SCARRY8((long)pcVar19,local_f0)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cdc);
          (*pcVar6)();
        }
        pcVar10 = pcVar19 + local_f0;
        if ((long)pcVar6 <= (long)(pcVar19 + local_f0)) {
          pcVar10 = pcVar6;
        }
        if ((long)pcVar10 < (long)pcVar19) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100400ce0);
          (*pcVar6)();
        }
        if (pcVar11 == pcVar10) goto LAB_100400898;
        local_98 = *param_3;
        local_130 = *(long *)(lVar18 + 0x48);
        local_90 = *(code **)(lVar18 + 0x10);
        pcVar6 = (code *)(local_98 + local_130 * (long)(pcVar11 + -1));
        local_a8 = (code *)-local_130;
        lVar8 = (long)pcVar19 - (long)pcVar11;
        pcVar14 = (code *)(local_98 + (long)pcVar11 * local_130);
        uVar17 = local_c0;
        local_128 = pcVar10;
        pcVar10 = pcVar14;
        lVar13 = lVar8;
        pcVar16 = pcVar6;
        local_f8 = pcVar19;
LAB_100400990:
        do {
          local_80 = pcVar11;
          local_110 = pcVar16;
          local_118 = lVar13;
          local_120 = pcVar10;
          pcVar10 = local_90;
          uVar12 = local_d0;
          (*local_90)(local_d0,pcVar14,lVar2);
          (*pcVar10)(uVar17,pcVar6,lVar2);
          uVar7 = uVar12;
          FUN_1003ff094(uVar12,uVar17,param_5);
          if (unaff_x21 != 0) {
            pcVar6 = *(code **)(lVar18 + 8);
            (*pcVar6)(uVar17,lVar2);
            (*pcVar6)(uVar12,lVar2);
            param_5 = local_78;
            goto LAB_100400c64;
          }
          pcVar10 = *(code **)(lVar18 + 8);
          (*pcVar10)(uVar17,lVar2);
          (*pcVar10)(uVar12,lVar2);
          lVar18 = local_88;
          lVar13 = local_c8;
          if ((uVar7 & 1) != 0) {
            if (local_98 == 0) {
              _swift_bridgeObjectRelease_n(local_78,2);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cf4);
              (*pcVar6)();
            }
            pcVar10 = *(code **)(local_88 + 0x20);
            (*pcVar10)(local_c8,pcVar14,lVar2);
            _swift_arrayInitWithTakeFrontToBack(pcVar14,pcVar6,1,lVar2);
            (*pcVar10)(pcVar6,lVar13,lVar2);
            pcVar6 = pcVar6 + (long)local_a8;
            pcVar14 = pcVar14 + (long)local_a8;
            bVar1 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            uVar17 = local_c0;
            param_5 = local_78;
            pcVar10 = local_120;
            lVar13 = local_118;
            pcVar16 = local_110;
            pcVar11 = local_80;
            if (bVar1) goto LAB_100400990;
          }
          pcVar6 = local_110 + local_130;
          lVar8 = local_118 + -1;
          pcVar14 = local_120 + local_130;
          param_5 = local_78;
          pcVar10 = pcVar14;
          lVar13 = lVar8;
          pcVar16 = pcVar6;
          pcVar11 = local_80 + 1;
        } while (local_80 + 1 != local_128);
        pcVar11 = local_128;
        param_3 = local_e0;
        pcVar19 = local_f8;
        if ((long)local_128 < (long)local_f8) goto LAB_100400cc0;
      }
      else {
LAB_100400898:
        if ((long)pcVar11 < (long)pcVar19) {
LAB_100400cc0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cc4);
          (*pcVar6)();
        }
      }
      puVar5 = local_58;
      puVar3 = local_58;
      local_80 = pcVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar12 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033870(puVar5,uVar12 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar12 + 1;
      *(code **)(puVar5 + uVar12 * 0x10 + 0x20) = pcVar19;
      *(code **)(puVar5 + uVar12 * 0x10 + 0x28) = local_80;
      lVar8 = *local_e8;
      local_58 = puVar5;
      if (lVar8 == 0) {
        _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100400d24);
        (*pcVar6)();
      }
      _swift_bridgeObjectRetain(param_5);
      FUN_1004001a8(&local_58,lVar8,param_3,param_5);
      _swift_bridgeObjectRelease(param_5);
      if (unaff_x21 != 0) goto LAB_100400c64;
      pcVar10 = (code *)*param_3;
      pcVar6 = (code *)param_3[1];
      pcVar19 = local_80;
    } while ((long)local_80 < (long)pcVar6);
  }
  puVar5 = local_58;
  lVar2 = *local_e8;
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100400d34);
    (*pcVar6)();
  }
  puVar3 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar3 & 1) == 0) {
    FUN_10006f924();
  }
  uVar12 = *(ulong *)(puVar5 + 0x10);
  param_5 = local_78;
  while (local_78 = param_5, local_58 = puVar5, 1 < uVar12) {
    uVar7 = *param_3;
    if (uVar7 == 0) {
      _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100400d04);
      (*pcVar6)();
    }
    lVar15 = uVar12 - 1;
    lVar20 = *(long *)(puVar5 + uVar12 * 0x10);
    lVar8 = *(long *)(puVar5 + lVar15 * 0x10 + 0x20);
    lVar13 = *(long *)(puVar5 + lVar15 * 0x10 + 0x28);
    lVar18 = *(long *)(lVar18 + 0x48);
    _swift_bridgeObjectRetain(param_5);
    FUN_1003ffbd8(uVar7 + lVar18 * lVar20,uVar7 + lVar18 * lVar8,uVar7 + lVar18 * lVar13,lVar2,
                  param_5);
    param_5 = local_78;
    if (unaff_x21 != 0) break;
    if (lVar13 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cbc);
      (*pcVar6)();
    }
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_10006f924();
    }
    lVar18 = local_88;
    param_3 = local_e0;
    if (*(ulong *)(puVar5 + 0x10) <= uVar12 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100400cc0);
      (*pcVar6)();
    }
    *(long *)(puVar5 + uVar12 * 0x10) = lVar20;
    *(long *)((long)(puVar5 + uVar12 * 0x10) + 8) = lVar13;
    local_58 = puVar5;
    FUN_10005fd60(lVar15);
    puVar5 = local_58;
    param_5 = local_78;
    uVar12 = *(ulong *)(local_58 + 0x10);
  }
LAB_100400c64:
  puVar5 = local_58;
  _swift_bridgeObjectRelease_n(param_5,2);
  _swift_bridgeObjectRelease(puVar5);
  return;
}

