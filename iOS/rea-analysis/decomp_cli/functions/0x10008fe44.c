// rea decompile_all
// name: FUN_10008fe44
// address: 0x10008fe44
// body: available
// range: 0x10008fe44-0x1000908fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010009004c) */
/* WARNING: Removing unreachable block (ram,0x00010009005c) */
/* WARNING: Removing unreachable block (ram,0x0001000900a0) */
/* WARNING: Removing unreachable block (ram,0x000100090138) */
/* WARNING: Removing unreachable block (ram,0x0001000901c8) */
/* WARNING: Removing unreachable block (ram,0x0001000905f8) */
/* WARNING: Removing unreachable block (ram,0x0001000901fc) */
/* WARNING: Removing unreachable block (ram,0x00010009016c) */
/* WARNING: Removing unreachable block (ram,0x000100090610) */
/* WARNING: Removing unreachable block (ram,0x00010009019c) */
/* WARNING: Removing unreachable block (ram,0x000100090654) */
/* WARNING: Removing unreachable block (ram,0x00010008ff78) */
/* WARNING: Removing unreachable block (ram,0x0001000900cc) */
/* WARNING: Removing unreachable block (ram,0x00010009010c) */
/* WARNING: Removing unreachable block (ram,0x00010008ffb8) */
/* WARNING: Removing unreachable block (ram,0x00010008fe8c) */
/* WARNING: Removing unreachable block (ram,0x000100090808) */
/* WARNING: Removing unreachable block (ram,0x00010008fed0) */
/* WARNING: Removing unreachable block (ram,0x00010008ff34) */
/* WARNING: Removing unreachable block (ram,0x00010008ff38) */
/* WARNING: Removing unreachable block (ram,0x00010008ff40) */
/* WARNING: Removing unreachable block (ram,0x00010008ff44) */

