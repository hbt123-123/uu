// rea decompile_all
// name: FUN_1001d5dbc
// address: 0x1001d5dbc
// body: available
// range: 0x1001d5dbc-0x1001d5f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001d5dbc(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_78 [24];
  
  lVar13 = _TtC14UURemoteServer15TerminalManager::sessions;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_78,0,0);
  lVar12 = *(long *)(unaff_x20 + lVar13);
  FUN_100004bb4(&DAT_100a7d4e8,&DAT_100812788);
  lVar7 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  lVar13 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar12 + 0x40);
  if (uVar14 == 0) goto LAB_1001d5e7c;
  do {
    uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar14 = uVar14 - 1 & uVar14;
    while( true ) {
      uVar8 = LZCOUNT(uVar8);
      uVar9 = uVar8 | lVar13 << 6;
      uVar5 = *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar9 * 4);
      puVar2 = (undefined8 *)
               (*(long *)(*(long *)(lVar12 + 0x38) + uVar9 * 8) +
               _TtC14UURemoteServer15TerminalSession::name);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
      *(ulong *)(lVar7 + 0x40 + uVar11) = *(ulong *)(lVar7 + 0x40 + uVar11) | 1L << (uVar8 & 0x3f);
      *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar9 * 4) = uVar5;
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001d5f38);
        (*pcVar6)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      _swift_bridgeObjectRetain();
      if (uVar14 != 0) break;
LAB_1001d5e7c:
      do {
        lVar1 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001d5f34);
          (*pcVar6)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar1) {
          return lVar7;
        }
        uVar14 = ((ulong *)(lVar12 + 0x40))[lVar1];
        lVar13 = lVar13 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar1;
    }
  } while( true );
}

