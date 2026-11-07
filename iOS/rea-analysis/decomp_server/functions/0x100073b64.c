// rea decompile_all
// name: FUN_100073b64
// address: 0x100073b64
// body: available
// range: 0x100073b64-0x100073ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100073b64(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  double *pdVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
  lVar5 = param_1;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  lVar7 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar9 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
  lVar6 = lVar7;
  if (uVar9 == 0) goto LAB_100073bfc;
  do {
    uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
    while( true ) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar10 * 4);
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      lVar6 = *(long *)(lVar5 + 0x30);
      pdVar2 = (double *)(*(long *)(param_1 + 0x38) + uVar10 * 0x10);
      dVar13 = pdVar2[1];
      dVar12 = *pdVar2;
      *(ulong *)(lVar5 + 0x40 + uVar11) = *(ulong *)(lVar5 + 0x40 + uVar11) | 1L << (uVar10 & 0x3f);
      *(undefined4 *)(lVar6 + uVar10 * 4) = uVar1;
      plVar3 = (long *)(*(long *)(lVar5 + 0x38) + uVar10 * 0x10);
      plVar3[1] = (long)dVar13;
      *plVar3 = (long)dVar12;
      if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100073ca8);
        (*pcVar4)();
      }
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      lVar6 = lVar7;
      if (uVar9 != 0) break;
LAB_100073bfc:
      do {
        lVar7 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100073ca4);
          (*pcVar4)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar7) {
          _swift_release(param_2);
          return lVar5;
        }
        uVar9 = ((ulong *)(param_1 + 0x40))[lVar7];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
    }
  } while( true );
}

