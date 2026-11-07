// rea decompile_all
// name: FUN_10034af14
// address: 0x10034af14
// body: available
// range: 0x10034af14-0x10034b05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10034af14(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((*(ulong *)(param_2 + 0x10) == 0) || (*(ulong *)(param_1 + 0x10) == 0)) {
    uVar10 = 1;
  }
  else {
    lVar2 = param_1;
    lVar5 = param_2;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar2 = param_2;
      lVar5 = param_1;
    }
    uVar9 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar11 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar5 + 0x38);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_1);
    lVar12 = 0;
    do {
      while (uVar11 == 0) {
        bVar7 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10034b05c);
          (*pcVar6)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          uVar10 = 1;
          goto LAB_10034b028;
        }
        uVar11 = ((ulong *)(lVar5 + 0x38))[lVar12];
      }
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) +
                        (lVar12 << 10 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 4));
      uVar4 = *puVar1;
      uVar3 = puVar1[1];
      FUN_100008184(uVar4,uVar3);
      uVar8 = uVar4;
      FUN_100343380(uVar4,uVar3,lVar2);
      FUN_100006cdc(uVar4,uVar3);
    } while ((uVar8 & 1) == 0);
    uVar10 = 0;
LAB_10034b028:
    _swift_bridgeObjectRelease(lVar2);
    _swift_release(lVar5);
  }
  return uVar10;
}

