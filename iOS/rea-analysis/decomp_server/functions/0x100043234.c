// rea decompile_all
// name: FUN_100043234
// address: 0x100043234
// body: available
// range: 0x100043234-0x100043387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100043234(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
LAB_100043364:
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((long)uVar6 < 0x40) {
        uVar9 = ~(-1L << (uVar6 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar5 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100043388);
              (*pcVar2)();
            }
            if ((long)(uVar6 + 0x3f >> 6) <= lVar8) goto LAB_100043364;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar5 = lVar5 + 1;
          } while (uVar9 == 0);
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar5;
        }
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar4) | lVar8 << 6) * 4);
        uVar4 = *(ulong *)(param_2 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar4,iVar1,4);
        uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1) ==
            0) break;
        while (lVar5 = lVar8, *(int *)(*(long *)(param_2 + 0x30) + uVar4 * 4) != iVar1) {
          uVar4 = uVar4 + 1 & ~uVar7;
          if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1)
              == 0) goto LAB_10004335c;
        }
      }
    }
LAB_10004335c:
    uVar3 = 0;
  }
  return uVar3;
}

