// rea decompile_all
// name: FUN_100082e64
// address: 0x100082e64
// body: available
// range: 0x100082e64-0x100082fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082e64(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = *unaff_x20;
  lVar10 = *(long *)(lVar8 + 0x18);
  if (*(long *)(lVar8 + 0x18) <= param_1) {
    lVar10 = param_1;
  }
  puVar3 = &DAT_100104870;
  FUN_10000eb08(&DAT_100104870,&DAT_1000d51b8);
  lVar4 = lVar8;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar8,lVar10,1,puVar3);
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_100082fa8:
    _swift_release(lVar8);
    *unaff_x20 = lVar4;
    return;
  }
  lVar10 = 0;
  puVar9 = (ulong *)(lVar8 + 0x38);
  uVar7 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar11 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (uVar11 == 0) goto LAB_100082f1c;
  do {
    uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar11 = uVar11 - 1 & uVar11;
    while( true ) {
      puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x30) + (LZCOUNT(uVar5) | lVar10 << 6) * 0x18);
      FUN_1000834cc(*puVar6,puVar6[1],*(undefined1 *)(puVar6 + 2),lVar4);
      if (uVar11 != 0) break;
LAB_100082f1c:
      do {
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100082fd0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar1) {
          uVar11 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
          if ((long)uVar11 < 0x40) {
            *puVar9 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(puVar9,uVar11 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar8 + 0x10) = 0;
          goto LAB_100082fa8;
        }
        uVar11 = puVar9[lVar1];
        lVar10 = lVar10 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar10 = lVar1;
    }
  } while( true );
}

