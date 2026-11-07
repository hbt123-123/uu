// rea decompile_all
// name: FUN_1001e063c
// address: 0x1001e063c
// body: available
// range: 0x1001e063c-0x1001e0733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001e063c(ulong param_1,ulong param_2,int param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_4 + 0x40);
  while( true ) {
    while (uVar8 != 0) {
      uVar5 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
      if (*(int *)(*(long *)(param_4 + 0x30) + uVar5 * 4) != param_3) {
        puVar1 = (ulong *)(*(long *)(param_4 + 0x38) + uVar5 * 0x10);
        uVar5 = *puVar1;
        uVar2 = puVar1[1];
        if ((uVar5 == param_1 && uVar2 == param_2) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar5,uVar2,param_1,param_2,0), (uVar5 & 1) != 0)) {
          return 1;
        }
      }
    }
    bVar4 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e0734);
      (*pcVar3)();
    }
    if ((long)(uVar6 + 0x3f >> 6) <= lVar7) break;
    uVar8 = ((ulong *)(param_4 + 0x40))[lVar7];
  }
  return 0;
}

