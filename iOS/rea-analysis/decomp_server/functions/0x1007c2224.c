// rea decompile_all
// name: FUN_1007c2224
// address: 0x1007c2224
// body: available
// range: 0x1007c2224-0x1007c2a4b inclusive
// range: 0x1007c4d6c-0x1007c4edb inclusive
// range: 0x1007c4ef8-0x1007c4f13 inclusive
// range: 0x1007c4f20-0x1007c4f23 inclusive
// range: 0x1007c4f2c-0x1007c4f2f inclusive
// range: 0x1007c4f40-0x1007c4f47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007c242c) */

undefined * FUN_1007c2224(code *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_350;
  long local_348;
  long local_340;
  ulong *local_338;
  ulong local_330;
  ulong local_328;
  long local_320;
  undefined *local_318;
  ulong local_310;
  long local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined *local_2d8;
  ulong *local_2d0;
  ulong local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  undefined8 local_298;
  long local_290;
  long local_288;
  undefined *local_280;
  undefined *local_278;
  long local_268;
  long local_258;
  long local_250;
  undefined8 local_248;
  ulong local_240;
  long local_238;
  ulong local_230;
  long local_228;
  long local_210;
  long local_200;
  long local_1e0;
  long local_1d0;
  long local_1c0;
  long local_1b8;
  long local_198;
  long local_178;
  long local_170;
  long local_168;
  code *local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  code *local_118;
  code *local_110;
  undefined *local_90 [3];
  undefined *local_78;
  
  lVar6 = 0;
  local_110 = param_1;
  __s10Foundation4DateVMa();
  local_2c0 = *(long *)(lVar6 + -8);
  lVar12 = (long)&local_350 - (*(long *)(local_2c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100abce00;
  local_2b8 = lVar6;
  local_1d0 = lVar12;
  FUN_1007b4550();
  uVar11 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_288 = lVar12 - uVar11;
  local_210 = local_288 - uVar11;
  local_1b8 = local_210 - uVar11;
  local_140 = local_1b8 - uVar11;
  local_268 = local_140 - uVar11;
  local_2e0 = local_268 - uVar11;
  local_200 = local_2e0 - uVar11;
  local_178 = local_200 - uVar11;
  local_130 = local_178 - uVar11;
  local_1e0 = local_130 - uVar11;
  local_148 = local_1e0 - uVar11;
  local_278 = (undefined *)(local_148 - uVar11);
  lVar12 = (long)local_278 - uVar11;
  lVar6 = 0;
  local_1c0 = lVar12;
  FUN_1007c5008();
  lVar15 = *(long *)(lVar6 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uVar11;
  lVar16 = lVar12 - uVar11;
  lVar18 = lVar16 - uVar11;
  lVar19 = lVar18 - uVar11;
  lVar20 = lVar19 - uVar11;
  lVar17 = lVar20 - uVar11;
  local_128 = lVar6;
  (*local_110)();
  if (lVar6 == 0) {
    return (undefined *)0x0;
  }
  local_2e8 = 0;
  local_338 = (ulong *)(lVar6 + 0x40);
  uVar13 = *local_338;
  uVar14 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar10 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar14 = uVar14 + 0x3f >> 6;
  local_290 = lVar15;
  local_258 = lVar12;
  local_238 = lVar17 - uVar11;
  local_228 = lVar18;
  local_198 = lVar17;
  local_170 = lVar16;
  local_168 = lVar19;
  local_138 = lVar20;
  _swift_bridgeObjectRetain(lVar6);
  lVar15 = local_128;
  local_350 = uVar14 - 4;
  local_318 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  local_348 = lVar6 + 0x60;
  lVar12 = 0;
  uVar11 = uVar10 & uVar13;
  local_340 = lVar6;
  local_330 = uVar14;
  if ((uVar10 & uVar13) == 0) goto LAB_1007c2620;
LAB_1007c25f8:
  uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  local_328 = uVar11 - 1 & uVar11;
  uVar11 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar12 << 6;
  local_320 = lVar12;
LAB_1007c26b8:
  puVar7 = &DAT_100abc7d0;
  plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar11 * 0x10);
  local_2f0 = *plVar1;
  uVar10 = plVar1[1];
  lVar12 = *(long *)(*(long *)(lVar6 + 0x38) + uVar11 * 8);
  FUN_1007b4550();
  lVar6 = lVar12;
  local_2d8 = puVar7;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  local_2d0 = (ulong *)(lVar12 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  local_230 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    local_230 = ~(-1L << (uVar11 & 0x3f));
  }
  local_230 = local_230 & *local_2d0;
  local_2c8 = uVar11 + 0x3f >> 6;
  local_2b0 = lVar6 + 0x40;
  local_310 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  local_2a0 = lVar12;
  _swift_bridgeObjectRetain(lVar12);
  _swift_retain(lVar6);
  lVar12 = 0;
  local_2a8 = lVar6;
  do {
    lVar18 = local_238;
    lVar17 = local_290;
    lVar16 = local_2f0;
    if (local_230 == 0) {
      lVar19 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c4f30);
        (*pcVar4)();
      }
      if ((long)local_2c8 <= lVar19) break;
      uVar11 = local_2d0[lVar19];
      if (uVar11 == 0) {
        lVar19 = lVar12 + 2;
        if ((long)local_2c8 <= lVar19) break;
        uVar11 = local_2d0[lVar19];
        if (uVar11 == 0) {
          lVar19 = lVar12 + 3;
          if ((long)local_2c8 <= lVar19) break;
          uVar11 = local_2d0[lVar19];
          if (uVar11 == 0) {
            lVar19 = lVar12 + 4;
            if ((long)local_2c8 <= lVar19) break;
            uVar11 = local_2d0[lVar19];
            if (uVar11 == 0) {
              lVar19 = lVar12 + 5;
              if ((long)local_2c8 <= lVar19) break;
              uVar11 = local_2d0[lVar19];
              while (uVar11 == 0) {
                bVar5 = SCARRY8(lVar19,1);
                lVar19 = lVar19 + 1;
                if (bVar5) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c4f44);
                  (*pcVar4)();
                }
                if ((long)local_2c8 <= lVar19) goto LAB_1007c4dc8;
                uVar11 = local_2d0[lVar19];
              }
            }
          }
        }
      }
      uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_230 = uVar11 - 1 & uVar11;
      uVar11 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar19 * 0x40;
      local_250 = lVar19;
    }
    else {
      uVar11 = (local_230 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_230 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      local_230 = local_230 - 1 & local_230;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar12 << 6;
      local_250 = lVar12;
    }
    lVar6 = *(long *)(local_2a0 + 0x30);
    local_110 = *(code **)(local_290 + 0x48);
    FUN_1007c5c00(*(long *)(local_2a0 + 0x38) + (long)local_110 * uVar11,local_238);
    lVar12 = local_1c0;
    puVar2 = (undefined8 *)(lVar6 + uVar11 * 0x10);
    local_248 = *puVar2;
    uVar3 = puVar2[1];
    local_240 = uVar11;
    FUN_1007c5c00(lVar18,local_1c0);
    local_118 = *(code **)(lVar17 + 0x38);
    (*local_118)(lVar12,0,1,lVar15);
    puVar7 = &DAT_100abce10;
    FUN_1007b4550();
    puVar9 = &DAT_1009eb918;
    local_120 = puVar7;
    local_78 = puVar7;
    _swift_allocObject(&DAT_1009eb918,0x30,7);
    puVar7 = local_278;
    local_280 = puVar9;
    local_90[0] = puVar9;
    FUN_1007c5c70(lVar12,local_278);
    local_150 = *(code **)(lVar17 + 0x30);
    puVar8 = puVar7;
    (*local_150)(puVar7,1,lVar15);
    if ((int)puVar8 != 1) {
      local_298 = uVar3;
      _swift_getEnumCaseMultiPayload(puVar7,lVar15);
                    /* WARNING: Could not recover jumptable at 0x0001007c2a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(int *)(&DAT_1007c4f48 + ((ulong)puVar7 & 0xffffffff) * 4) + 0x1007c2a34))()
      ;
      return puVar7;
    }
    *(undefined8 *)(puVar9 + 0x18) = 0;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    _swift_bridgeObjectRetain(uVar3);
    FUN_1007c62b0(local_1c0,&DAT_100abce00);
    FUN_1007c5cb8(local_238);
    lVar6 = local_2a8;
    uVar11 = local_240 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(local_2b0 + uVar11) = *(ulong *)(local_2b0 + uVar11) | 1L << (local_240 & 0x3f);
    puVar2 = (undefined8 *)(*(long *)(local_2a8 + 0x30) + local_240 * 0x10);
    *puVar2 = local_248;
    puVar2[1] = uVar3;
    FUN_10007f3d4(local_90,*(long *)(local_2a8 + 0x38) + local_240 * 0x20);
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c4f24);
      (*pcVar4)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar12 = local_250;
  } while( true );
LAB_1007c4dc8:
  _swift_release(lVar6);
  puVar7 = local_318;
  puVar9 = local_318;
  _swift_isUniquelyReferenced_nonNull_native(local_318);
  uVar11 = local_310;
  local_90[0] = puVar7;
  uVar10 = local_310;
  FUN_1007b8550(lVar16,local_310,puVar9);
  if ((uVar10 & 1) == 0) {
    local_318 = local_90[0];
    FUN_1007b84f0();
    _swift_bridgeObjectRetain(uVar11);
  }
  else {
    local_318 = local_90[0];
    lVar12 = *(long *)(local_90[0] + 0x38);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + lVar16 * 8));
    *(long *)(lVar12 + lVar16 * 8) = lVar6;
    uVar11 = local_310;
  }
  lVar6 = local_340;
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(local_2a0);
  _swift_bridgeObjectRelease(0x8000000000000000);
  lVar12 = local_320;
  uVar11 = local_328;
  if (local_328 != 0) goto LAB_1007c25f8;
LAB_1007c2620:
  lVar16 = lVar12 + 1;
  if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c4f48);
    (*pcVar4)();
  }
  if (lVar16 < (long)local_330) {
    uVar11 = local_338[lVar16];
    if (uVar11 == 0) {
      lVar16 = lVar12 + 2;
      if ((long)local_330 <= lVar16) goto LAB_1007c4ef8;
      uVar11 = local_338[lVar16];
      if (uVar11 == 0) {
        lVar16 = lVar12 + 3;
        if ((long)local_330 <= lVar16) goto LAB_1007c4ef8;
        uVar11 = local_338[lVar16];
        if (uVar11 == 0) {
          if ((long)local_330 <= lVar12 + 4) goto LAB_1007c4ef8;
          while (uVar11 = *(ulong *)(local_348 + lVar12 * 8), uVar11 == 0) {
            lVar12 = lVar12 + 1;
            if (local_350 == lVar12) goto LAB_1007c4ef8;
          }
          lVar16 = lVar12 + 4;
        }
      }
    }
    uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    local_328 = uVar11 - 1 & uVar11;
    uVar11 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar16 * 0x40;
    local_320 = lVar16;
    goto LAB_1007c26b8;
  }
LAB_1007c4ef8:
  _swift_bridgeObjectRelease(lVar6);
  _swift_release(lVar6);
  return local_318;
}

