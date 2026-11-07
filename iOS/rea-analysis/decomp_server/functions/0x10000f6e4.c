// rea decompile_all
// name: FUN_10000f6e4
// address: 0x10000f6e4
// body: available
// range: 0x10000f6e4-0x10000f7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10000f6e4(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar7 * 4);
      uVar5 = (ulong)uVar1;
      lVar8 = *param_2;
      uVar3 = 0;
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_10000f7b0;
      uVar2 = *(ulong *)(lVar8 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar2,uVar5,4);
      uVar4 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar4 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar8 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) == 0)
      {
LAB_10000f7ac:
        uVar3 = 0;
        goto LAB_10000f7b0;
      }
      lVar7 = lVar7 + 1;
      while (*(uint *)(*(long *)(lVar8 + 0x30) + uVar2 * 4) != uVar1) {
        uVar2 = uVar2 + 1 & ~uVar4;
        if ((*(ulong *)(lVar8 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) == 0
           ) goto LAB_10000f7ac;
      }
    } while (lVar7 != lVar6);
  }
  uVar5 = 0;
  uVar3 = 1;
LAB_10000f7b0:
  return uVar5 | (ulong)uVar3 << 0x20;
}

