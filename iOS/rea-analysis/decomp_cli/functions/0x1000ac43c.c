// rea decompile_all
// name: FUN_1000ac43c
// address: 0x1000ac43c
// body: available
// range: 0x1000ac43c-0x1000acb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000ac43c(undefined8 **param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long **pplVar4;
  long **pplVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 **local_218;
  long **local_210;
  long *local_148;
  long *local_140;
  ulong uStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  pplVar13 = *(long ***)(param_3 + 0x10);
  if (pplVar13 == (long **)0x0) {
    plVar15 = *(long **)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
    pplVar4 = (long **)PTR___swiftEmptyArrayStorage_1000f0740;
    puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    pplVar4 = pplVar13;
    FUN_100079694(pplVar13,0);
    pplVar5 = &local_140;
    FUN_10008dfb4(pplVar5,pplVar4 + 4,pplVar13,param_3,param_4);
    plVar15 = local_140;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(plVar15);
    _swift_bridgeObjectRelease(uStack_138);
    if (pplVar5 != pplVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000acb6c);
      (*pcVar3)();
    }
    plVar15 = pplVar4[2];
    puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  PTR___swiftEmptyArrayStorage_1000f0740 = puVar2;
  if (plVar15 == (long *)0x0) {
    _swift_release(pplVar4);
    _swift_bridgeObjectRetain(param_2);
    uStack_138 = param_2;
    local_140 = (long *)param_1;
  }
  else {
    if (plVar15 < (long *)0xd) {
      local_148 = (long *)puVar6;
      FUN_1000798d0(0,plVar15,0);
      lVar11 = 0x20;
      do {
        plVar12 = local_148;
        puVar7 = (undefined8 *)((long)pplVar4 + lVar11);
        uStack_138 = puVar7[1];
        local_140 = (long *)*puVar7;
        lStack_128 = puVar7[3];
        local_130 = puVar7[2];
        lStack_118 = puVar7[5];
        lStack_120 = puVar7[4];
        lStack_108 = puVar7[7];
        local_110 = puVar7[6];
        lStack_f8 = puVar7[9];
        lStack_100 = puVar7[8];
        lStack_e8 = puVar7[0xb];
        local_f0 = puVar7[10];
        lStack_d8 = puVar7[0xd];
        lStack_e0 = puVar7[0xc];
        lStack_c8 = puVar7[0xf];
        local_d0 = puVar7[0xe];
        lStack_b8 = puVar7[0x11];
        lStack_c0 = puVar7[0x10];
        lStack_a8 = puVar7[0x13];
        local_b0 = puVar7[0x12];
        lStack_98 = puVar7[0x15];
        uStack_a0 = puVar7[0x14];
        lStack_88 = puVar7[0x17];
        local_90 = puVar7[0x16];
        lStack_78 = puVar7[0x19];
        lStack_80 = puVar7[0x18];
        pplVar13 = &local_140;
        pppuVar9 = &local_218;
        FUN_10006ff98();
        FUN_1000ad0d8();
        uVar1 = uStack_138;
        local_218 = pplVar13;
        local_210 = (long **)pppuVar9;
        if (((uint)uStack_138 >> 1 & 1) != 0) {
          __sSS6appendyySSF(0x2e2e2e20,0xe400000000000000);
        }
        pplVar13 = local_210;
        if ((uVar1 & 1) != 0) {
          __sSS6appendyySSF(local_218,local_210);
          _swift_bridgeObjectRelease(pplVar13);
          __sSS6appendyySSF(0x5d,0xe100000000000000);
          local_218 = (long **)0x5b;
          local_210 = (long **)0xe100000000000000;
        }
        pplVar13 = local_210;
        if (uStack_a0._1_1_ == '\x05') {
          __sSS6appendyySSF(local_218,local_210);
          _swift_bridgeObjectRelease(pplVar13);
          FUN_10008efb4(&local_140);
          pppuVar9 = (undefined8 ***)0xe300000000000000;
          pplVar13 = (long **)0x202d2d;
        }
        else {
          FUN_10008efb4(&local_140);
          pppuVar9 = (undefined8 ***)local_210;
          pplVar13 = local_218;
        }
        puVar7 = (undefined8 *)plVar12[2];
        local_148 = plVar12;
        if ((undefined8 *)((ulong)plVar12[3] >> 1) <= puVar7) {
          FUN_1000798d0((undefined8 *)0x1 < (undefined8 *)plVar12[3],
                        (undefined8 *)((long)puVar7 + 1U),1);
        }
        plVar12 = local_148;
        local_148[2] = (long)((long)puVar7 + 1U);
        local_148[(long)puVar7 * 2 + 4] = (long)pplVar13;
        local_148[(long)puVar7 * 2 + 5] = (long)pppuVar9;
        lVar11 = lVar11 + 0xd0;
        plVar15 = (long *)((long)plVar15 - 1);
      } while (plVar15 != (long *)0x0);
      _swift_release(pplVar4);
      puVar6 = &DAT_100103ed8;
      local_218 = (undefined8 **)plVar12;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar7 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar8 = 0x20;
      uVar10 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar6,puVar7);
      _swift_release(plVar12);
      local_218 = param_1;
      local_210 = (long **)param_2;
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x20,0xe100000000000000);
      __sSS6appendyySSF(uVar8,uVar10);
    }
    else {
      plVar12 = (long *)0x0;
      do {
        lVar11 = (long)plVar12 * 0xd0 + 0x20;
        plVar14 = plVar12;
        while( true ) {
          if (pplVar4[2] <= plVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000acb68);
            (*pcVar3)();
          }
          plVar12 = (long *)((long)pplVar4 + lVar11);
          uStack_138 = plVar12[1];
          local_140 = (long *)*plVar12;
          lStack_128 = plVar12[3];
          local_130 = plVar12[2];
          lStack_118 = plVar12[5];
          lStack_120 = plVar12[4];
          lStack_108 = plVar12[7];
          local_110 = plVar12[6];
          lStack_f8 = plVar12[9];
          lStack_100 = plVar12[8];
          lStack_e8 = plVar12[0xb];
          local_f0 = plVar12[10];
          lStack_d8 = plVar12[0xd];
          lStack_e0 = plVar12[0xc];
          lStack_c8 = plVar12[0xf];
          local_d0 = plVar12[0xe];
          lStack_b8 = plVar12[0x11];
          lStack_c0 = plVar12[0x10];
          lStack_a8 = plVar12[0x13];
          local_b0 = plVar12[0x12];
          lStack_98 = plVar12[0x15];
          uStack_a0 = plVar12[0x14];
          lStack_88 = plVar12[0x17];
          local_90 = plVar12[0x16];
          lStack_78 = plVar12[0x19];
          lStack_80 = plVar12[0x18];
          plVar12 = (long *)((long)plVar14 + 1);
          if ((local_140 == (long *)0x0) || ((uStack_138 & 1) == 0)) break;
          lVar11 = lVar11 + 0xd0;
          plVar14 = plVar12;
          if (plVar15 == plVar12) goto LAB_1000ac880;
        }
        FUN_10006ff98(&local_140,&local_218);
        puVar6 = puVar2;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_100079958(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          FUN_100079958(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
        *(ulong *)(puVar2 + uVar1 * 0xd0 + 0x28) = uStack_138;
        *(long **)(puVar2 + uVar1 * 0xd0 + 0x20) = local_140;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x58) = lStack_108;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x50) = local_110;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x68) = lStack_f8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x60) = lStack_100;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x38) = lStack_128;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x30) = local_130;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x48) = lStack_118;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x40) = lStack_120;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x98) = lStack_c8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x90) = local_d0;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xa8) = lStack_b8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xa0) = lStack_c0;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x78) = lStack_e8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x70) = local_f0;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x88) = lStack_d8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0x80) = lStack_e0;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xd8) = lStack_88;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xd0) = local_90;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xe8) = lStack_78;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xe0) = lStack_80;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xb8) = lStack_a8;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xb0) = local_b0;
        *(long *)(puVar2 + uVar1 * 0xd0 + 200) = lStack_98;
        *(long *)(puVar2 + uVar1 * 0xd0 + 0xc0) = uStack_a0;
      } while ((long *)((long)plVar15 - 1U) != plVar14);
