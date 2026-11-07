// rea decompile_all
// name: FUN_10004c9e8
// address: 0x10004c9e8
// body: available
// range: 0x10004c9e8-0x10004cb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10004c9e8(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_2 + 0x10) <= uVar8) {
    lVar5 = 0;
    uVar7 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((long)uVar7 < 0x40) {
      uVar9 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_2 + 0x38);
    while( true ) {
      while (uVar9 == 0) {
        bVar3 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10004cb3c);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar5) {
          return 1;
        }
        uVar9 = ((ulong *)(param_2 + 0x38))[lVar5];
      }
      if (uVar8 == 0) break;
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      iVar1 = *(int *)(*(long *)(param_2 + 0x30) +
                      (lVar5 << 8 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 2));
      uVar4 = *(ulong *)(param_1 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar4,iVar1,4);
      uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar4 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1) == 0
         ) {
        return 0;
      }
      uVar9 = uVar9 - 1 & uVar9;
      while (*(int *)(*(long *)(param_1 + 0x30) + uVar4 * 4) != iVar1) {
        uVar4 = uVar4 + 1 & ~uVar6;
        if ((*(ulong *)(param_1 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1) ==
            0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

