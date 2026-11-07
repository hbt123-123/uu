// rea decompile_all
// name: FUN_10005ffa0
// address: 0x10005ffa0
// body: available
// range: 0x10005ffa0-0x10006006b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100060064 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ffa0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_48 [8];
  
  lVar5 = 0;
  uVar4 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((long)uVar4 < 0x40) {
    uVar6 = ~(-1L << (uVar4 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(param_1 + 0x40);
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      FUN_10006dbc4(auStack_48,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x30) +
                     (lVar5 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3)));
    }
    bVar3 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar3) break;
    if ((long)(uVar4 + 0x3f >> 6) <= lVar5) {
      _swift_release(param_1);
      return;
    }
    uVar6 = ((ulong *)(param_1 + 0x40))[lVar5];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006006c);
  (*pcVar2)();
}

