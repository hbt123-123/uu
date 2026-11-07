// rea decompile_all
// name: FUN_100638944
// address: 0x100638944
// body: available
// range: 0x100638944-0x100638ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100638944(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar9 = *(long *)(unaff_x20 + 0x68);
  uVar7 = *(ulong *)(unaff_x20 + 0x70);
  puVar3 = *(undefined1 **)(unaff_x20 + 0x30);
  uVar8 = uVar1;
  FUN_1006337e0(puVar3,uVar1,lVar9,uVar7,*(undefined8 *)(unaff_x20 + 0x78));
  if ((uVar7 & 1) == 0) {
    _swift_unknownObjectRetain(uVar1);
LAB_1006389a0:
    puVar5 = puVar3;
    thunk_FUN_100629d98(puVar3,uVar8,lVar9,uVar7);
  }
  else {
    uVar4 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    _swift_unknownObjectRetain_n(puVar3,2);
    _swift_unknownObjectRetain(uVar1);
    puVar5 = puVar3;
    _swift_dynamicCastClass(puVar3,uVar4);
    if (puVar5 == (undefined1 *)0x0) {
      _swift_unknownObjectRelease(puVar3);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar10 = *(long *)(puVar5 + 0x10);
    _swift_release();
    if (SBORROW8(uVar7 >> 1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100638adc);
      (*pcVar2)();
    }
    if (lVar10 != (uVar7 >> 1) - lVar9) {
      _swift_unknownObjectRelease();
      goto LAB_1006389a0;
    }
    puVar6 = puVar3;
    _swift_dynamicCastClass(puVar3,uVar4);
    _swift_unknownObjectRelease(puVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar6 != (undefined1 *)0x0) {
      uVar7 = *(ulong *)(unaff_x20 + 0x88);
      puVar5 = puVar6;
      goto joined_r0x000100638a38;
    }
  }
  _swift_unknownObjectRelease(puVar3);
  uVar7 = *(ulong *)(unaff_x20 + 0x88);
joined_r0x000100638a38:
  if (uVar7 == 0) {
    _swift_release();
  }
  else {
    FUN_100572fcc(uVar7,puVar5);
    _swift_release();
    if ((uVar7 & 1) != 0) {
      return param_1;
    }
  }
  FUN_100638544();
  _swift_allocError(&DAT_1009e20b8,puVar5,0,0);
  *puVar5 = 2;
  _swift_willThrow();
  return param_1;
}

