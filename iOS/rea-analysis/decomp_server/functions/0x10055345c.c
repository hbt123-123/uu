// rea decompile_all
// name: FUN_10055345c
// address: 0x10055345c
// body: available
// range: 0x10055345c-0x100553dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100553810) */
/* WARNING: Removing unreachable block (ram,0x000100553aa4) */
/* WARNING: Removing unreachable block (ram,0x000100553abc) */

void FUN_10055345c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  code *local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  uint local_7c;
  
  local_b8 = *(long *)(param_5 + 8);
  lVar4 = 0;
  local_e0 = param_1;
  uStack_b0 = param_3;
  _swift_getAssociatedTypeWitness();
  lVar21 = *(long *)(lVar4 + -8);
  lVar14 = (long)&local_120 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_4 + 8);
  lVar5 = 0;
  local_d0 = lVar14;
  local_a0 = param_2;
  _swift_getAssociatedTypeWitness(0,lVar9,param_2,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar18 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar14 - uVar13;
  lVar14 = local_a8 - uVar13;
  lVar6 = 0;
  local_c0 = lVar14;
  __sSqMa(0,lVar4);
  local_90 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = lVar14 - uVar13;
  local_d8 = (undefined1 *)(local_e8 - uVar13);
  lVar23 = (long)local_d8 - uVar13;
  lVar14 = 0;
  local_88 = lVar6;
  __sSqMa(0,lVar5);
  local_98 = *(long *)(lVar14 + -8);
  uVar13 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar20 = (undefined1 *)(lVar23 - uVar13);
  lVar7 = (long)puVar20 - uVar13;
  (**(code **)(lVar18 + 0x38))(lVar7,1,1,lVar5);
  pcVar22 = *(code **)(lVar21 + 0x38);
  puVar10 = (undefined1 *)0x1;
  lVar6 = lVar23;
  local_c8 = lVar21;
  (*pcVar22)(lVar23,1,1,lVar4);
  uVar3 = (uint)lVar6;
  FUN_10055db34();
  lVar6 = local_a8;
  lVar12 = local_88;
  lVar21 = local_98;
  lVar17 = local_90;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar15 = *(byte **)(unaff_x20 + 0x28);
    pbVar19 = *(byte **)(unaff_x20 + 0x30);
    local_120 = pcVar22;
    local_118 = puVar20;
    local_110 = lVar4;
    local_108 = lVar18;
    local_100 = lVar5;
    local_f8 = lVar14;
    local_f0 = lVar23;
    local_7c = uVar3;
LAB_10055364c:
    if ((pbVar15 != pbVar19) && ((uint)*pbVar15 == (local_7c & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar15 + 1;
      FUN_100560bb8();
      lVar12 = local_88;
      lVar17 = local_90;
      lVar21 = local_98;
      lVar5 = local_c0;
      lVar14 = local_f8;
      lVar4 = local_108;
      puVar10 = local_118;
      lVar23 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100553da8);
        (*pcVar22)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar23;
      if (*(long *)(unaff_x20 + 0x40) < lVar23) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000001008bcf30,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100553dfc);
        (*pcVar22)();
      }
      (**(code **)(local_98 + 0x10))(local_118,lVar7,local_f8);
      puVar20 = puVar10;
      (**(code **)(lVar4 + 0x30))(puVar10,1,local_100);
      lVar23 = local_110;
      if ((int)puVar20 == 1) {
        (**(code **)(lVar21 + 8))(puVar10,lVar14);
      }
      else {
        (**(code **)(lVar4 + 0x20))(lVar5,puVar10,local_100);
        puVar10 = local_d8;
        (**(code **)(lVar17 + 0x10))(local_d8,local_f0,lVar12);
        lVar14 = local_c8;
        puVar20 = puVar10;
        (**(code **)(local_c8 + 0x30))(puVar10,1,lVar23);
        if ((int)puVar20 != 1) {
          (**(code **)(lVar14 + 0x20))(local_d0,puVar10,lVar23);
          lVar17 = local_100;
          (**(code **)(lVar4 + 0x10))(lVar6,lVar5,local_100);
          lVar5 = local_d0;
          lVar12 = local_e8;
          (**(code **)(lVar14 + 0x10))(local_e8,local_d0,lVar23);
          (*local_120)(lVar12,0,1,lVar23);
          _swift_getAssociatedConformanceWitness
                    (lVar9,local_a0,lVar17,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar8 = 0;
          __sSDMa(0,lVar17,lVar23,lVar9);
          __sSDyq_Sgxcis(lVar12,lVar6,uVar8);
          (**(code **)(lVar14 + 8))(lVar5,lVar23);
          (**(code **)(lVar4 + 8))(local_c0,lVar17);
          (**(code **)(local_90 + 8))(local_f0,local_88);
          pcVar22 = *(code **)(lVar21 + 8);
          lVar14 = local_f8;
          goto LAB_100553b10;
        }
        (**(code **)(lVar4 + 8))(lVar5,local_100);
        lVar12 = local_88;
        (**(code **)(lVar17 + 8))(puVar10,local_88);
        lVar14 = local_f8;
      }
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar10,0,0);
      *puVar10 = 0;
      _swift_willThrow();
      lVar23 = local_f0;
      goto LAB_100553afc;
    }
    puVar20 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_10055efd0();
    if (puVar10 == (undefined1 *)0x0) goto LAB_100553ac4;
    puVar11 = unaff_x20;
    if ((puVar20 == (undefined1 *)0x79656b) && (puVar10 == (undefined1 *)0xe300000000000000)) {
LAB_1005536f4:
      _swift_bridgeObjectRelease(puVar10);
      (**(code **)(lVar9 + 0x20))(lVar7);
      goto LAB_100553734;
    }
    uVar13 = 0x79656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x79656b,0xe300000000000000,puVar20,puVar10,0);
    if (((uVar13 & 1) != 0) ||
       ((puVar20 == (undefined1 *)0x31 && (puVar10 == (undefined1 *)0xe100000000000000))))
    goto LAB_1005536f4;
    uVar13 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar20,puVar10,0);
    if ((uVar13 & 1) != 0) goto LAB_1005536f4;
    if ((puVar20 != (undefined1 *)0x65756c6176) || (puVar10 != (undefined1 *)0xe500000000000000)) {
      uVar13 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar20,puVar10,0);
      if (((uVar13 & 1) == 0) &&
         (puVar20 != (undefined1 *)0x32 || puVar10 != (undefined1 *)0xe100000000000000)) {
        uVar13 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar20,puVar10,0);
        if ((uVar13 & 1) == 0) {
          if (bVar1 != 0) {
            uVar13 = 0x5b;
            puVar11 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar20,puVar10);
            if ((uVar13 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar15 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar15 == pbVar19) || (bVar2 = *pbVar15, 0x23 < bVar2)) goto LAB_1005538a0;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_1005538a0;
                  pbVar16 = pbVar15 + 1;
                  do {
                    pbVar15 = pbVar19;
                    if (pbVar16 == pbVar19) break;
                    pbVar15 = pbVar16 + 1;
                    bVar2 = *pbVar16;
                    pbVar16 = pbVar15;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar15 = pbVar15 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar15;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar13 = 0x5b;
            puVar11 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar20,puVar10);
            _swift_bridgeObjectRelease();
            if ((uVar13 & 1) == 0) {
              pbVar15 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar15 == pbVar19) || (bVar2 = *pbVar15, 0x23 < bVar2)) goto LAB_1005539ac;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_1005539ac;
                  pbVar16 = pbVar15 + 1;
                  do {
                    pbVar15 = pbVar19;
                    if (pbVar16 == pbVar19) break;
                    pbVar15 = pbVar16 + 1;
                    bVar2 = *pbVar16;
                    pbVar16 = pbVar15;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar15 = pbVar15 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar15;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar10,0,0);
          *puVar10 = 7;
          goto LAB_100553ae4;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    (**(code **)(local_b8 + 0x20))(local_f0);
    goto LAB_100553734;
  }
  goto LAB_100553afc;
