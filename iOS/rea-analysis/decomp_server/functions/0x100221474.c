// rea decompile_all
// name: FUN_100221474
// address: 0x100221474
// body: available
// range: 0x100221474-0x10022166b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100221474(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong local_68;
  
  if (param_1 == param_2) {
    uVar10 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    local_68 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      local_68 = ~(-1L << (uVar9 & 0x3f));
    }
    local_68 = local_68 & *(ulong *)(param_1 + 0x40);
    _swift_bridgeObjectRetain_n(param_1,2);
    _swift_bridgeObjectRetain(param_2);
    lVar8 = 0;
    do {
      while( true ) {
        if (local_68 == 0) {
          do {
            lVar11 = lVar8 + 1;
            if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10022166c);
              (*pcVar4)();
            }
            if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
              _swift_bridgeObjectRelease(param_2);
              uVar10 = 1;
              goto LAB_10022161c;
            }
            local_68 = ((ulong *)(param_1 + 0x40))[lVar11];
            lVar8 = lVar8 + 1;
          } while (local_68 == 0);
          uVar7 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          local_68 = local_68 - 1 & local_68;
        }
        else {
          uVar7 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          local_68 = local_68 - 1 & local_68;
          lVar11 = lVar8;
        }
        lVar8 = (LZCOUNT(uVar7) | lVar11 << 6) * 0x10;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + lVar8);
        puVar2 = (ulong *)(*(long *)(param_1 + 0x38) + lVar8);
        lVar8 = *plVar1;
        uVar5 = plVar1[1];
        uVar7 = *puVar2;
        uVar3 = puVar2[1];
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar3);
        uVar6 = uVar5;
        FUN_1001a2c70();
        _swift_bridgeObjectRelease(uVar5);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar3);
          _swift_bridgeObjectRelease(param_2);
          uVar10 = 0;
          goto LAB_10022161c;
        }
        puVar2 = (ulong *)(*(long *)(param_2 + 0x38) + lVar8 * 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        lVar8 = lVar11;
        if (uVar5 != uVar7 || uVar6 != uVar3) break;
        _swift_bridgeObjectRelease(uVar3);
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,uVar6,uVar7,uVar3,0);
      _swift_bridgeObjectRelease(uVar3);
    } while ((uVar5 & 1) != 0);
    _swift_bridgeObjectRelease(param_2);
    uVar10 = 0;
LAB_10022161c:
    _swift_bridgeObjectRelease_n(param_1,2);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

