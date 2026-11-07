// rea decompile_all
// name: FUN_1000adf84
// address: 0x1000adf84
// body: available
// range: 0x1000adf84-0x1000ae447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000adf84(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined **local_2e0;
  undefined ***pppuStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_210;
  ulong uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *local_138;
  ulong local_130;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = param_1;
  FUN_1000ae94c();
  lVar13 = *(long *)(lVar4 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      lVar15 = lVar13 - uVar14;
      puVar12 = (undefined8 *)(lVar4 + 0x30 + uVar14 * 0xd0);
      while( true ) {
        if (*(ulong *)(lVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae444);
          (*pcVar3)();
        }
        uStack_208 = puVar12[-1];
        local_210 = (undefined *)puVar12[-2];
        uStack_1f8 = puVar12[1];
        local_200 = *puVar12;
        uStack_1e8 = puVar12[3];
        uStack_1f0 = puVar12[2];
        uStack_1d8 = puVar12[5];
        local_1e0 = puVar12[4];
        uStack_1c8 = puVar12[7];
        uStack_1d0 = puVar12[6];
        uStack_1b8 = puVar12[9];
        local_1c0 = puVar12[8];
        uStack_1a8 = puVar12[0xb];
        uStack_1b0 = puVar12[10];
        uStack_198 = puVar12[0xd];
        local_1a0 = puVar12[0xc];
        uStack_188 = puVar12[0xf];
        uStack_190 = puVar12[0xe];
        uStack_178 = puVar12[0x11];
        local_180 = puVar12[0x10];
        uStack_168 = puVar12[0x13];
        uStack_170 = puVar12[0x12];
        uStack_158 = puVar12[0x15];
        local_160 = puVar12[0x14];
        uStack_148 = puVar12[0x17];
        uStack_150 = puVar12[0x16];
        if ((char)uStack_198 == '\0') break;
        puVar12 = puVar12 + 0x1a;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + -1;
        if (lVar15 == 0) goto LAB_1000ae264;
      }
      uStack_258 = puVar12[0x11];
      local_260 = puVar12[0x10];
      uStack_248 = puVar12[0x13];
      local_250 = puVar12[0x12];
      uStack_238 = puVar12[0x15];
      local_240 = puVar12[0x14];
      uStack_228 = puVar12[0x17];
      local_230 = puVar12[0x16];
      uStack_298 = puVar12[9];
      local_2a0 = puVar12[8];
      uStack_288 = puVar12[0xb];
      local_290 = puVar12[10];
      uStack_278 = puVar12[0xd];
      local_280 = puVar12[0xc];
      uStack_268 = puVar12[0xf];
      local_270 = puVar12[0xe];
      pppuStack_2d8 = (undefined ***)puVar12[1];
      local_2e0 = (undefined **)*puVar12;
      uStack_2c8 = puVar12[3];
      local_2d0 = puVar12[2];
      uStack_2b8 = puVar12[5];
      local_2c0 = puVar12[4];
      uStack_2a8 = puVar12[7];
      local_2b0 = puVar12[6];
      local_130 = uStack_208 & 0xfffffffffffffffe;
      local_138 = local_210;
      local_128 = local_2e0;
      uStack_120 = pppuStack_2d8;
      uStack_118 = local_2d0;
      uStack_110 = uStack_2c8;
      local_108 = local_2c0;
      uStack_100 = uStack_2b8;
      uStack_f8 = local_2b0;
      uStack_f0 = uStack_2a8;
      local_e8 = local_2a0;
      uStack_e0 = uStack_298;
      uStack_d8 = local_290;
      uStack_d0 = uStack_288;
      local_c8 = local_280;
      uStack_c0 = uStack_278;
      uStack_b8 = local_270;
      uStack_b0 = uStack_268;
      local_a8 = local_260;
      uStack_a0 = uStack_258;
      uStack_98 = local_250;
      uStack_90 = uStack_248;
      local_88 = local_240;
      uStack_80 = uStack_238;
      uStack_78 = local_230;
      uStack_70 = uStack_228;
      FUN_10006ff98(&local_210,&local_2e0);
      ppuVar5 = &local_210;
      pppuVar10 = &local_2e0;
      FUN_10006ff98();
      FUN_1000ad0d8();
      uVar1 = local_130;
      local_2e0 = ppuVar5;
      pppuStack_2d8 = pppuVar10;
      if (((uint)local_130 >> 1 & 1) != 0) {
        __sSS6appendyySSF(0x2e2e2e20,0xe400000000000000);
      }
      pppuVar10 = pppuStack_2d8;
      if ((uVar1 & 1) != 0) {
        __sSS6appendyySSF(local_2e0,pppuStack_2d8);
        _swift_bridgeObjectRelease(pppuVar10);
        __sSS6appendyySSF(0x5d,0xe100000000000000);
        local_2e0 = (undefined **)0x5b;
        pppuStack_2d8 = (undefined ***)0xe100000000000000;
      }
      pppuVar10 = pppuStack_2d8;
      if (uStack_98._1_1_ == '\x05') {
        __sSS6appendyySSF(local_2e0,pppuStack_2d8);
        _swift_bridgeObjectRelease(pppuVar10);
        FUN_10008efb4(&local_210);
        FUN_10008efb4(&local_138);
        pppuVar10 = (undefined ***)0xe300000000000000;
        ppuVar5 = (undefined **)0x202d2d;
      }
      else {
        FUN_10008efb4(&local_210);
        FUN_10008efb4(&local_138);
        pppuVar10 = pppuStack_2d8;
        ppuVar5 = local_2e0;
      }
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10006e610(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10006e610(puVar8,uVar1 + 1,1,puVar7);
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x20) = ppuVar5;
      *(undefined ****)(puVar8 + uVar1 * 0x10 + 0x28) = pppuVar10;
    } while (lVar15 != 1);
  }
LAB_1000ae264:
  _swift_bridgeObjectRelease();
  if (*(long *)(puVar8 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar8);
    local_210 = (undefined *)0x0;
    uStack_208 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x56);
    __sSS6appendyySSF(0xd000000000000022,0x80000001000caef0);
    FUN_1000ac068(param_1,param_2,param_3);
    uVar9 = 0xd000000000000032;
    uVar11 = 0x80000001000caf20;
  }
  else {
    if (*(long *)(puVar8 + 0x10) == 1) {
      local_210 = (undefined *)0x0;
      uStack_208 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1e);
      _swift_bridgeObjectRelease(uStack_208);
      local_210 = (undefined *)0xd00000000000001b;
      uStack_208 = 0x80000001000caed0;
      if (*(long *)(puVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae448);
        (*pcVar3)();
      }
      uVar9 = *(undefined8 *)(puVar8 + 0x20);
      uVar11 = *(undefined8 *)(puVar8 + 0x28);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      puVar6 = &DAT_100103ed8;
      local_210 = puVar8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar12 = &DAT_100103ee0;
      FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
      uVar9 = 0x27202c27;
      uVar11 = 0xe400000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x27202c27,0xe400000000000000,puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar8);
      local_210 = (undefined *)0x0;
      uStack_208 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x14);
      _swift_bridgeObjectRelease(uStack_208);
      local_210 = (undefined *)0xd000000000000011;
      uStack_208 = 0x80000001000caeb0;
    }
    __sSS6appendyySSF(uVar9,uVar11);
    _swift_bridgeObjectRelease(uVar11);
    uVar9 = 0x27;
    uVar11 = 0xe100000000000000;
  }
  __sSS6appendyySSF(uVar9,uVar11);
  auVar2._8_8_ = uStack_208;
  auVar2._0_8_ = local_210;
  return auVar2;
}

