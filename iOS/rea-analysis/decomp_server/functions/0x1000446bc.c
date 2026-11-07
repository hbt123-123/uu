// rea decompile_all
// name: FUN_1000446bc
// address: 0x1000446bc
// body: available
// range: 0x1000446bc-0x100044757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000446bc(int param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(param_2 + 0x40);
  while( true ) {
    while (uVar5 != 0) {
      uVar1 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      if (*(int *)(*(long *)(param_2 + 0x38) +
                  (lVar4 << 8 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 2)) == param_1) {
        return 1;
      }
    }
    bVar3 = SCARRY8(lVar4,1);
    lVar4 = lVar4 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100044758);
      (*pcVar2)();
    }
    if ((long)(uVar6 + 0x3f >> 6) <= lVar4) break;
    uVar5 = ((ulong *)(param_2 + 0x40))[lVar4];
  }
  return 0;
}

