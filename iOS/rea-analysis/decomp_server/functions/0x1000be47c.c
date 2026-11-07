// rea decompile_all
// name: FUN_1000be47c
// address: 0x1000be47c
// body: available
// range: 0x1000be47c-0x1000be73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000be47c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  long local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_98 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 0x40);
  local_90 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  local_70 = *(undefined8 *)(param_1 + 0x58);
  lStack_a8 = *(long *)(param_1 + 0x20);
  local_b0 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_e0,0,0);
    uVar10 = *(ulong *)(param_2 + 0x10);
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar10 & 0xffffffffffffff8;
      if ((long)uVar10 < 0) {
        uVar7 = uVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 != 0) {
      plVar8 = &local_b0;
      FUN_1000c1570();
      if (plVar8[2] != 0) {
        FUN_1000bbdb8(&local_b0);
        if ((local_b0 == 0x6d6f74737563) && (lStack_a8 == -0x1a00000000000000)) {
          uVar6 = 1;
        }
        else {
          lVar14 = local_b0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (local_b0,lStack_a8,0x6d6f74737563,0xe600000000000000,0);
          uVar6 = (uint)lVar14;
        }
        FUN_1000bcf80(uVar6 & 1);
        plVar9 = plVar8;
        FUN_1000c19b0();
        _swift_bridgeObjectRelease(plVar8);
        uVar7 = 1L << ((ulong)*(byte *)(plVar9 + 4) & 0x3f);
        uVar10 = 0xffffffffffffffff;
        if ((long)uVar7 < 0x40) {
          uVar10 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar10 = uVar10 & plVar9[8];
        _swift_bridgeObjectRetain(plVar9);
        lVar14 = 0;
        while( true ) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
            uVar11 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar14 << 6;
            puVar1 = (undefined8 *)(plVar9[6] + uVar11 * 0x20);
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            uVar12 = puVar1[3];
            uVar13 = *(undefined8 *)(plVar9[7] + uVar11 * 8);
            _swift_bridgeObjectRetain(uVar12);
            _swift_bridgeObjectRetain(uVar13);
            _swift_bridgeObjectRetain(uVar3);
            FUN_1000c1c44(uVar2,uVar3,uVar13,param_2);
            _swift_bridgeObjectRelease(uVar13);
            _swift_bridgeObjectRelease(uVar12);
            _swift_bridgeObjectRelease(uVar3);
          }
          bVar5 = SCARRY8(lVar14,1);
          lVar14 = lVar14 + 1;
          if (bVar5) break;
          if ((long)(uVar7 + 0x3f >> 6) <= lVar14) {
            _swift_release(param_2);
            _swift_release(plVar9);
            _swift_bridgeObjectRelease(plVar9);
            return;
          }
          uVar10 = (plVar9 + 8)[lVar14];
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000be724);
        (*pcVar4)();
      }
      _swift_bridgeObjectRelease();
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_1000be73c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000014,
                    0x8000000100883a40,0x2e8,0);
    }
    _swift_release(param_2);
  }
  return;
}

