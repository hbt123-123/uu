// rea decompile_all
// name: FUN_100073dd4
// address: 0x100073dd4
// body: available
// range: 0x100073dd4-0x100073eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100073dd4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar5 = 0;
    uVar3 = *(ulong *)(param_2 + 0x28);
    uVar6 = ~(-1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f));
    do {
      iVar1 = *(int *)(param_1 + 0x20 + lVar5 * 4);
      uVar2 = uVar3;
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar3,iVar1,4);
      uVar2 = uVar2 & uVar6;
      if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0
         ) {
        do {
          if (*(int *)(*(long *)(param_2 + 0x30) + uVar2 * 4) == iVar1) {
            return 0;
          }
          uVar2 = uVar2 + 1 & uVar6;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) &
                 1) != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar4);
  }
  return 1;
}

