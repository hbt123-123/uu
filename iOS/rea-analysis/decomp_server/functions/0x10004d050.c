// rea decompile_all
// name: FUN_10004d050
// address: 0x10004d050
// body: available
// range: 0x10004d050-0x10004d12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d050(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x70,auStack_38,0,0);
  lVar6 = 0;
  lVar5 = *(long *)(param_2 + 0x70);
  uVar8 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar5 + 0x40);
  do {
    while (uVar7 != 0) {
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      if (*(char *)(*(long *)(lVar5 + 0x38) +
                    (lVar6 << 0xd | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 7) + 0x7c) == '\0') {
        uVar4 = 1;
LAB_10004d114:
        *param_1 = uVar4;
        return;
      }
    }
    bVar3 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004d12c);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar6) {
      uVar4 = 0;
      goto LAB_10004d114;
    }
    uVar7 = ((ulong *)(lVar5 + 0x40))[lVar6];
  } while( true );
}

