// rea decompile_all
// name: FUN_10004cb68
// address: 0x10004cb68
// body: available
// range: 0x10004cb68-0x10004cc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10004cb68(long param_1,long param_2)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar5 = (uint)param_2;
  if (param_1 == param_2) {
LAB_10004cc58:
    uVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar10 = 0xffffffffffffffff;
      if ((long)uVar8 < 0x40) {
        uVar10 = ~(-1L << (uVar8 & 0x3f));
      }
      uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
      lVar7 = 0;
      do {
        if (uVar10 == 0) {
          do {
            lVar9 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10004cc78);
              (*pcVar2)();
            }
            if ((long)(uVar8 + 0x3f >> 6) <= lVar9) goto LAB_10004cc58;
            uVar10 = ((ulong *)(param_1 + 0x40))[lVar9];
            lVar7 = lVar7 + 1;
          } while (uVar10 == 0);
          uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
        }
        else {
          uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
          lVar9 = lVar7;
        }
        uVar6 = LZCOUNT(uVar6) | lVar9 << 6;
        pdVar1 = (double *)(*(long *)(param_1 + 0x38) + uVar6 * 0x10);
        uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + uVar6 * 4);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        thunk_FUN_1001a2c34();
        if ((uVar5 & 1) == 0) break;
        pdVar1 = (double *)(*(long *)(param_2 + 0x38) + uVar6 * 0x10);
        dVar11 = pdVar1[1];
        bVar3 = false;
        if ((*pdVar1 == dVar12) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar13))) {
          bVar3 = dVar11 == dVar13;
        }
        lVar7 = lVar9;
      } while (bVar3);
    }
    uVar4 = 0;
  }
  return uVar4;
}

