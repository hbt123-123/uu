// rea decompile_all
// name: FUN_1000aaaa0
// address: 0x1000aaaa0
// body: available
// range: 0x1000aaaa0-0x1000abe33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000aabf4) */
/* WARNING: Removing unreachable block (ram,0x0001000abe30) */

void FUN_1000aaaa0(undefined8 *param_1,long ****param_2,long ****param_3,long ****param_4,
                  long ****param_5,uint param_6)

{
  long ***ppplVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  ulong uVar15;
  long **pplVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long lVar19;
  long ****pppplVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long ****pppplVar23;
  long ***ppplVar24;
  long ***ppplVar25;
  long ***local_3d0;
  long ***ppplStack_3c8;
  long ***local_3c0;
  long ***local_3b8;
  long ***local_3b0;
  long ***ppplStack_3a8;
  long ***local_3a0;
  long ***local_398;
  long ***local_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  byte local_380;
  undefined1 local_370 [8];
  long ***ppplStack_368;
  long ***local_360;
  undefined1 auStack_358 [8];
  long ***local_350;
  long ***ppplStack_348;
  long ***local_2f0;
  long ***ppplStack_2e8;
  char local_2e0;
  long ***local_2d8;
  long ***local_2d0;
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  long ***ppplStack_2b8;
  long ***local_2b0;
  long ***ppplStack_2a8;
  long ***local_2a0;
  long ***ppplStack_298;
  long ***local_290;
  undefined8 uStack_288;
  byte local_280;
  long ***local_278;
  long ***ppplStack_270;
  long ***local_268;
  long ***local_260;
  long ***local_258;
  long ***local_250;
  long ***ppplStack_248;
  long ***local_240;
  long ***ppplStack_238;
  long ***local_230;
  long ***ppplStack_228;
  long ***local_220;
  long ***ppplStack_218;
  long ***local_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  byte local_200;
  undefined7 uStack_1ff;
  byte local_1f8;
  long ***local_1f0;
  long ***ppplStack_1e8;
  long ***ppplStack_1e0;
  long ***local_1d8;
  long ***ppplStack_1d0;
  long ***local_1c8;
  long ***local_1c0;
  long ***ppplStack_1b8;
  long ***local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  long **local_198;
  long ***local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long ***local_140;
  long ***ppplStack_138;
  undefined8 local_130;
  long ***local_128;
  long ***local_120;
  long ***ppplStack_118;
  long ***local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long ***local_e8;
  long ***local_e0;
  long ***ppplStack_d8;
  long ***local_d0;
  long ***ppplStack_c8;
  long ***local_c0;
  long ***ppplStack_b8;
  long ***local_b0;
  long ***ppplStack_a8;
  long ***local_a0;
  long ***ppplStack_98;
  long ***local_90;
  undefined8 uStack_88;
  byte local_80;
  
  local_e0 = (long ***)param_2;
  _swift_errorRetain();
  puVar4 = &DAT_100104828;
  FUN_10000eb08(&DAT_100104828,&DAT_1000d5ba0);
  pppplVar20 = &local_250;
  pppplVar14 = &local_e0;
  _swift_dynamicCast(pppplVar20,pppplVar14,puVar4,&DAT_1000f9e40,0);
  pppplVar23 = (long ****)local_240;
  pppplVar18 = (long ****)ppplStack_248;
  ppplVar21 = local_250;
  if ((int)pppplVar20 == 0) {
    _swift_errorRelease(local_e0);
    local_2d0 = (long ***)param_2;
    _swift_errorRetain(param_2);
    pppplVar20 = &local_1f0;
    _swift_dynamicCast(pppplVar20,&local_2d0,puVar4,&DAT_1000fa8c8,0);
    if ((int)pppplVar20 != 0) {
      ppplStack_228 = local_1c8;
      local_230 = ppplStack_1d0;
      ppplStack_218 = ppplStack_1b8;
      local_220 = local_1c0;
      uStack_208 = (undefined1)uStack_1a8;
      uStack_207 = (undefined7)((ulong)uStack_1a8 >> 8);
      local_210 = local_1b0;
      local_200 = local_1a0;
      ppplStack_248 = ppplStack_1e8;
      local_250 = local_1f0;
      ppplStack_238 = local_1d8;
      local_240 = ppplStack_1e0;
      ppplVar21 = (long ***)&DAT_100103f10;
      FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
      _swift_allocObject();
      ppplVar21[3] = (long **)0x2;
      ppplVar21[2] = (long **)0x1;
      FUN_10007625c();
      ppplVar21[4] = (long **)param_3;
      ppplVar21[5] = (long **)param_4;
      FUN_10007b098();
      _swift_allocError(&DAT_1000f9e40,param_3,0,0);
      *param_3 = ppplVar21;
      param_3[2] = ppplStack_248;
      param_3[1] = local_250;
      param_3[4] = ppplStack_238;
      param_3[3] = local_240;
      *(byte *)(param_3 + 0xb) = local_200;
      param_3[10] = (long ***)CONCAT71(uStack_207,uStack_208);
      param_3[9] = local_210;
      param_3[8] = ppplStack_218;
      param_3[7] = local_220;
      param_3[6] = ppplStack_228;
      param_3[5] = local_230;
      FUN_1000aaaa0(&local_3d0);
      _swift_errorRelease(param_2);
      _swift_errorRelease(local_2d0);
      pppplVar20 = (long ****)local_3b8;
      pppplVar18 = (long ****)local_3d0;
      pppplVar23 = (long ****)ppplStack_3c8;
      pppplVar14 = (long ****)local_3c0;
      goto LAB_1000ab9b0;
    }
    _swift_errorRelease(local_2d0);
    pppplVar13 = (long ****)&DAT_100103f10;
    FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
    _swift_allocObject();
    pppplVar13[3] = (long ***)0x2;
    pppplVar13[2] = (long ***)0x1;
    pppplVar20 = param_3;
    pppplVar18 = param_4;
    FUN_10007625c();
    pppplVar13[4] = (long ***)pppplVar20;
    pppplVar13[5] = (long ***)pppplVar18;
    _swift_errorRetain(param_2);
    local_80 = 0xe;
    local_d0 = (long ***)param_2;
LAB_1000aaee8:
    _swift_bridgeObjectRetain(pppplVar13);
    FUN_1000a9b8c(&local_158);
    ppplStack_d8 = ppplStack_138;
    local_e0 = local_140;
    pppplVar20 = (long ****)local_140;
    pppplVar18 = (long ****)ppplStack_138;
    FUN_1000aa304();
    local_e8 = local_158;
    FUN_10001fc18(&local_e8,&DAT_100104430,&DAT_1000d4888);
    uStack_f8 = uStack_148;
    local_100 = local_150;
    FUN_100077ccc(&local_100);
    FUN_100077ccc(&local_e0);
    local_108 = local_130;
    FUN_10001fc18(&local_108,&DAT_100104530,&DAT_1000d4ba0);
    pppplVar11 = pppplVar13 + 2;
    ppplVar21 = *pppplVar11;
    pppplVar23 = (long ****)PTR___swiftEmptyArrayStorage_1000f0740;
    local_260 = (long ***)pppplVar20;
    local_258 = (long ***)pppplVar18;
    if (ppplVar21 != (long ***)0x0) {
      local_1f0 = (long ***)PTR___swiftEmptyArrayStorage_1000f0740;
      FUN_1000798d0(0,ppplVar21,0);
      pppplVar14 = pppplVar13 + 5;
      do {
        ppplVar1 = local_1f0;
        ppplVar22 = pppplVar14[-1];
        ppplVar25 = *pppplVar14;
        (*(code *)ppplVar25[3])();
        ppplVar24 = (long ***)ppplVar1[2];
        local_1f0 = ppplVar1;
        if ((long ***)((ulong)ppplVar1[3] >> 1) <= ppplVar24) {
          FUN_1000798d0((long ***)0x1 < ppplVar1[3],(long ***)((long)ppplVar24 + 1U),1);
        }
        local_1f0[2] = (long **)((long)ppplVar24 + 1U);
        local_1f0[(long)ppplVar24 * 2 + 4] = (long **)ppplVar22;
        local_1f0[(long)ppplVar24 * 2 + 5] = (long **)ppplVar25;
        pppplVar14 = pppplVar14 + 2;
        ppplVar21 = (long ***)((long)ppplVar21 + -1);
        pppplVar23 = (long ****)local_1f0;
      } while (ppplVar21 != (long ***)0x0);
    }
    puVar5 = &DAT_100103ed8;
    local_1f0 = (long ***)pppplVar23;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar6 = puVar5;
    FUN_100052ab4();
    uVar7 = 0x20;
    pppplVar14 = (long ****)0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar5,puVar6);
    _swift_bridgeObjectRelease(pppplVar23);
    uVar8 = 0;
    pppplVar23 = pppplVar13;
    FUN_1000a0248(0,pppplVar13);
    uVar9 = uVar8;
    FUN_100084b24();
    _swift_bridgeObjectRelease(uVar8);
    if (((uint)puVar5 & 0xff) < 0xfe) {
      uVar15 = (ulong)pppplVar20 & 0xffffffffffff;
      if (((ulong)pppplVar18 & 0x2000000000000000) != 0) {
        uVar15 = (ulong)pppplVar18 >> 0x38 & 0xf;
      }
      if (uVar15 != 0) {
        __sSS6appendyySSF(10,0xe100000000000000);
      }
      local_1f0 = (long ***)0x0;
      ppplStack_1e8 = (long ***)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x23);
      _swift_bridgeObjectRelease(ppplStack_1e8);
      local_1f0 = (long ***)0x27206565532020;
      ppplStack_1e8 = (long ***)0xe700000000000000;
      __sSS6appendyySSF(uVar7,pppplVar14);
      _swift_bridgeObjectRelease(pppplVar14);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      uVar7 = uVar9;
      pppplVar20 = pppplVar23;
      FUN_1000979e4(uVar9,pppplVar23,puVar5);
      FUN_10008f6ec(uVar9,pppplVar23,puVar5);
      __sSS6appendyySSF(uVar7,pppplVar20);
      _swift_bridgeObjectRelease(pppplVar20);
      __sSS6appendyySSF(0xd000000000000017,0x80000001000caa60);
      pppplVar14 = (long ****)ppplStack_1e8;
      __sSS6appendyySSF(local_1f0,ppplStack_1e8);
    }
    _swift_bridgeObjectRelease(pppplVar14);
    ppplVar21 = local_d0;
    pppplVar20 = (long ****)local_258;
    local_200 = local_80;
    ppplStack_228 = ppplStack_a8;
    local_230 = local_b0;
    ppplStack_218 = ppplStack_98;
    local_220 = local_a0;
    uStack_208 = (undefined1)uStack_88;
    uStack_207 = (undefined7)((ulong)uStack_88 >> 8);
    local_210 = local_90;
    ppplStack_248 = ppplStack_c8;
    local_250 = local_d0;
    ppplStack_238 = ppplStack_b8;
    local_240 = local_c0;
    if (local_80 == 0xf) {
      puVar4 = &DAT_100103f10;
      FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      FUN_10007625c();
      *(long *****)(puVar4 + 0x20) = param_3;
      *(long *****)(puVar4 + 0x28) = param_4;
      FUN_1000a9b8c(&local_3d0,puVar4,0);
      uVar15 = (ulong)(param_6 & 1);
      FUN_1000a4ab4(param_5,uVar15);
      local_2f0 = local_3d0;
      FUN_10001fc18(&local_2f0,&DAT_100104430,&DAT_1000d4888);
      ppplStack_2c8 = local_3c0;
      local_2d0 = ppplStack_3c8;
      FUN_100077ccc(&local_2d0);
      ppplStack_348 = local_3b0;
      local_350 = local_3b8;
      FUN_100077ccc(&local_350);
      local_120 = ppplStack_3a8;
      FUN_10001fc18(&local_120,&DAT_100104530,&DAT_1000d4ba0);
      local_1f0 = (long ***)0xa;
      ppplStack_1e8 = (long ***)0xe100000000000000;
      __sSS6appendyySSF(param_5,uVar15);
      _swift_bridgeObjectRelease(uVar15);
      pppplVar20 = (long ****)ppplStack_1e8;
      pppplVar14 = (long ****)local_1f0;
    }
    else {
      if (local_80 == 0xe) {
        local_268 = local_d0;
        ppplStack_3a8 = ppplStack_a8;
        local_3b0 = local_b0;
        local_398 = ppplStack_98;
        local_3a0 = local_a0;
        local_390 = local_90;
        local_380 = local_80;
        ppplStack_3c8 = ppplStack_c8;
        local_3d0 = local_d0;
        local_3b8 = ppplStack_b8;
        local_3c0 = local_c0;
        uStack_388 = uStack_208;
        uStack_387 = uStack_207;
        FUN_100095794(&local_3d0,&local_1f0);
        pppplVar20 = &local_278;
        _swift_dynamicCast(pppplVar20,&local_268,puVar4,&DAT_1000f78c8,0);
        if ((int)pppplVar20 != 0) {
          _swift_bridgeObjectRelease(pppplVar13);
          _swift_errorRelease(param_2);
          FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
          _swift_errorRelease(local_268);
          local_3a0._0_1_ = 1;
          local_3b0 = (long ***)(long ****)0x0;
          pppplVar20 = (long ****)local_258;
          ppplStack_3a8 = (long ***)(long ****)0xe000000000000000;
          pppplVar18 = (long ****)local_278;
          pppplVar23 = (long ****)ppplStack_270;
          pppplVar14 = (long ****)local_260;
          goto LAB_1000ab9b0;
        }
        _swift_bridgeObjectRelease(local_258);
        _swift_errorRelease(local_268);
        local_2d8 = ppplVar21;
        ppplStack_2a8 = ppplStack_a8;
        local_2b0 = local_b0;
        ppplStack_298 = ppplStack_98;
        local_2a0 = local_a0;
        uStack_288 = uStack_88;
        local_290 = local_90;
        local_280 = local_80;
        ppplStack_2c8 = ppplStack_c8;
        local_2d0 = local_d0;
        ppplStack_2b8 = ppplStack_b8;
        ppplStack_2c0 = local_c0;
        FUN_100095794(&local_2d0,&local_1f0);
        iVar3 = (int)&local_2f0;
        pppplVar23 = &local_2d8;
        puVar5 = puVar4;
        _swift_dynamicCast();
        pppplVar18 = (long ****)local_2f0;
        if (iVar3 == 0) {
          _swift_bridgeObjectRelease(pppplVar13);
          _swift_errorRelease(local_2d8);
          local_120 = ppplVar21;
          local_1c8 = ppplStack_a8;
          ppplStack_1d0 = local_b0;
          ppplStack_1b8 = ppplStack_98;
          local_1c0 = local_a0;
          uStack_1a8 = uStack_88;
          local_1b0 = local_90;
          local_1a0 = local_80;
          ppplStack_1e8 = ppplStack_c8;
          local_1f0 = local_d0;
          local_1d8 = ppplStack_b8;
          ppplStack_1e0 = local_c0;
          FUN_100095794(&local_1f0,&local_350);
          pppplVar20 = &local_110;
          _swift_dynamicCast(pppplVar20,&local_120,puVar4,&DAT_1000f78f0,0);
          if ((int)pppplVar20 == 0) {
            _swift_errorRelease(local_120);
            _swift_getErrorValue(ppplVar21,auStack_358,local_370);
            pppplVar18 = (long ****)ppplStack_368;
            pppplVar23 = (long ****)local_360;
            FUN_1000b2a50();
            FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
            _swift_errorRelease(param_2);
            pppplVar20 = (long ****)0x0;
            local_3a0._0_1_ = 2;
            pppplVar14 = (long ****)0x1;
            local_3b0 = (long ***)(long ****)0x0;
            ppplStack_3a8 = (long ***)(long ****)0x0;
          }
          else {
            pppplVar14 = (long ****)((ulong)local_110 & 0xffffffff);
            _swift_errorRelease(param_2);
            FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
            _swift_errorRelease(local_120);
            pppplVar18 = (long ****)0x0;
            pppplVar20 = (long ****)0x0;
            local_3a0._0_1_ = 2;
            pppplVar23 = (long ****)0xe000000000000000;
            local_3b0 = (long ***)(long ****)0x0;
            ppplStack_3a8 = (long ***)(long ****)0x0;
          }
          goto LAB_1000ab9b0;
        }
        if (local_2e0 == '\0') {
          if ((long ****)local_2f0 != (long ****)0x0) {
            _swift_bridgeObjectRelease(pppplVar13);
            FUN_10007625c();
            FUN_100093b84();
            pppplVar20 = param_3;
            FUN_1000b3d2c();
            if ((ulong)pppplVar20 >> 0x3e == 0) {
              pppplVar18 = *(long *****)(((ulong)pppplVar20 & 0xffffffffffffff8) + 0x10);
              if (pppplVar18 != (long ****)0x0) goto LAB_1000aba34;
LAB_1000abc3c:
              _swift_bridgeObjectRelease(pppplVar20);
              pppplVar13 = (long ****)PTR___swiftEmptyArrayStorage_1000f0740;
            }
            else {
              pppplVar18 = (long ****)((ulong)pppplVar20 & 0xffffffffffffff8);
              if ((long)pppplVar20 < 0) {
                pppplVar18 = pppplVar20;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
              if (pppplVar18 == (long ****)0x0) goto LAB_1000abc3c;
LAB_1000aba34:
              local_1f0 = (long ***)PTR___swiftEmptyArrayStorage_1000f0740;
              FUN_100079a34(0,(ulong)pppplVar18 & ((long)pppplVar18 >> 0x3f ^ 0xffffffffffffffffU),0
                           );
              if ((long)pppplVar18 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000abe2c);
                (*pcVar2)();
              }
              pppplVar23 = (long ****)0x0;
              do {
                ppplVar21 = local_1f0;
                if (((ulong)pppplVar20 & 0xc000000000000001) == 0) {
                  pppplVar14 = (long ****)pppplVar20[(long)((long)pppplVar23 + 4)];
                  _swift_retain();
                }
                else {
                  pppplVar14 = pppplVar23;
                  FUN_1000794e0(pppplVar23,pppplVar20);
                }
                ppplVar25 = pppplVar14[3];
                ppplVar24 = pppplVar14[2];
                _swift_release();
                ppplVar22 = (long ***)ppplVar21[2];
                local_1f0 = ppplVar21;
                if ((long ***)((ulong)ppplVar21[3] >> 1) <= ppplVar22) {
                  FUN_100079a34((long ***)0x1 < ppplVar21[3],(long ***)((long)ppplVar22 + 1U),1);
                }
                pppplVar13 = (long ****)local_1f0;
                pppplVar23 = (long ****)((long)pppplVar23 + 1);
                local_1f0[2] = (long **)((long)ppplVar22 + 1U);
                local_1f0[(long)ppplVar22 * 2 + 5] = (long **)ppplVar25;
                local_1f0[(long)ppplVar22 * 2 + 4] = (long **)ppplVar24;
              } while (pppplVar18 != pppplVar23);
              _swift_bridgeObjectRelease(pppplVar20);
            }
            if (pppplVar13[2] == (long ***)0x0) {
              _swift_bridgeObjectRelease(pppplVar13);
              pppplVar13 = (long ****)&DAT_100103f10;
              FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
              _swift_allocObject();
              pppplVar13[3] = (long ***)0x2;
              pppplVar13[2] = (long ***)0x1;
              ppplVar21 = param_3[2];
              pppplVar13[5] = param_3[3];
              pppplVar13[4] = ppplVar21;
            }
            _swift_bridgeObjectRelease(puVar5);
            _swift_release(param_4);
            _swift_release(param_3);
          }
          FUN_1000a9b8c(&local_1f0,pppplVar13,0);
          pppplVar23 = (long ****)(ulong)(param_6 & 1);
          FUN_1000a4ab4();
          local_110 = local_1f0;
          FUN_10001fc18(&local_110,&DAT_100104430,&DAT_1000d4888);
          ppplStack_348 = ppplStack_1e0;
          local_350 = ppplStack_1e8;
          FUN_100077ccc(&local_350);
          ppplStack_118 = ppplStack_1d0;
          local_120 = local_1d8;
          FUN_100077ccc(&local_120);
          local_128 = local_1c8;
          FUN_10001fc18(&local_128,&DAT_100104530,&DAT_1000d4ba0);
        }
        else {
          if (local_2e0 == '\x01') {
            _swift_errorRelease(param_2);
            FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
            _swift_bridgeObjectRelease(pppplVar13);
            pppplVar20 = (long ****)local_2d8;
            pppplVar23 = (long ****)ppplStack_2e8;
            goto LAB_1000ab998;
          }
          if ((long ****)local_2f0 != (long ****)0x0) {
            _swift_bridgeObjectRelease(pppplVar13);
            FUN_10007625c(param_3,param_4);
            FUN_100093b84();
            pppplVar20 = param_3;
            FUN_1000b3d2c();
            if ((ulong)pppplVar20 >> 0x3e == 0) {
              pppplVar23 = *(long *****)(((ulong)pppplVar20 & 0xffffffffffffff8) + 0x10);
              if (pppplVar23 != (long ****)0x0) goto LAB_1000abb40;
LAB_1000abd68:
              _swift_bridgeObjectRelease(pppplVar20);
              pppplVar13 = (long ****)PTR___swiftEmptyArrayStorage_1000f0740;
            }
            else {
              pppplVar23 = (long ****)((ulong)pppplVar20 & 0xffffffffffffff8);
              if ((long)pppplVar20 < 0) {
                pppplVar23 = pppplVar20;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
              if (pppplVar23 == (long ****)0x0) goto LAB_1000abd68;
LAB_1000abb40:
              local_1f0 = (long ***)PTR___swiftEmptyArrayStorage_1000f0740;
              pppplVar18 = (long ****)
                           ((ulong)pppplVar23 & ((long)pppplVar23 >> 0x3f ^ 0xffffffffffffffffU));
              FUN_100079a34(0,pppplVar18,0);
              if ((long)pppplVar23 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000abe30);
                (*pcVar2)();
              }
              pppplVar14 = (long ****)0x0;
              do {
                ppplVar21 = local_1f0;
                if (((ulong)pppplVar20 & 0xc000000000000001) == 0) {
                  pppplVar13 = (long ****)pppplVar20[(long)((long)pppplVar14 + 4)];
                  _swift_retain();
                }
                else {
                  pppplVar13 = pppplVar14;
                  pppplVar18 = pppplVar20;
                  FUN_1000794e0();
                }
                ppplVar25 = pppplVar13[3];
                ppplVar24 = pppplVar13[2];
                _swift_release();
                ppplVar22 = (long ***)ppplVar21[2];
                pppplVar11 = (long ****)((long)ppplVar22 + 1);
                local_1f0 = ppplVar21;
                if ((long ***)((ulong)ppplVar21[3] >> 1) <= ppplVar22) {
                  pppplVar18 = pppplVar11;
                  FUN_100079a34((long ***)0x1 < ppplVar21[3],pppplVar11,1);
                }
                pppplVar13 = (long ****)local_1f0;
                pppplVar14 = (long ****)((long)pppplVar14 + 1);
                local_1f0[2] = (long **)pppplVar11;
                local_1f0[(long)ppplVar22 * 2 + 5] = (long **)ppplVar25;
                local_1f0[(long)ppplVar22 * 2 + 4] = (long **)ppplVar24;
              } while (pppplVar23 != pppplVar14);
              _swift_bridgeObjectRelease(pppplVar20);
            }
            pppplVar23 = pppplVar18;
            if (pppplVar13[2] == (long ***)0x0) {
              _swift_bridgeObjectRelease(pppplVar13);
              pppplVar13 = (long ****)&DAT_100103f10;
              FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
              pppplVar23 = (long ****)0x30;
              _swift_allocObject();
              pppplVar13[3] = (long ***)0x2;
              pppplVar13[2] = (long ***)0x1;
              ppplVar21 = param_3[2];
              pppplVar13[5] = param_3[3];
              pppplVar13[4] = ppplVar21;
            }
            _swift_bridgeObjectRelease(puVar5);
            _swift_release(param_4);
            _swift_release(param_3);
          }
          FUN_1000a192c(&local_1f0,pppplVar13);
          param_5 = &local_1f0;
          FUN_10007711c();
          FUN_100054630(&local_1f0);
        }
        _swift_errorRelease(param_2);
        FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
        pppplVar20 = (long ****)local_2d8;
        pppplVar18 = param_5;
        goto LAB_1000ab998;
      }
      _swift_bridgeObjectRetain(local_258);
      pppplVar14 = (long ****)local_260;
    }
    if (*pppplVar11 == (long ***)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000abc24);
      (*pcVar2)();
    }
    pppplVar10 = (long ****)pppplVar11[(long)*pppplVar11 * 2];
    ppplVar21 = (pppplVar11 + (long)*pppplVar11 * 2)[1];
    _swift_bridgeObjectRelease(pppplVar13);
    pplVar16 = ppplVar21[1];
    FUN_1000772e8(pppplVar10,pplVar16,0,0,0,0);
    pppplVar13 = pppplVar10;
    FUN_100054664();
    pppplVar18 = (long ****)&DAT_1000fa8c8;
    pppplVar23 = pppplVar13;
    _swift_allocError(&DAT_1000fa8c8,pppplVar13,0,0);
    pppplVar23[1] = ppplStack_248;
    *pppplVar23 = local_250;
    pppplVar23[3] = ppplStack_238;
    pppplVar23[2] = local_240;
    *(byte *)(pppplVar23 + 10) = local_200;
    pppplVar23[7] = ppplStack_218;
    pppplVar23[6] = local_220;
    pppplVar23[9] = (long ***)CONCAT71(uStack_207,uStack_208);
    pppplVar23[8] = local_210;
    pppplVar23[5] = ppplStack_228;
    pppplVar23[4] = local_230;
    FUN_100095794(&local_250,&local_1f0);
    pppplVar23 = pppplVar18;
    pppplVar11 = pppplVar10;
    FUN_1000ace48(pppplVar18,pppplVar10,pplVar16);
    _swift_errorRelease(pppplVar18);
    pppplVar18 = (long ****)0x0;
    if (pppplVar11 != (long ****)0x0) {
      pppplVar18 = pppplVar23;
    }
    pppplVar23 = (long ****)0xe000000000000000;
    if (pppplVar11 != (long ****)0x0) {
      pppplVar23 = pppplVar11;
    }
    pppplVar11 = (long ****)&DAT_1000fa8c8;
    _swift_allocError(&DAT_1000fa8c8,pppplVar13,0,0);
    pppplVar13[1] = ppplStack_248;
    *pppplVar13 = local_250;
    pppplVar13[3] = ppplStack_238;
    pppplVar13[2] = local_240;
    *(byte *)(pppplVar13 + 10) = local_200;
    pppplVar13[7] = ppplStack_218;
    pppplVar13[6] = local_220;
    pppplVar13[9] = (long ***)CONCAT71(uStack_207,uStack_208);
    pppplVar13[8] = local_210;
    pppplVar13[5] = ppplStack_228;
    pppplVar13[4] = local_230;
    FUN_100095794(&local_250,&local_1f0);
    pppplVar12 = pppplVar11;
    pppplVar17 = pppplVar10;
    FUN_1000ace54(pppplVar11,pppplVar10,pplVar16);
    _swift_bridgeObjectRelease(pplVar16);
    _swift_bridgeObjectRelease(pppplVar10);
    _swift_errorRelease(pppplVar11);
    pppplVar13 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      pppplVar13 = pppplVar12;
    }
    pppplVar11 = (long ****)0xe000000000000000;
    if (pppplVar17 != (long ****)0x0) {
      pppplVar11 = pppplVar17;
    }
    FUN_10001fc18(&local_d0,&DAT_100104d58,&DAT_1000d6a88);
    _swift_errorRelease(param_2);
    _swift_bridgeObjectRelease(local_258);
    local_3a0._0_1_ = 1;
    local_3b0 = (long ***)pppplVar13;
    ppplStack_3a8 = (long ***)pppplVar11;
  }
  else {
    ppplStack_3a8 = ppplStack_228;
    local_3b0 = local_230;
    local_398 = ppplStack_218;
    local_3a0 = local_220;
    uStack_388 = uStack_208;
    local_390 = local_210;
    uStack_387 = uStack_207;
    local_380 = local_200;
    ppplStack_3c8 = ppplStack_248;
    local_3d0 = local_250;
    local_3b8 = ppplStack_238;
    local_3c0 = local_240;
    ppplStack_2c8 = local_240;
    local_2d0 = ppplStack_248;
    ppplStack_2b8 = local_230;
    ppplStack_2c0 = ppplStack_238;
    uStack_288 = CONCAT71(uStack_1ff,local_200);
    local_290 = (long ***)CONCAT71(uStack_207,uStack_208);
    local_280 = local_1f8;
    ppplStack_298 = local_210;
    local_2a0 = ppplStack_218;
    ppplStack_2a8 = local_220;
    local_2b0 = ppplStack_228;
    if (local_1f8 < 2) {
      if (local_1f8 == 0) {
        _swift_bridgeObjectRetain(local_250);
        FUN_1000a9b8c(&local_1f0);
        pppplVar14 = (long ****)(ulong)(param_6 & 1);
        FUN_1000a4ab4();
        FUN_1000ac034(&local_3d0);
        local_158 = local_1f0;
        FUN_10001fc18(&local_158,&DAT_100104430,&DAT_1000d4888);
        ppplStack_c8 = ppplStack_1e0;
        local_d0 = ppplStack_1e8;
        FUN_100077ccc(&local_d0);
        ppplStack_348 = ppplStack_1d0;
        local_350 = local_1d8;
        FUN_100077ccc(&local_350);
        local_2f0 = local_1c8;
        FUN_10001fc18(&local_2f0,&DAT_100104530,&DAT_1000d4ba0);
        pppplVar18 = param_5;
        goto LAB_1000ab990;
      }
      if (local_1f8 != 1) goto LAB_1000aae8c;
      FUN_10007625c();
      FUN_100095794((ulong)&local_3d0 | 8,&local_1f0);
      FUN_100095794((ulong)&local_3d0 | 8,&local_1f0);
      FUN_1000543ec(param_3,param_4,ppplStack_248,local_240);
      pppplVar23 = param_4;
      FUN_1000537c8();
      FUN_1000ac034(&local_3d0);
      FUN_1000837f4((ulong)&local_3d0 | 8);
      _swift_bridgeObjectRelease(param_4);
      _swift_errorRelease(param_2);
      _swift_errorRelease(local_e0);
      pppplVar18 = param_3;
    }
    else {
      if (local_1f8 == 2) {
        _swift_errorRelease(param_2);
        _swift_bridgeObjectRetain(pppplVar23);
        FUN_1000ac034(&local_3d0);
        pppplVar20 = (long ****)local_e0;
      }
      else {
        if (local_1f8 != 0x11) {
LAB_1000aae8c:
          _swift_bridgeObjectRetain(local_250);
          FUN_100095794((ulong)&local_3d0 | 8,&local_1f0);
          FUN_1000ac034(&local_3d0);
          _swift_errorRelease(local_e0);
          ppplStack_a8 = ppplStack_2a8;
          local_b0 = local_2b0;
          ppplStack_98 = ppplStack_298;
          local_a0 = local_2a0;
          uStack_88 = uStack_288;
          local_90 = local_290;
          local_80 = local_280;
          ppplStack_c8 = ppplStack_2c8;
          local_d0 = local_2d0;
          ppplStack_b8 = ppplStack_2b8;
          local_c0 = ppplStack_2c0;
          pppplVar13 = (long ****)local_250;
          goto LAB_1000aaee8;
        }
        if (((((long ****)local_240 == (long ****)0x0 && (long ****)ppplStack_248 == (long ****)0x0)
             && (CONCAT71(uStack_1ff,local_200) == 0 && CONCAT71(uStack_207,uStack_208) == 0)) &&
            (((long ****)local_210 == (long ****)0x0 && (long ****)ppplStack_218 == (long ****)0x0)
            && (long ****)local_220 == (long ****)0x0)) &&
            (((long ****)ppplStack_228 == (long ****)0x0 && (long ****)local_230 == (long ****)0x0)
            && (long ****)ppplStack_238 == (long ****)0x0)) {
          ppplVar22 = (long ***)local_250[2];
          pppplVar20 = (long ****)PTR___swiftEmptyArrayStorage_1000f0740;
          if (ppplVar22 != (long ***)0x0) {
            local_d0 = (long ***)PTR___swiftEmptyArrayStorage_1000f0740;
            _swift_bridgeObjectRetain(local_250);
            FUN_1000798d0(0,ppplVar22,0);
            pppplVar18 = (long ****)(ppplVar21 + 5);
            do {
              ppplVar1 = local_d0;
              (*(code *)(*pppplVar18)[2])(&local_1f0,pppplVar18[-1]);
              pplVar16 = local_198;
              ppplVar25 = (long ***)CONCAT71(uStack_19f,local_1a0);
              _swift_bridgeObjectRetain(local_198);
              FUN_10006e954(&local_1f0);
              ppplVar24 = (long ***)ppplVar1[2];
              local_d0 = ppplVar1;
              if ((long ***)((ulong)ppplVar1[3] >> 1) <= ppplVar24) {
                FUN_1000798d0((long ***)0x1 < ppplVar1[3],(long ***)((long)ppplVar24 + 1U),1);
              }
              pppplVar20 = (long ****)local_d0;
              local_d0[2] = (long **)((long)ppplVar24 + 1U);
              local_d0[(long)ppplVar24 * 2 + 4] = (long **)ppplVar25;
              local_d0[(long)ppplVar24 * 2 + 5] = pplVar16;
              pppplVar18 = pppplVar18 + 2;
              ppplVar22 = (long ***)((long)ppplVar22 + -1);
            } while (ppplVar22 != (long ***)0x0);
            _swift_bridgeObjectRelease(ppplVar21);
          }
          ppplVar21 = pppplVar20[2];
          local_158 = (long ***)pppplVar20;
          if (ppplVar21 != (long ***)0x0) {
            lVar19 = 1 - (long)ppplVar21;
            pppplVar18 = pppplVar20 + (long)ppplVar21 * 2 + 3;
            do {
              uVar15 = (ulong)pppplVar18[-1] & 0xffffffffffff;
              if (((ulong)*pppplVar18 & 0x2000000000000000) != 0) {
                uVar15 = (ulong)*pppplVar18 >> 0x38 & 0xf;
              }
              if (uVar15 != 0) {
                local_350 = (long ***)-lVar19;
                FUN_1000abff4(&local_d0,&local_350,&local_158);
                pppplVar23 = (long ****)ppplStack_c8;
                pppplVar13 = (long ****)local_d0;
                goto LAB_1000ab94c;
              }
              lVar19 = lVar19 + 1;
              pppplVar18 = pppplVar18 + -2;
            } while (lVar19 != 1);
          }
          pppplVar23 = (long ****)0x0;
          pppplVar13 = (long ****)0x0;
LAB_1000ab94c:
          _swift_bridgeObjectRelease(pppplVar20);
          pppplVar14 = (long ****)0x80000001000caa80;
          pppplVar18 = (long ****)0xd000000000000013;
          if (pppplVar23 != (long ****)0x0) {
            pppplVar14 = pppplVar23;
            pppplVar18 = pppplVar13;
          }
          FUN_1000ac034(&local_3d0);
          FUN_1000837f4((ulong)&local_3d0 | 8);
        }
        else {
          if (((long ****)ppplStack_248 != (long ****)0x1) ||
             ((((CONCAT71(uStack_1ff,local_200) != 0 || (long ****)local_240 != (long ****)0x0) ||
               (CONCAT71(uStack_207,uStack_208) != 0 || (long ****)local_210 != (long ****)0x0)) ||
              (((long ****)ppplStack_218 != (long ****)0x0 || (long ****)local_220 != (long ****)0x0
               ) || (long ****)ppplStack_228 != (long ****)0x0)) ||
              ((long ****)local_230 != (long ****)0x0 || (long ****)ppplStack_238 != (long ****)0x0)
             )) goto LAB_1000aae8c;
          _swift_bridgeObjectRetain(local_250);
          FUN_1000a192c(&local_1f0);
          pppplVar18 = &local_1f0;
          FUN_10007711c();
          FUN_1000ac034(&local_3d0);
          FUN_100054630(&local_1f0);
        }
LAB_1000ab990:
        _swift_errorRelease(param_2);
        pppplVar20 = (long ****)local_e0;
        pppplVar23 = pppplVar14;
      }
LAB_1000ab998:
      _swift_errorRelease(pppplVar20);
    }
    local_3a0._0_1_ = 0;
    local_3b0 = (long ***)(long ****)0x0;
    pppplVar20 = (long ****)0x0;
    ppplStack_3a8 = (long ***)(long ****)0x0;
    pppplVar14 = (long ****)0x0;
  }
LAB_1000ab9b0:
  *param_1 = pppplVar18;
  param_1[1] = pppplVar23;
  param_1[2] = pppplVar14;
  param_1[3] = pppplVar20;
  param_1[4] = local_3b0;
  param_1[5] = ppplStack_3a8;
  *(undefined1 *)(param_1 + 6) = local_3a0._0_1_;
  return;
}

