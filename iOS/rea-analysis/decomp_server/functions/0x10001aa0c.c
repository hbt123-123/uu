// rea decompile_all
// name: FUN_10001aa0c
// address: 0x10001aa0c
// body: available
// range: 0x10001aa0c-0x10001ab43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001aa0c(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  if ((*(char *)(unaff_x20 + 0x99) != '\x01') ||
     (lVar5 = *(long *)(unaff_x20 + 0x90), *(long *)(lVar5 + 0x10) == 0)) {
    return 0;
  }
  puVar4 = auStack_68;
  _swift_beginAccess(unaff_x20 + 0x80,puVar4,0x20,0);
  lVar7 = *(long *)(unaff_x20 + 0x80);
  if ((*(long *)(lVar7 + 0x10) != 0) && (thunk_FUN_1001a2c34(), ((ulong)puVar4 & 1) != 0)) {
    uVar1 = *(uint *)(*(long *)(lVar7 + 0x38) + param_1 * 4);
    _swift_endAccess(auStack_68);
    return (ulong)uVar1;
  }
  _swift_endAccess(auStack_68);
  lVar7 = lVar5;
  _swift_bridgeObjectRetain();
  FUN_100045da4();
  _swift_bridgeObjectRelease(lVar5);
  uVar9 = 0;
  uVar10 = *(ulong *)(lVar7 + 0x10);
  while( true ) {
    if (uVar10 == uVar9) {
      _swift_bridgeObjectRelease(lVar7);
      return 5;
    }
    if (*(ulong *)(lVar7 + 0x10) <= uVar9) break;
    uVar6 = (ulong)*(uint *)(lVar7 + uVar9 * 4 + 0x20);
    uVar9 = uVar9 + 1;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
    _swift_bridgeObjectRetain(uVar8);
    uVar3 = uVar6;
    FUN_1000446bc(uVar6,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      return uVar6;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001ab44);
  (*pcVar2)();
}

