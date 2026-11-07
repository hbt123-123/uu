// rea decompile_all
// name: FUN_1001e01bc
// address: 0x1001e01bc
// body: available
// range: 0x1001e01bc-0x1001e0273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001e01bc(long param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar4 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar6 = ~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
    lVar4 = 1;
    while( true ) {
      uVar3 = uVar5;
      __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar5,lVar4);
      uVar3 = uVar3 & uVar6;
      if ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 3 & 0xffffffffffffff8)) >> (uVar3 & 0x3f) & 1) == 0
         ) break;
      while (*(long *)(*(long *)(param_1 + 0x30) + uVar3 * 8) != lVar4) {
        uVar3 = uVar3 + 1 & uVar6;
        if ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 3 & 0xffffffffffffff8)) >> (uVar3 & 0x3f) & 1) ==
            0) {
          return lVar4;
        }
      }
      bVar2 = SCARRY8(lVar4,1);
      lVar4 = lVar4 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001e0258);
        (*pcVar1)();
      }
    }
  }
  return lVar4;
}