void FUN_10008fe44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_2d0 [4];
  uint local_2cc;
  ulong local_2c8;
  undefined8 local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined *local_290;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  undefined1 *local_258;
  ulong local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  ulong local_238;
  ulong uStack_230;
  undefined1 local_228 [168];
  undefined1 local_180 [88];
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  long local_108;
  undefined8 uStack_100;
  byte local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  ulong uStack_d8;
  byte bStack_d0;
  undefined8 local_78;
  
  puVar5 = auStack_2d0;
  uVar14 = *unaff_x20;
  uVar12 = unaff_x20[1];
  uVar15 = unaff_x20[2];
  uVar7 = uVar14;
  FUN_100094404();
  _swift_bridgeObjectRetain();
  FUN_10009f1c4();
  local_128 = param_2;
  uStack_120 = uVar7;
  local_118 = param_4;
  FUN_1000918cc(&local_128,uVar14,uVar12,uVar15);
  FUN_1000911bc(&local_128);
  uVar16 = local_118;
  uVar18 = local_128;
  uVar14 = *unaff_x20;
  FUN_1000908fc(local_180,local_128,uStack_120,local_118,uVar14,unaff_x20[1],unaff_x20[2]);
  _swift_bridgeObjectRelease(uVar16);
  _swift_bridgeObjectRelease(uVar18);
  FUN_10005b984(local_180,local_228);
  puVar8 = &DAT_100104408;
  FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
  plVar6 = &local_108;
  _swift_dynamicCast(plVar6,local_228,puVar8,&DAT_1000fae00,6);
  if ((int)plVar6 == 0) {
    FUN_10006c8f8(local_180,param_1);
  }
  else {
    local_2c0 = uStack_e8;
    local_2b4 = (uint)bStack_e0;
    local_288 = uVar14;
    if ((local_f8 & 1) != 0) {
      FUN_1000957d0(local_108,uStack_100,1);
      FUN_1000957d0(local_108,uStack_100,1);
      FUN_10002c9dc(local_f0,local_2c0,local_2b4);
      FUN_100075a04(0x10000000000001ba,0x80000001000ca350);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000908fc);
      (*pcVar4)();
    }
    local_2cc = (uint)bStack_d0;
    puVar8 = &DAT_100103f10;
    FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
    _swift_allocObject();
    uVar14 = local_288;
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    uVar18 = *(undefined8 *)(local_288 + 0x10);
    *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(local_288 + 0x18);
    *(undefined8 *)(puVar8 + 0x20) = uVar18;
    local_2c8 = *(ulong *)(local_108 + 0x10);
    if (local_2c8 == 0) {
      FUN_1000957d0(local_108,uStack_100,0);
      uVar11 = local_2b4;
      uVar18 = local_2c0;
      FUN_10002c9dc(local_f0,local_2c0,local_2b4);
      _swift_bridgeObjectRelease();
      uVar16 = local_f0;
    }
    else {
      local_298 = local_108 + 0x20;
      FUN_1000957d0(local_108,uStack_100,0);
      FUN_1000957d0(local_108,uStack_100,0);
      FUN_10002c9dc(local_f0,local_2c0,local_2b4);
      _swift_retain(uVar14);
      local_2a8 = local_108;
      local_2a0 = local_f0;
      local_2b0 = uStack_100;
      local_270 = uStack_d8;
      uVar14 = 0;
      lVar13 = local_108;
      do {
        uVar7 = local_270;
        uVar12 = local_288;
        if (*(ulong *)(lVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100090808);
          (*pcVar4)();
        }
        puVar1 = (ulong *)(local_298 + uVar14 * 0x10);
        uVar15 = *puVar1;
        uVar2 = puVar1[1];
        local_280 = uVar14;
        _swift_beginAccess(local_288 + 0x28,local_228,0,0);
        uVar14 = *(ulong *)(uVar12 + 0x28);
        local_290 = puVar8;
        if (uVar14 >> 0x3e == 0) {
          uVar12 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar12 = uVar14 & 0xffffffffffffff8;
          if ((long)uVar14 < 0) {
            uVar12 = uVar14;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar14);
        if (uVar12 == 0) {
LAB_1000906bc:
          lVar13 = local_2a8;
          uVar3 = local_2b0;
          FUN_1000767c8(local_2a8,local_2b0,0);
          _swift_bridgeObjectRelease(uVar7);
          _swift_release(local_288);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease();
          uStack_d8 = uVar14;
          uVar18 = local_2c0;
          local_108 = lVar13;
          uVar16 = local_2a0;
          uStack_100 = uVar3;
          puVar8 = local_290;
          uVar11 = local_2b4;
          goto LAB_100090738;
        }
        uVar17 = 0;
        local_280 = local_280 + 1;
        local_260 = uVar14 & 0xc000000000000001;
        local_268 = uVar14 & 0xffffffffffffff8;
        local_278 = uVar12;
        while( true ) {
          if (local_260 == 0) {
            if (*(ulong *)(local_268 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100090804);
              (*pcVar4)();
            }
            uVar12 = *(ulong *)(uVar14 + uVar17 * 8 + 0x20);
            _swift_retain(uVar12);
          }
          else {
            uVar12 = uVar17;
            FUN_1000794e0(uVar17,uVar14);
          }
          local_250 = uVar17 + 1;
          if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100090800);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(uVar12 + 0x10);
          uVar10 = *(ulong *)(uVar12 + 0x18);
          (**(code **)(uVar10 + 0x18))();
          if (uVar7 == uVar15 && uVar10 == uVar2) break;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(uVar10);
          uVar10 = uVar2;
          if ((uVar7 & 1) != 0) goto LAB_100090554;
          (**(code **)(*(long *)(uVar12 + 0x18) + 0x10))(&local_108,*(undefined8 *)(uVar12 + 0x10));
          uVar18 = local_78;
          _swift_bridgeObjectRetain(local_78);
          FUN_10006e954(&local_108);
          local_258 = puVar5;
          local_238 = uVar15;
          uStack_230 = uVar2;
          *(ulong **)(puVar5 + -0x10) = &local_238;
          uVar7 = 0;
          FUN_10002150c(FUN_10002236c,puVar5 + -0x20,uVar18);
          _swift_bridgeObjectRelease(uVar18);
          puVar5 = local_258;
          if ((uVar7 & 1) != 0) goto LAB_100090554;
          _swift_release(uVar12);
          uVar17 = uVar17 + 1;
          uVar7 = local_270;
          if (local_250 == local_278) goto LAB_1000906bc;
        }
        _swift_bridgeObjectRelease(uVar14);
        uVar14 = uVar2;
LAB_100090554:
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar10);
        uVar16 = local_2a0;
        lVar13 = local_2a8;
        uVar3 = local_2b0;
        uVar14 = *(ulong *)(local_290 + 0x10);
        puVar8 = local_290;
        uVar7 = *(ulong *)(uVar12 + 0x10);
        uVar18 = *(undefined8 *)(uVar12 + 0x18);
        if (*(ulong *)(local_290 + 0x18) >> 1 <= uVar14) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_290 + 0x18));
          local_250 = *(ulong *)(uVar12 + 0x10);
          uStack_248 = *(undefined8 *)(uVar12 + 0x18);
          FUN_10006e820(puVar8,uVar14 + 1,1,local_290);
          uVar7 = local_250;
          uVar18 = uStack_248;
        }
        *(ulong *)(puVar8 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puVar8 + uVar14 * 0x10 + 0x28) = uVar18;
        *(ulong *)(puVar8 + uVar14 * 0x10 + 0x20) = uVar7;
        _swift_release(local_288);
        uVar7 = local_270;
        uVar14 = local_280;
        local_288 = uVar12;
      } while (local_280 != local_2c8);
      FUN_1000767c8(lVar13,uVar3,0);
      _swift_bridgeObjectRelease(uVar7);
      _swift_release();
      uStack_d8 = uVar12;
      uVar18 = local_2c0;
      local_108 = lVar13;
      uStack_100 = uVar3;
      uVar11 = local_2b4;
    }
LAB_100090738:
    local_238 = local_238 & 0xffffffffffffff00;
    local_240 = (undefined1)uVar11;
    param_1[3] = &DAT_1000fae00;
    FUN_100095718();
    param_1[4] = uStack_d8;
    puVar9 = &DAT_1000f9e68;
    _swift_allocObject(&DAT_1000f9e68,0x49,7);
    *param_1 = puVar9;
    *(long *)(puVar9 + 0x10) = local_108;
    *(undefined8 *)(puVar9 + 0x18) = uStack_100;
    puVar9[0x20] = (undefined1)local_238;
    *(undefined8 *)(puVar9 + 0x28) = uVar16;
    *(undefined8 *)(puVar9 + 0x30) = uVar18;
    puVar9[0x38] = local_240;
    *(undefined **)(puVar9 + 0x40) = puVar8;
    puVar9[0x48] = (char)local_2cc;
    _swift_bridgeObjectRetain(puVar8);
    FUN_100001428(local_180);
    FUN_1000767c8(local_108,uStack_100,0);
    FUN_10002c9fc(uVar16,uVar18,uVar11);
    _swift_bridgeObjectRelease(puVar8);
  }
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  return;
}

