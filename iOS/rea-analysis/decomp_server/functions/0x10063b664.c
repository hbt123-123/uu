// rea decompile_all
// name: FUN_10063b664
// address: 0x10063b664
// body: available
// range: 0x10063b664-0x10063b7cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063b664(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = *(undefined **)(param_1 + 0xa0);
  if (puVar8 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar7 = 0;
    FUN_10063c938(0);
    _swift_allocObject();
    FUN_10063c044(PTR___swiftEmptyArrayStorage_100995ea0,uVar9,uVar4,0x10,uVar7);
    return;
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  uVar2 = *(ulong *)(param_1 + 0xb8);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  puVar6 = puVar8;
  if ((uVar2 & 1) == 0) {
    _swift_unknownObjectRetain(puVar8);
  }
  else {
    uVar4 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar5 = puVar8;
    _swift_unknownObjectRetain_n(puVar8,3);
    _swift_dynamicCastClass();
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar8);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar10 = *(long *)(puVar5 + 0x10);
    _swift_release();
    if (SBORROW8(uVar2 >> 1,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10063b7c8);
      (*pcVar3)();
    }
    if (lVar10 == (uVar2 >> 1) - lVar1) {
      _swift_dynamicCastClass(puVar8,uVar4);
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar8);
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_10063b768;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(puVar8,uVar9,lVar1,uVar2);
LAB_10063b768:
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar7 = 0;
  FUN_10063c938(0);
  _swift_allocObject();
  FUN_10063c044(puVar6,uVar9,uVar4,0x10,uVar7);
  _swift_unknownObjectRelease(puVar8);
  return;
}

