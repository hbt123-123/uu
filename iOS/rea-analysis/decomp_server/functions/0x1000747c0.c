// rea decompile_all
// name: FUN_1000747c0
// address: 0x1000747c0
// body: available
// range: 0x1000747c0-0x1000748bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000747c0(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar10 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar10 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000748c0);
      (*pcVar4)();
    }
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar3 = 1;
    lVar11 = lVar10;
    lVar6 = 0;
    while( true ) {
      while (lVar13 = lVar3, uVar9 != 0) {
        uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        puVar2 = (undefined8 *)
                 (*(long *)(param_4 + 0x30) +
                 (lVar10 << 10 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 4));
        uVar14 = *puVar2;
        param_2[1] = puVar2[1];
        *param_2 = uVar14;
        if (lVar13 == param_3) goto LAB_1000748a0;
        param_2 = param_2 + 2;
        lVar3 = lVar13 + 1;
        lVar11 = lVar10;
        lVar6 = lVar13;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100074874);
          (*pcVar4)();
        }
      }
      bVar5 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000748bc);
        (*pcVar4)();
      }
      if ((long)uVar12 <= lVar10) break;
      uVar9 = puVar7[lVar10];
      lVar3 = lVar13;
    }
    uVar9 = 0;
    if ((long)uVar12 <= lVar11 + 1) {
      uVar12 = lVar11 + 1;
    }
    lVar10 = uVar12 - 1;
    param_3 = lVar6;
  }
LAB_1000748a0:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar10;
  param_1[4] = uVar9;
  return param_3;
}

