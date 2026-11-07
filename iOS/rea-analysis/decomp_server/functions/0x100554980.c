// rea decompile_all
// name: FUN_100554980
// address: 0x100554980
// body: available
// range: 0x100554980-0x10055534f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100554fc8) */
/* WARNING: Removing unreachable block (ram,0x000100554d00) */
/* WARNING: Removing unreachable block (ram,0x000100554fdc) */

void FUN_100554980(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *unaff_x20;
  long lVar16;
  long unaff_x21;
  long lVar17;
  code *pcVar18;
  undefined1 *puVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  uint local_84;
  
  lVar17 = *(long *)(param_3 + -8);
  lVar11 = *(long *)(lVar17 + 0x40);
  lVar8 = *(long *)(param_4 + 8);
  lVar4 = 0;
  local_e0 = param_1;
  local_d8 = auStack_120 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  local_c8 = param_6;
  _swift_getAssociatedTypeWitness();
  lVar20 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = (long)(auStack_120 + -(lVar11 + 0xfU & 0xfffffffffffffff0)) - uVar12;
  lVar11 = local_e8 - uVar12;
  lVar5 = 0;
  local_d0 = lVar11;
  __sSqMa(0,param_3);
  local_a0 = *(long *)(lVar5 + -8);
  uVar12 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = lVar11 - uVar12;
  puVar22 = (undefined1 *)(local_c0 - uVar12);
  lVar16 = (long)puVar22 - uVar12;
  lVar11 = 0;
  local_98 = lVar5;
  __sSqMa(0,lVar4);
  local_a8 = *(long *)(lVar11 + -8);
  uVar12 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = (undefined1 *)(lVar16 - uVar12);
  lVar6 = (long)puVar19 - uVar12;
  local_b8 = lVar4;
  (**(code **)(lVar20 + 0x38))(lVar6,1,1,lVar4);
  pcVar18 = *(code **)(lVar17 + 0x38);
  puVar9 = (undefined1 *)0x1;
  local_b0 = lVar17;
  local_90 = lVar16;
  (*pcVar18)(lVar16,1,1,param_3);
  uVar3 = (uint)lVar16;
  FUN_10055db34();
  lVar16 = local_b0;
  lVar5 = local_b8;
  lVar4 = local_c0;
  lVar10 = local_98;
  lVar15 = local_a0;
  lVar17 = local_a8;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar13 = *(byte **)(unaff_x20 + 0x28);
    pbVar21 = *(byte **)(unaff_x20 + 0x30);
    local_118 = pcVar18;
    local_110 = puVar22;
    local_108 = puVar19;
    local_100 = lVar20;
    local_f8 = param_3;
    local_f0 = lVar11;
    local_84 = uVar3;
LAB_100554b40:
    if ((pbVar13 != pbVar21) && ((uint)*pbVar13 == (local_84 & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar13 + 1;
      FUN_100560bb8();
      lVar15 = local_a0;
      lVar17 = local_a8;
      lVar11 = local_f0;
      lVar20 = local_100;
      puVar9 = local_108;
      lVar10 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1005552fc);
        (*pcVar18)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar10;
      if (*(long *)(unaff_x20 + 0x40) < lVar10) {
        *(undefined4 *)(lVar6 + -8) = 0;
        *(undefined8 *)(lVar6 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000001008bcf30,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100555350);
        (*pcVar18)();
      }
      (**(code **)(local_a8 + 0x10))(local_108,lVar6,local_f0);
      puVar19 = puVar9;
      (**(code **)(lVar20 + 0x30))(puVar9,1,lVar5);
      lVar10 = local_d0;
      if ((int)puVar19 == 1) {
        (**(code **)(lVar17 + 8))(puVar9,lVar11);
        lVar10 = local_98;
      }
      else {
        (**(code **)(lVar20 + 0x20))(local_d0,puVar9,lVar5);
        puVar9 = local_110;
        (**(code **)(lVar15 + 0x10))(local_110,local_90,local_98);
        puVar19 = local_f8;
        puVar22 = puVar9;
        (**(code **)(lVar16 + 0x30))(puVar9,1,local_f8);
        if ((int)puVar22 != 1) {
          (**(code **)(lVar16 + 0x20))(local_d8,puVar9,puVar19);
          lVar11 = local_e8;
          (**(code **)(lVar20 + 0x10))(local_e8,lVar10,lVar5);
          puVar9 = local_d8;
          (**(code **)(lVar16 + 0x10))(lVar4,local_d8,puVar19);
          (*local_118)(lVar4,0,1,puVar19);
          _swift_getAssociatedConformanceWitness
                    (lVar8,param_2,lVar5,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar7 = 0;
          __sSDMa(0,lVar5,puVar19,lVar8);
          __sSDyq_Sgxcis(lVar4,lVar11,uVar7);
          (**(code **)(lVar16 + 8))(puVar9,puVar19);
          (**(code **)(lVar20 + 8))(local_d0,lVar5);
          (**(code **)(local_a0 + 8))(local_90,local_98);
          pcVar18 = *(code **)(lVar17 + 8);
          lVar11 = local_f0;
          goto LAB_100555034;
        }
        (**(code **)(lVar20 + 8))(lVar10,lVar5);
        lVar10 = local_98;
        lVar15 = local_a0;
        (**(code **)(local_a0 + 8))(puVar9,local_98);
        lVar11 = local_f0;
      }
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar9,0,0);
      *puVar9 = 0;
      _swift_willThrow();
      goto LAB_100555020;
    }
    puVar19 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_10055efd0();
    if (puVar9 == (undefined1 *)0x0) goto LAB_100554fe4;
    if ((puVar19 == (undefined1 *)0x79656b) && (puVar9 == (undefined1 *)0xe300000000000000)) {
LAB_100554bf0:
      _swift_bridgeObjectRelease(puVar9);
      puVar22 = unaff_x20;
      (**(code **)(lVar8 + 0x20))(lVar6);
      goto LAB_100554c38;
    }
    uVar12 = 0x79656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x79656b,0xe300000000000000,puVar19,puVar9,0);
    if (((uVar12 & 1) != 0) ||
       ((puVar19 == (undefined1 *)0x31 && (puVar9 == (undefined1 *)0xe100000000000000))))
    goto LAB_100554bf0;
    uVar12 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar19,puVar9,0);
    if ((uVar12 & 1) != 0) goto LAB_100554bf0;
    if ((puVar19 != (undefined1 *)0x65756c6176) || (puVar9 != (undefined1 *)0xe500000000000000)) {
      uVar12 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar19,puVar9,0);
      if (((uVar12 & 1) == 0) &&
         (puVar19 != (undefined1 *)0x32 || puVar9 != (undefined1 *)0xe100000000000000)) {
        uVar12 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar19,puVar9,0);
        if ((uVar12 & 1) == 0) {
          if (bVar1 != 0) {
            uVar12 = 0x5b;
            puVar22 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar19,puVar9);
            if ((uVar12 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar21) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_100554da0;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_100554da0;
                  pbVar14 = pbVar13 + 1;
                  do {
                    pbVar13 = pbVar21;
                    if (pbVar14 == pbVar21) break;
                    pbVar13 = pbVar14 + 1;
                    bVar2 = *pbVar14;
                    pbVar14 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar12 = 0x5b;
            puVar22 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar19,puVar9);
            _swift_bridgeObjectRelease();
            lVar17 = local_a8;
            if ((uVar12 & 1) == 0) {
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar21) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_100554ebc;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_100554ebc;
                  pbVar14 = pbVar13 + 1;
                  do {
                    pbVar13 = pbVar21;
                    if (pbVar14 == pbVar21) break;
                    pbVar13 = pbVar14 + 1;
                    bVar2 = *pbVar14;
                    pbVar14 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar9,0,0);
          *puVar9 = 7;
          goto LAB_100555004;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar9);
    puVar22 = local_f8;
    FUN_10055189c(local_90,local_f8,local_c8);
    goto LAB_100554c38;
  }
  goto LAB_100555020;
