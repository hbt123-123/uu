// rea decompile_all
// name: FUN_1004f8400
// address: 0x1004f8400
// body: available
// range: 0x1004f8400-0x1004f8f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f8e58) */

undefined1  [16] FUN_1004f8400(uint param_1)

{
  ulong ***pppuVar1;
  ulong uVar2;
  ulong ***pppuVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuVar9;
  ulong uVar10;
  ulong ***pppuVar11;
  ulong uVar12;
  ulong ***pppuVar13;
  ulong uVar14;
  ulong *****unaff_x20;
  long unaff_x21;
  ulong *****pppppuVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  ulong ***local_120;
  ulong ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  ulong uStack_f0;
  ulong ****local_e8;
  ulong ***local_e0;
  ulong ***local_d0;
  ulong ***local_c8;
  ulong ****local_b8;
  ulong ***pppuStack_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  ulong uStack_88;
  char local_68;
  
  _swift_beginAccess(unaff_x20 + 4,auStack_a8,0,0);
  FUN_1004f75cc(unaff_x20 + 4,&local_90);
  pppppuVar15 = unaff_x20;
  if (local_68 != '\0') {
    if (local_68 == '\x01') {
      FUN_1000a0074(&local_90,&local_d0);
      pppppuVar7 = unaff_x20 + 2;
      _swift_beginAccess(pppppuVar7,&local_120,0,0);
      pppppuVar15 = (ulong *****)unaff_x20[2];
      ppppuVar9 = unaff_x20[3];
      uVar10 = (ulong)ppppuVar9 & 0x2000000000000000;
      uVar12 = (ulong)ppppuVar9 >> 0x38 & 0xf;
      uVar14 = (ulong)pppppuVar15 & 0xffffffffffff;
      uVar2 = uVar14;
      if (uVar10 != 0) {
        uVar2 = uVar12;
      }
      pppppuVar6 = unaff_x20;
      if (uVar2 != 0) {
        local_138 = 0x2f;
        uStack_130 = 0xe100000000000000;
        local_e8 = (ulong ****)pppppuVar15;
        local_e0 = (ulong ***)ppppuVar9;
        FUN_1004f9a5c();
        puVar5 = &local_138;
        pppppuVar6 = &local_e8;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (puVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,pppppuVar7,pppppuVar7);
        pppppuVar15 = (ulong *****)unaff_x20[2];
        ppppuVar9 = unaff_x20[3];
        if (((ulong)puVar5 & 1) == 0) {
          local_e8 = (ulong ****)0x0;
          local_e0 = (ulong ***)0xe000000000000000;
          _swift_bridgeObjectRetain(ppppuVar9);
          __ss11_StringGutsV4growyySiF(0x2f);
          _swift_bridgeObjectRelease(local_e0);
          local_e8 = (ulong ****)0xd00000000000002c;
          local_e0 = (ulong ***)0x80000001008bc790;
          __sSS6appendyySSF(pppppuVar15,ppppuVar9);
          _swift_bridgeObjectRelease(ppppuVar9);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          pppuVar3 = local_e0;
          ppppuVar9 = local_e8;
          pppppuVar6 = (ulong *****)0x0;
          FUN_10054df34();
          _swift_allocObject();
          *(undefined1 *)(pppppuVar6 + 2) = 3;
          pppppuVar6[3] = ppppuVar9;
          pppppuVar6[4] = (ulong ****)pppuVar3;
          pppppuVar6[5] = (ulong ****)0xd00000000000001b;
          pppppuVar6[6] = (ulong ****)0x80000001008bc770;
          pppppuVar6[7] = (ulong ****)0xd000000000000025;
          pppppuVar6[8] = (ulong ****)0x80000001008bc660;
          pppppuVar6[9] = (ulong ****)0x1cd;
          pppppuVar15 = pppppuVar6;
          FUN_1004f9a1c();
          _swift_allocError(&DAT_1009d16f0,pppppuVar15,0,0);
          *pppppuVar15 = (ulong ****)pppppuVar6;
          _swift_willThrow();
          FUN_10003f094(&local_d0);
          pppppuVar15 = (ulong *****)0x80000001008bc770;
          goto LAB_1004f8cb4;
        }
        uVar10 = (ulong)ppppuVar9 & 0x2000000000000000;
        uVar12 = (ulong)ppppuVar9 >> 0x38 & 0xf;
        uVar14 = (ulong)pppppuVar15 & 0xffffffffffff;
      }
      if (uVar10 != 0) {
        uVar14 = uVar12;
      }
      if (uVar14 == 0) {
        pppppuVar15 = (ulong *****)&local_d0;
        FUN_10003f030(pppppuVar15,local_b8);
        ppppuVar9 = (ulong ****)&DAT_d000000000000013;
        FUN_10051940c();
        pppppuVar6 = (ulong *****)local_b8;
      }
      else {
        _swift_bridgeObjectRetain(ppppuVar9);
      }
      pppppuVar7 = (ulong *****)&local_d0;
      FUN_1004f5548(pppppuVar7,pppppuVar15,ppppuVar9,param_1 & 0x1010101);
      if (unaff_x21 != 0) {
        FUN_10003f094(&local_d0);
        _swift_bridgeObjectRelease(ppppuVar9);
        pppppuVar15 = unaff_x20;
        goto LAB_1004f8cb4;
      }
      FUN_10003f094(&local_d0);
      pppppuVar6 = pppppuVar7;
    }
    else {
      pppppuVar15 = unaff_x20 + 2;
      _swift_beginAccess(pppppuVar15,&local_d0,0,0);
      local_120 = (ulong ***)unaff_x20[2];
      pppuStack_118 = (ulong ***)unaff_x20[3];
      local_e8 = (ulong ****)0x2f;
      local_e0 = (ulong ***)0xe100000000000000;
      FUN_1004f9a5c();
      pppppuVar6 = &local_e8;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (pppppuVar6,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,pppppuVar15,pppppuVar15);
      if (((ulong)pppppuVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(local_90);
        ppppuVar9 = unaff_x20[2];
        ppppuVar8 = unaff_x20[3];
        uVar10 = (ulong)ppppuVar9 & 0xffffffffffff;
        if (((ulong)ppppuVar8 & 0x2000000000000000) != 0) {
          uVar10 = (ulong)ppppuVar8 >> 0x38 & 0xf;
        }
        if (uVar10 == 0) {
          pppppuVar6 = (ulong *****)0x0;
          FUN_10054df34();
          _swift_allocObject();
          *(undefined1 *)(pppppuVar6 + 2) = 3;
          pppppuVar6[3] = (ulong ****)0xd000000000000049;
          pppppuVar6[4] = (ulong ****)0x80000001008bc7c0;
          pppppuVar6[5] = (ulong ****)0xd00000000000001b;
          pppppuVar6[6] = (ulong ****)0x80000001008bc770;
          pppppuVar6[7] = (ulong ****)0xd000000000000025;
          pppppuVar6[8] = (ulong ****)0x80000001008bc660;
          ppppuVar9 = (ulong ****)0x1d6;
        }
        else {
          local_120 = (ulong ***)0x0;
          pppuStack_118 = (ulong ***)0xe000000000000000;
          _swift_bridgeObjectRetain(ppppuVar8);
          __ss11_StringGutsV4growyySiF(0x2f);
          _swift_bridgeObjectRelease(pppuStack_118);
          local_120 = (ulong ***)0xd00000000000002c;
          pppuStack_118 = (ulong ***)0x80000001008bc790;
          __sSS6appendyySSF(ppppuVar9,ppppuVar8);
          _swift_bridgeObjectRelease(ppppuVar8);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          pppuVar11 = pppuStack_118;
          pppuVar3 = local_120;
          pppppuVar6 = (ulong *****)0x0;
          FUN_10054df34();
          _swift_allocObject();
          *(undefined1 *)(pppppuVar6 + 2) = 3;
          pppppuVar6[3] = (ulong ****)pppuVar3;
          pppppuVar6[4] = (ulong ****)pppuVar11;
          pppppuVar6[5] = (ulong ****)0xd00000000000001b;
          pppppuVar6[6] = (ulong ****)0x80000001008bc770;
          pppppuVar6[7] = (ulong ****)0xd000000000000025;
          pppppuVar6[8] = (ulong ****)0x80000001008bc660;
          ppppuVar9 = (ulong ****)0x1d8;
        }
        pppppuVar6[9] = ppppuVar9;
        pppppuVar15 = pppppuVar6;
        FUN_1004f9a1c();
        _swift_allocError(&DAT_1009d16f0,pppppuVar15,0,0);
        *pppppuVar15 = (ulong ****)pppppuVar6;
        _swift_willThrow();
        pppppuVar15 = (ulong *****)0x80000001008bc660;
        goto LAB_1004f8cb4;
      }
      ppppuVar9 = (ulong ****)0x0;
      FUN_100506f84(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      pppuVar3 = ppppuVar9[2];
      pppuVar11 = ppppuVar9[3];
      pppuVar13 = (ulong ***)((ulong)pppuVar11 >> 1);
      if (pppuVar13 <= pppuVar3) {
        ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar11);
        FUN_100506f84(ppppuVar9,(ulong ***)((long)pppuVar3 + 1U),1);
        pppuVar11 = ppppuVar9[3];
        pppuVar13 = (ulong ***)((ulong)pppuVar11 >> 1);
      }
      ppppuVar9[2] = (ulong ***)((long)pppuVar3 + 1U);
      *(undefined1 *)((long)ppppuVar9 + (long)(pppuVar3 + 4)) = 0x7b;
      pppuStack_118._0_2_ = 0x100;
      pppuVar1 = (ulong ***)((long)pppuVar3 + 2);
      if ((long)pppuVar13 < (long)pppuVar1) {
        ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar11);
        FUN_100506f84(ppppuVar9,pppuVar1,1);
      }
      ppppuVar9[2] = pppuVar1;
      *(undefined1 *)((long)ppppuVar9 + (long)pppuVar3 + 0x21U) = 0x22;
      local_120 = (ulong ***)ppppuVar9;
      FUN_1004fa030(0x6570797440,0xe500000000000000);
      FUN_1004f9e80("\":",2);
      pppuStack_118 = (ulong ***)CONCAT62(pppuStack_118._2_6_,0x2c);
      ppppuVar9 = unaff_x20[2];
      ppppuVar8 = unaff_x20[3];
      _swift_bridgeObjectRetain(ppppuVar8);
      FUN_10052aec8(ppppuVar9,ppppuVar8);
      _swift_bridgeObjectRelease(ppppuVar8);
      if (*(long *)(local_90 + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_90);
      }
      else {
        FUN_1004f9e80(",",1);
        FUN_1004fa13c(local_90);
      }
      pppuVar3 = local_120;
      ppppuVar9 = (ulong ****)local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      ppppuVar8 = (ulong ****)pppuVar3;
      if (((ulong)ppppuVar9 & 1) == 0) {
        ppppuVar8 = (ulong ****)0x0;
        FUN_100506f84(0,(long)pppuVar3[2] + 1,1,pppuVar3);
      }
      pppuVar3 = ppppuVar8[2];
      pppppuVar15 = (ulong *****)((long)pppuVar3 + 1);
      ppppuVar9 = ppppuVar8;
      if ((ulong ***)((ulong)ppppuVar8[3] >> 1) <= pppuVar3) {
        ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < ppppuVar8[3]);
        FUN_100506f84(ppppuVar9,pppppuVar15,1,ppppuVar8);
      }
      ppppuVar9[2] = (ulong ***)pppppuVar15;
      pppppuVar6 = (ulong *****)(ppppuVar9 + 4);
      *(undefined1 *)((long)pppppuVar6 + (long)pppuVar3) = 0x7d;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
    }
    _swift_bridgeObjectRelease(ppppuVar9);
    goto LAB_1004f8cb4;
  }
  uVar4 = (uint)(uStack_88 >> 0x20);
  uVar16 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar16 == 0) {
      if ((uStack_88 & 0xff000000000000) == 0) {
LAB_1004f88ec:
        _swift_beginAccess(unaff_x20 + 2,&local_138,0,0);
        uVar10 = (ulong)unaff_x20[2] & 0xffffffffffff;
        if (((ulong)unaff_x20[3] & 0x2000000000000000) != 0) {
          uVar10 = (ulong)unaff_x20[3] >> 0x38 & 0xf;
        }
        if (uVar10 == 0) {
          FUN_100006cdc(local_90,uStack_88);
          pppppuVar15 = (ulong *****)0xe200000000000000;
          pppppuVar6 = (ulong *****)0x7d7b;
          goto LAB_1004f8cb4;
        }
      }
    }
    else if ((long)(int)local_90 == local_90 >> 0x20) goto LAB_1004f88ec;
  }
  else if ((uVar16 != 2) || (*(long *)(local_90 + 0x10) == *(long *)(local_90 + 0x18)))
  goto LAB_1004f88ec;
  pppppuVar6 = unaff_x20 + 2;
  _swift_beginAccess(pppppuVar6,&local_e8,0,0);
  local_d0 = (ulong ***)unaff_x20[2];
  local_c8 = (ulong ***)unaff_x20[3];
  local_120 = (ulong ***)0x2f;
  pppuStack_118 = (ulong ***)0xe100000000000000;
  FUN_1004f9a5c();
  ppppuVar9 = &local_120;
  __sSy10FoundationE8containsySbqd__SyRd__lF
            (ppppuVar9,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,pppppuVar6,pppppuVar6);
  if (((ulong)ppppuVar9 & 1) == 0) {
    ppppuVar9 = unaff_x20[2];
    ppppuVar8 = unaff_x20[3];
    uVar10 = (ulong)ppppuVar9 & 0xffffffffffff;
    if (((ulong)ppppuVar8 & 0x2000000000000000) != 0) {
      uVar10 = (ulong)ppppuVar8 >> 0x38 & 0xf;
    }
    pppppuVar15 = (ulong *****)0x80000001008bc660;
    if (uVar10 == 0) {
      pppppuVar6 = (ulong *****)0x0;
      FUN_10054df34();
      _swift_allocObject();
      *(undefined1 *)(pppppuVar6 + 2) = 3;
      pppppuVar6[3] = (ulong ****)0xd000000000000049;
      pppppuVar6[4] = (ulong ****)0x80000001008bc7c0;
      pppppuVar6[5] = (ulong ****)0xd00000000000001b;
      pppppuVar6[6] = (ulong ****)0x80000001008bc770;
      pppppuVar6[7] = (ulong ****)0xd000000000000025;
      pppppuVar6[8] = (ulong ****)0x80000001008bc660;
      ppppuVar9 = (ulong ****)0x1b2;
    }
    else {
      local_d0 = (ulong ***)0x0;
      local_c8 = (ulong ***)0xe000000000000000;
      _swift_bridgeObjectRetain(ppppuVar8);
      __ss11_StringGutsV4growyySiF(0x2f);
      _swift_bridgeObjectRelease(local_c8);
      local_d0 = (ulong ***)0xd00000000000002c;
      local_c8 = (ulong ***)0x80000001008bc790;
      __sSS6appendyySSF(ppppuVar9,ppppuVar8);
      _swift_bridgeObjectRelease(ppppuVar8);
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      pppuVar11 = local_c8;
      pppuVar3 = local_d0;
      pppppuVar6 = (ulong *****)0x0;
      FUN_10054df34();
      _swift_allocObject();
      *(undefined1 *)(pppppuVar6 + 2) = 3;
      pppppuVar6[3] = (ulong ****)pppuVar3;
      pppppuVar6[4] = (ulong ****)pppuVar11;
      pppppuVar6[5] = (ulong ****)0xd00000000000001b;
      pppppuVar6[6] = (ulong ****)0x80000001008bc770;
      pppppuVar6[7] = (ulong ****)0xd000000000000025;
      pppppuVar6[8] = (ulong ****)0x80000001008bc660;
      ppppuVar9 = (ulong ****)0x1b4;
    }
    pppppuVar6[9] = ppppuVar9;
    pppppuVar7 = pppppuVar6;
    FUN_1004f9a1c();
    _swift_allocError(&DAT_1009d16f0,pppppuVar7,0,0);
    *pppppuVar7 = (ulong ****)pppppuVar6;
LAB_1004f8ca0:
    _swift_willThrow();
    FUN_100006cdc(local_90,uStack_88);
  }
  else {
    if (uVar16 < 2) {
      if (uVar16 == 0) {
        if ((uStack_88 & 0xff000000000000) != 0) {
LAB_1004f8a8c:
          pppppuVar6 = (ulong *****)unaff_x20[2];
          ppppuVar9 = unaff_x20[3];
          _swift_bridgeObjectRetain(ppppuVar9);
          ppppuVar8 = ppppuVar9;
          FUN_1005188b8();
          _swift_bridgeObjectRelease(ppppuVar9);
          ppppuVar9 = ppppuVar8;
          FUN_100519568();
          _swift_bridgeObjectRelease();
          if (pppppuVar6 != (ulong *****)0x0) {
            local_f8 = local_90;
            uStack_f0 = uStack_88;
            local_100 = 0;
            pppuStack_118 = (ulong ***)0x0;
            local_120 = (ulong ***)0x0;
            uStack_108 = 0;
            uStack_110 = 0;
            ppppuVar8 = &local_d0;
            local_b8 = (ulong ****)pppppuVar6;
            pppuStack_b0 = (ulong ***)ppppuVar9;
            FUN_1000efc08(ppppuVar8);
            FUN_100008184(local_90,uStack_88);
            FUN_100537714(ppppuVar8,&local_f8,&local_120,1,100,0,pppppuVar6,
                          PTR___s10Foundation4DataVN_1009961e8,ppppuVar9,&PTR_PTR_1009d16b0);
            if (unaff_x21 == 0) {
              pppppuVar15 = (ulong *****)unaff_x20[2];
              ppppuVar9 = unaff_x20[3];
              _swift_bridgeObjectRetain(ppppuVar9);
              pppppuVar6 = (ulong *****)&local_d0;
              FUN_1004f5548(pppppuVar6,pppppuVar15,ppppuVar9,param_1 & 0x1010101);
              FUN_100006cdc(local_90,uStack_88);
              _swift_bridgeObjectRelease(ppppuVar9);
              FUN_10003f094(&local_d0);
            }
            else {
              FUN_100006cdc(local_90,uStack_88);
              FUN_1004f9834(&local_d0);
            }
            goto LAB_1004f8cb4;
          }
          FUN_1004f9a9c();
          _swift_allocError(&DAT_1009d0558,ppppuVar8,0,0);
          *(undefined1 *)ppppuVar8 = 0;
          goto LAB_1004f8ca0;
        }
      }
      else if ((long)(int)local_90 != local_90 >> 0x20) goto LAB_1004f8a8c;
    }
    else if ((uVar16 == 2) && (*(long *)(local_90 + 0x10) != *(long *)(local_90 + 0x18)))
    goto LAB_1004f8a8c;
    ppppuVar9 = (ulong ****)0x0;
    FUN_100506f84(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    pppuVar3 = ppppuVar9[2];
    pppuVar11 = ppppuVar9[3];
    pppuVar13 = (ulong ***)((ulong)pppuVar11 >> 1);
    if (pppuVar13 <= pppuVar3) {
      ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar11);
      FUN_100506f84(ppppuVar9,(ulong ***)((long)pppuVar3 + 1U),1);
      pppuVar11 = ppppuVar9[3];
      pppuVar13 = (ulong ***)((ulong)pppuVar11 >> 1);
    }
    ppppuVar9[2] = (ulong ***)((long)pppuVar3 + 1U);
    *(undefined1 *)((long)ppppuVar9 + (long)(pppuVar3 + 4)) = 0x7b;
    local_c8._0_2_ = 0x100;
    pppuVar1 = (ulong ***)((long)pppuVar3 + 2);
    if ((long)pppuVar13 < (long)pppuVar1) {
      ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar11);
      FUN_100506f84(ppppuVar9,pppuVar1,1);
    }
    ppppuVar9[2] = pppuVar1;
    *(undefined1 *)((long)ppppuVar9 + (long)pppuVar3 + 0x21U) = 0x22;
    local_d0 = (ulong ***)ppppuVar9;
    FUN_1004fa030(0x6570797440,0xe500000000000000);
    FUN_1004f9e80("\":",2);
    local_c8 = (ulong ***)CONCAT62(local_c8._2_6_,0x2c);
    ppppuVar9 = unaff_x20[2];
    ppppuVar8 = unaff_x20[3];
    _swift_bridgeObjectRetain(ppppuVar8);
    FUN_10052aec8(ppppuVar9,ppppuVar8);
    _swift_bridgeObjectRelease(ppppuVar8);
    pppuVar3 = local_d0;
    ppppuVar9 = (ulong ****)local_d0;
    _swift_isUniquelyReferenced_nonNull_native();
    ppppuVar8 = (ulong ****)pppuVar3;
    if (((ulong)ppppuVar9 & 1) == 0) {
      ppppuVar8 = (ulong ****)0x0;
      FUN_100506f84(0,(long)pppuVar3[2] + 1,1,pppuVar3);
    }
    pppuVar3 = ppppuVar8[2];
    pppppuVar15 = (ulong *****)((long)pppuVar3 + 1);
    ppppuVar9 = ppppuVar8;
    if ((ulong ***)((ulong)ppppuVar8[3] >> 1) <= pppuVar3) {
      ppppuVar9 = (ulong ****)(ulong)((ulong ***)0x1 < ppppuVar8[3]);
      FUN_100506f84(ppppuVar9,pppppuVar15,1,ppppuVar8);
    }
    ppppuVar9[2] = (ulong ***)pppppuVar15;
    pppppuVar6 = (ulong *****)(ppppuVar9 + 4);
    *(undefined1 *)((long)pppppuVar6 + (long)pppuVar3) = 0x7d;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
    FUN_100006cdc(local_90,uStack_88);
    _swift_bridgeObjectRelease(ppppuVar9);
  }
LAB_1004f8cb4:
  auVar17._8_8_ = pppppuVar15;
  auVar17._0_8_ = pppppuVar6;
  return auVar17;
}