LAB_1005538a0:
  if ((pbVar15 != pbVar19) && (*pbVar15 == 0x3a)) {
    do {
      pbVar15 = pbVar15 + 1;
LAB_100553910:
      *(byte **)(unaff_x20 + 0x28) = pbVar15;
      if ((pbVar15 == pbVar19) || (bVar2 = *pbVar15, 0x23 < bVar2)) goto LAB_100553a78;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_100553a78;
    pbVar16 = pbVar15 + 1;
    do {
      pbVar15 = pbVar19;
      if (pbVar16 == pbVar19) break;
      pbVar15 = pbVar16 + 1;
      bVar2 = *pbVar16;
      pbVar16 = pbVar15;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_100553910;
  }
  goto LAB_100553a94;
LAB_1005539ac:
  if ((pbVar15 != pbVar19) && (*pbVar15 == 0x3a)) {
    do {
      pbVar15 = pbVar15 + 1;
LAB_100553a1c:
      *(byte **)(unaff_x20 + 0x28) = pbVar15;
      if ((pbVar15 == pbVar19) || (bVar2 = *pbVar15, 0x23 < bVar2)) goto LAB_100553a78;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_100553a78;
    pbVar16 = pbVar15 + 1;
    do {
      pbVar15 = pbVar19;
      if (pbVar16 == pbVar19) break;
      pbVar15 = pbVar16 + 1;
      bVar2 = *pbVar16;
      pbVar16 = pbVar15;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_100553a1c;
  }
  goto LAB_100553a94;
LAB_100553a78:
  puVar20 = puVar10;
  if (pbVar15 == pbVar19) goto LAB_100553ac4;
  if ((*pbVar15 != 0x7b) && (*pbVar15 != 0x3c)) {
    FUN_100561e84(1);
    goto LAB_100553734;
  }
LAB_100553a94:
  FUN_100562160();
LAB_100553734:
  pbVar15 = *(byte **)(unaff_x20 + 0x28);
  pbVar19 = *(byte **)(unaff_x20 + 0x30);
  puVar10 = puVar11;
  if ((pbVar15 != pbVar19) && ((*pbVar15 == 0x3b || (*pbVar15 == 0x2c)))) {
    do {
      pbVar15 = pbVar15 + 1;
LAB_100553758:
      *(byte **)(unaff_x20 + 0x28) = pbVar15;
      if ((pbVar15 == pbVar19) || (bVar2 = *pbVar15, 0x23 < bVar2)) goto LAB_10055364c;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_10055364c;
    pbVar16 = pbVar15 + 1;
    while (pbVar15 = pbVar19, pbVar16 != pbVar19) {
      pbVar15 = pbVar16 + 1;
      bVar2 = *pbVar16;
      if ((bVar2 == 10) || (pbVar16 = pbVar15, bVar2 == 0xd)) break;
    }
    goto LAB_100553758;
  }
  goto LAB_10055364c;
LAB_100553ac4:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar20,0,0);
  *puVar20 = 0;
LAB_100553ae4:
  _swift_willThrow();
  lVar23 = local_f0;
  lVar12 = local_88;
  lVar21 = local_98;
  lVar14 = local_f8;
  lVar17 = local_90;
LAB_100553afc:
  (**(code **)(lVar17 + 8))(lVar23,lVar12);
  pcVar22 = *(code **)(lVar21 + 8);
LAB_100553b10:
  (*pcVar22)(lVar7,lVar14);
  return;
}