LAB_100554da0:
  if ((pbVar13 != pbVar21) && (*pbVar13 == 0x3a)) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_100554e10:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar21) || (bVar2 = *pbVar13, 0x23 < bVar2)) {
LAB_100554fa0:
        puVar19 = puVar9;
        if (pbVar13 == pbVar21) goto LAB_100554fe4;
        goto LAB_100554fa8;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_100554fa0;
    pbVar14 = pbVar13 + 1;
    do {
      pbVar13 = pbVar21;
      if (pbVar14 == pbVar21) break;
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar13;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_100554e10;
  }
  goto LAB_100554fbc;
LAB_100554ebc:
  if ((pbVar13 != pbVar21) && (*pbVar13 == 0x3a)) {
    pbVar13 = pbVar13 + 1;
    *(byte **)(unaff_x20 + 0x28) = pbVar13;
    do {
      if ((pbVar13 == pbVar21) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_100554ee4;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_100554ee4;
        pbVar14 = pbVar13 + 1;
        do {
          pbVar13 = pbVar21;
          if (pbVar14 == pbVar21) break;
          pbVar13 = pbVar14 + 1;
          bVar2 = *pbVar14;
          pbVar14 = pbVar13;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar13 = pbVar13 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
    } while( true );
  }
  goto LAB_100554fbc;
LAB_100554ee4:
  if (pbVar13 == pbVar21) {
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar9,0,0);
    *puVar9 = 0;
    _swift_willThrow();
    lVar10 = local_98;
    lVar15 = local_a0;
    lVar11 = local_f0;
    goto LAB_100555020;
  }
LAB_100554fa8:
  if ((*pbVar13 != 0x7b) && (*pbVar13 != 0x3c)) {
    FUN_100561e84(1);
    goto LAB_100554c38;
  }
LAB_100554fbc:
  FUN_100562160();
LAB_100554c38:
  pbVar13 = *(byte **)(unaff_x20 + 0x28);
  pbVar21 = *(byte **)(unaff_x20 + 0x30);
  puVar9 = puVar22;
  if ((pbVar13 != pbVar21) && ((*pbVar13 == 0x3b || (*pbVar13 == 0x2c)))) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_100554c5c:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar21) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_100554b40;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_100554b40;
    pbVar14 = pbVar13 + 1;
    while (pbVar13 = pbVar21, pbVar14 != pbVar21) {
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      if ((bVar2 == 10) || (pbVar14 = pbVar13, bVar2 == 0xd)) break;
    }
    goto LAB_100554c5c;
  }
  goto LAB_100554b40;
LAB_100554fe4:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar19,0,0);
  *puVar19 = 0;
LAB_100555004:
  _swift_willThrow();
  lVar10 = local_98;
  lVar15 = local_a0;
  lVar17 = local_a8;
  lVar11 = local_f0;
LAB_100555020:
  (**(code **)(lVar15 + 8))(local_90,lVar10);
  pcVar18 = *(code **)(lVar17 + 8);
LAB_100555034:
  (*pcVar18)(lVar6,lVar11);
  return;
}