LAB_1000ac880:
      _swift_release(pplVar4);
      lVar11 = *(long *)(puVar2 + 0x10);
      if (lVar11 - 0xdU < 0xfffffffffffffff4) {
        _swift_release(puVar2);
        local_140 = (long *)param_1;
        uStack_138 = param_2;
        _swift_bridgeObjectRetain();
        __sSS6appendyySSF(0x6e6f6974706f3c20,0xea00000000003e73);
        goto LAB_1000acb3c;
      }
      local_148 = (long *)PTR___swiftEmptyArrayStorage_1000f0740;
      FUN_1000798d0(0,lVar11,0);
      lVar16 = 0x20;
      do {
        plVar15 = local_148;
        puVar7 = (undefined8 *)(puVar2 + lVar16);
        uStack_138 = puVar7[1];
        local_140 = (long *)*puVar7;
        lStack_128 = puVar7[3];
        local_130 = puVar7[2];
        lStack_118 = puVar7[5];
        lStack_120 = puVar7[4];
        lStack_108 = puVar7[7];
        local_110 = puVar7[6];
        lStack_f8 = puVar7[9];
        lStack_100 = puVar7[8];
        lStack_e8 = puVar7[0xb];
        local_f0 = puVar7[10];
        lStack_d8 = puVar7[0xd];
        lStack_e0 = puVar7[0xc];
        lStack_c8 = puVar7[0xf];
        local_d0 = puVar7[0xe];
        lStack_b8 = puVar7[0x11];
        lStack_c0 = puVar7[0x10];
        lStack_a8 = puVar7[0x13];
        local_b0 = puVar7[0x12];
        lStack_98 = puVar7[0x15];
        uStack_a0 = puVar7[0x14];
        lStack_88 = puVar7[0x17];
        local_90 = puVar7[0x16];
        lStack_78 = puVar7[0x19];
        lStack_80 = puVar7[0x18];
        pplVar13 = &local_140;
        pppuVar9 = &local_218;
        FUN_10006ff98();
        FUN_1000ad0d8();
        uVar1 = uStack_138;
        local_218 = pplVar13;
        local_210 = (long **)pppuVar9;
        if (((uint)uStack_138 >> 1 & 1) != 0) {
          __sSS6appendyySSF(0x2e2e2e20,0xe400000000000000);
        }
        pplVar13 = local_210;
        if ((uVar1 & 1) != 0) {
          __sSS6appendyySSF(local_218,local_210);
          _swift_bridgeObjectRelease(pplVar13);
          __sSS6appendyySSF(0x5d,0xe100000000000000);
          local_218 = (long **)0x5b;
          local_210 = (long **)0xe100000000000000;
        }
        pplVar13 = local_210;
        if (uStack_a0._1_1_ == '\x05') {
          __sSS6appendyySSF(local_218,local_210);
          _swift_bridgeObjectRelease(pplVar13);
          FUN_10008efb4(&local_140);
          pppuVar9 = (undefined8 ***)0xe300000000000000;
          pplVar13 = (long **)0x202d2d;
        }
        else {
          FUN_10008efb4(&local_140);
          pppuVar9 = (undefined8 ***)local_210;
          pplVar13 = local_218;
        }
        puVar7 = (undefined8 *)plVar15[2];
        local_148 = plVar15;
        if ((undefined8 *)((ulong)plVar15[3] >> 1) <= puVar7) {
          FUN_1000798d0((undefined8 *)0x1 < (undefined8 *)plVar15[3],
                        (undefined8 *)((long)puVar7 + 1U),1);
        }
        plVar15 = local_148;
        local_148[2] = (long)((long)puVar7 + 1U);
        local_148[(long)puVar7 * 2 + 4] = (long)pplVar13;
        local_148[(long)puVar7 * 2 + 5] = (long)pppuVar9;
        lVar16 = lVar16 + 0xd0;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_release(puVar2);
      puVar6 = &DAT_100103ed8;
      local_218 = (undefined8 **)plVar15;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar7 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar8 = 0x20;
      uVar10 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar6,puVar7);
      _swift_release(plVar15);
      local_218 = (undefined8 **)0x0;
      local_210 = (long **)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x11);
      pplVar13 = local_210;
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRelease(pplVar13);
      local_218 = param_1;
      local_210 = (long **)param_2;
      __sSS6appendyySSF(0x6f6974706f3c5b20,0xed0000205d3e736e);
      __sSS6appendyySSF(uVar8,uVar10);
    }
    _swift_bridgeObjectRelease(uVar10);
    uStack_138 = (ulong)local_210;
    local_140 = (long *)local_218;
  }
LAB_1000acb3c:
  auVar17._8_8_ = uStack_138;
  auVar17._0_8_ = local_140;
  return auVar17;
}

