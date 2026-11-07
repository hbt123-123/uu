// rea decompile_all
// name: FUN_100073ca8
// address: 0x100073ca8
// body: available
// range: 0x100073ca8-0x100073dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100073ca8(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  FUN_100004bb4(&DAT_100a761e8,&DAT_10080a980);
  lVar3 = param_1;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  lVar4 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((long)uVar5 < 0x40) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(param_1 + 0x40);
  lVar7 = lVar4;
  if (uVar6 == 0) goto LAB_100073d38;
  do {
    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 - 1 & uVar6;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
    while( true ) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + uVar8 * 0x80 + 0x60);
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar3 + 0x40 + uVar10) = *(ulong *)(lVar3 + 0x40 + uVar10) | 1L << (uVar8 & 0x3f);
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) = uVar9;
      *(undefined4 *)(*(long *)(lVar3 + 0x38) + uVar8 * 4) = uVar1;
      if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100073dd4);
        (*pcVar2)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      lVar7 = lVar4;
      if (uVar6 != 0) break;
LAB_100073d38:
      do {
        lVar4 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100073dd0);
          (*pcVar2)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar4) {
          return;
        }
        uVar6 = ((ulong *)(param_1 + 0x40))[lVar4];
        lVar7 = lVar7 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 * 0x40;
    }
  } while( true );
}

