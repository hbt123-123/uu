// rea decompile_all
// name: FUN_100549f28
// address: 0x100549f28
// body: available
// range: 0x100549f28-0x10054a14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100549f28(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_88 [24];
  ulong local_70;
  long lStack_68;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_5 + 0x40);
  _swift_bridgeObjectRetain(param_5);
  lVar12 = 0;
  do {
    do {
      while (uVar7 == 0) {
        bVar2 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10054a150);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar12) {
          _swift_release(param_5);
          uVar7 = 0;
          uVar5 = 1;
LAB_10054a128:
          auVar13._8_8_ = uVar5;
          auVar13._0_8_ = uVar7;
          return auVar13;
        }
        uVar7 = ((ulong *)(param_5 + 0x40))[lVar12];
      }
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      lVar10 = *(long *)(*(long *)(param_5 + 0x38) +
                        (lVar12 << 9 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 3));
      uVar9 = *(ulong *)(lVar10 + 0x10);
    } while (uVar9 == 0);
    lVar11 = lVar10 + 0x20;
    _swift_bridgeObjectRetain(lVar10);
    uVar8 = 0;
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10054a14c);
        (*pcVar1)();
      }
      FUN_1000b142c(lVar11,auStack_88);
      lVar4 = lStack_68;
      uVar3 = local_70;
      FUN_10003f030(auStack_88,local_70);
      (**(code **)(lVar4 + 0x10))();
      if (uVar3 == param_3 && lVar4 == param_4) {
        _swift_bridgeObjectRelease(lVar4);
LAB_10054a000:
        lVar4 = lStack_68;
        uVar3 = local_70;
        FUN_10003f030(auStack_88,local_70);
        (**(code **)(lVar4 + 0x18))(uVar3,lVar4);
        if (uVar3 == param_1) {
          _swift_bridgeObjectRelease(lVar10);
          FUN_10003f030(auStack_88,local_70);
          uVar7 = local_70;
          (**(code **)(lStack_68 + 8))(local_70,lStack_68);
          _swift_release(param_5);
          FUN_10003f094(auStack_88);
          uVar5 = 0;
          goto LAB_10054a128;
        }
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(lVar4);
        if ((uVar3 & 1) != 0) goto LAB_10054a000;
      }
      uVar8 = uVar8 + 1;
      FUN_10003f094(auStack_88);
      lVar11 = lVar11 + 0x28;
    } while (uVar9 != uVar8);
    _swift_bridgeObjectRelease(lVar10);
  } while( true );
}

