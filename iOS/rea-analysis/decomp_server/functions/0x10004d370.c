// rea decompile_all
// name: FUN_10004d370
// address: 0x10004d370
// body: available
// range: 0x10004d370-0x10004d537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d370(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x70,auStack_68,0,0);
  lVar10 = *(long *)(param_2 + 0x70);
  uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar9 < 0x40) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar10 + 0x40);
  _swift_bridgeObjectRetain_n(lVar10,2);
  lVar11 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  while( true ) {
    while (uVar12 != 0) {
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      lVar1 = *(long *)(lVar10 + 0x38) +
              (lVar11 << 0xd | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 7);
      if (*(char *)(lVar1 + 0x7c) == '\x02') {
        uVar2 = *(undefined4 *)(lVar1 + 0x60);
        puVar6 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_100033f28(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar3 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_100033f28(puVar8,uVar3 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        *(undefined4 *)(puVar8 + uVar3 * 4 + 0x20) = uVar2;
      }
    }
    bVar5 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar5) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
      _swift_bridgeObjectRelease(lVar10);
      _swift_release(lVar10);
      puVar6 = puVar8;
      FUN_100074ee0(puVar8,PTR___ss5Int32VN_100995c78,PTR___ss5Int32VSHsWP_100995c88,&DAT_100a75a60,
                    &DAT_100809b10);
      _swift_bridgeObjectRelease(puVar8);
      *param_1 = (long)puVar6;
      return;
    }
    uVar12 = ((ulong *)(lVar10 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d538);
  (*pcVar4)();
}

