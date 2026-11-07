// rea decompile_all
// name: FUN_10005fea0
// address: 0x10005fea0
// body: available
// range: 0x10005fea0-0x10005ff9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005ff98 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005fea0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_64 [4];
  
  puVar2 = PTR___ss5Int32VN_100995c78;
  lVar6 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar5 < 0x40) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_1 + 0x38);
  while( true ) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      FUN_10006dac0(auStack_64,
                    *(undefined4 *)
                     (*(long *)(param_1 + 0x30) +
                     (lVar6 << 8 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 2)),&DAT_100a75a60,
                    &DAT_100809b10,puVar2);
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) break;
    if ((long)(uVar5 + 0x3f >> 6) <= lVar6) {
      _swift_release(param_1);
      return;
    }
    uVar7 = ((ulong *)(param_1 + 0x38))[lVar6];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10005ffa0);
  (*pcVar3)();
}

