// rea decompile_all
// name: FUN_10063cb2c
// address: 0x10063cb2c
// body: available
// range: 0x10063cb2c-0x10063cd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063cb2c(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar6 = param_1;
  FUN_10063b608();
  uVar9 = *(ulong *)(lVar6 + 0x28);
  if (uVar9 + 0xf000000000000000 >> 0x3d < 7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cd44);
    (*pcVar1)();
  }
  if ((uVar9 & 0x1fffffffffffffff) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cd48);
    (*pcVar1)();
  }
  uVar10 = *(ulong *)(lVar6 + 0x30);
  if (uVar10 + 0xf000000000000000 >> 0x3d < 7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cd4c);
    (*pcVar1)();
  }
  if ((uVar10 & 0x1fffffffffffffff) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cd50);
    (*pcVar1)();
  }
  lVar7 = *(long *)(lVar6 + 0x18);
  uVar8 = *(ulong *)(lVar6 + 0x20);
  uVar9 = *(ulong *)(lVar6 + 0x38) ^ uVar9 << 3;
  uVar10 = *(ulong *)(lVar6 + 0x40) ^ uVar10 << 3;
  FUN_10063c228();
  *(ulong *)(lVar6 + 0x38) = uVar9;
  *(ulong *)(lVar6 + 0x40) = uVar10;
  _swift_release(lVar6);
  FUN_10067bccc(*(ulong *)(unaff_x20 + 0x80) ^ uVar9,*(ulong *)(unaff_x20 + 0x88) ^ uVar10);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x30);
  thunk_FUN_1006337a8();
  if ((uVar8 & 1) == 0) {
LAB_10063cbf4:
    puVar4 = puVar2;
    thunk_FUN_100629d98();
  }
  else {
    uVar3 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar2;
    _swift_unknownObjectRetain_n(puVar2,2);
    _swift_dynamicCastClass();
    if (puVar4 == (undefined1 *)0x0) {
      _swift_unknownObjectRelease(puVar2);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar6 = *(long *)(puVar4 + 0x10);
    _swift_release();
    if (SBORROW8(uVar8 >> 1,lVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063cd54);
      (*pcVar1)();
    }
    if (lVar6 != (uVar8 >> 1) - lVar7) {
      _swift_unknownObjectRelease();
      goto LAB_10063cbf4;
    }
    puVar5 = puVar2;
    _swift_dynamicCastClass(puVar2,uVar3);
    _swift_unknownObjectRelease(puVar2);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar5 != (undefined1 *)0x0) {
      lVar6 = *(long *)(unaff_x20 + 0xc0);
      puVar4 = puVar5;
      goto joined_r0x00010063cc9c;
    }
  }
  _swift_unknownObjectRelease(puVar2);
  lVar6 = *(long *)(unaff_x20 + 0xc0);
joined_r0x00010063cc9c:
  if (lVar6 == 0) {
    _swift_release();
  }
  else {
    puVar2 = puVar4;
    FUN_100572fcc();
    _swift_release();
    if (((ulong)puVar2 & 1) != 0) {
      return param_1;
    }
  }
  FUN_10063c830();
  _swift_allocError(&DAT_1009e2ba8,puVar4,0,0);
  *puVar4 = 1;
  _swift_willThrow();
  return param_1;
}

