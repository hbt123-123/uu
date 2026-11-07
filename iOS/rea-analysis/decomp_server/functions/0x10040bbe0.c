// rea decompile_all
// name: FUN_10040bbe0
// address: 0x10040bbe0
// body: available
// range: 0x10040bbe0-0x10040bd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040bbe0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long local_78;
  
  local_78 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
  lVar9 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar11 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040bd68);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar11) {
          FUN_10040a924(param_1,param_2,local_78,param_3);
          return;
        }
        uVar12 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar9 = lVar9 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar11 = lVar9;
    }
    uVar8 = LZCOUNT(uVar7);
    lVar9 = (uVar8 | lVar11 << 6) * 0x10;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + lVar9);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar9 + 8);
    uVar6 = uVar2;
    __sSS10lowercasedSSyF(uVar5,uVar2);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar13);
    uVar7 = param_4;
    __sSS9hasPrefixySbSSF(param_4,param_5,uVar5,uVar6);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar6);
    lVar9 = lVar11;
    if ((uVar7 & 1) != 0) {
      uVar7 = (uVar8 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar8 & 0x3f);
      bVar4 = SCARRY8(local_78,1);
      local_78 = local_78 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040bd30);
        (*pcVar3)();
      }
    }
  } while( true );
}

