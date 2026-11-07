// rea decompile_all
// name: FUN_1007cc360
// address: 0x1007cc360
// body: available
// range: 0x1007cc360-0x1007cc53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007cc360(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long local_70;
  
  local_70 = 0;
  lVar10 = 0;
  puVar6 = (ulong *)(param_3 + 0x40);
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *puVar6;
  uVar7 = uVar7 + 0x3f >> 6;
  do {
    if (uVar9 == 0) {
      lVar11 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cc53c);
        (*pcVar3)();
      }
      if ((long)uVar7 <= lVar11) {
LAB_1007cc504:
        FUN_10040a924(param_1,param_2,local_70,param_3);
        return;
      }
      uVar9 = puVar6[lVar11];
      if (uVar9 == 0) {
        lVar11 = lVar10 + 2;
        if ((long)uVar7 <= lVar11) goto LAB_1007cc504;
        uVar9 = puVar6[lVar11];
        if (uVar9 == 0) {
          lVar11 = lVar10 + 3;
          if ((long)uVar7 <= lVar11) goto LAB_1007cc504;
          uVar9 = puVar6[lVar11];
          while (uVar9 == 0) {
            bVar4 = SCARRY8(lVar11,1);
            lVar11 = lVar11 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cc540);
              (*pcVar3)();
            }
            if ((long)uVar7 <= lVar11) goto LAB_1007cc504;
            uVar9 = puVar6[lVar11];
          }
        }
      }
      uVar12 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar11 * 0x40;
      lVar10 = lVar11;
    }
    else {
      uVar12 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar10 << 6;
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    uVar8 = *puVar1;
    uVar2 = puVar1[1];
    uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar12 * 0x10 + 8);
    uVar5 = uVar2;
    __sSS10uppercasedSSyF(uVar8,uVar2);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar13);
    FUN_100153074(uVar8,uVar5,param_4);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar5);
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar12 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar12 & 0x3f);
      bVar4 = SCARRY8(local_70,1);
      local_70 = local_70 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cc504);
        (*pcVar3)();
      }
    }
  } while( true );
}

