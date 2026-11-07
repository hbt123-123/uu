// rea decompile_all
// name: FUN_10054dc38
// address: 0x10054dc38
// body: available
// range: 0x10054dc38-0x10054dcff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054dc38(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  
  uVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar11 = *unaff_x20;
  uVar9 = uVar11;
  if ((uVar8 & 1) == 0) {
    uVar7 = *(undefined1 *)(uVar11 + 0x10);
    uVar1 = *(undefined8 *)(uVar11 + 0x18);
    uVar4 = *(undefined8 *)(uVar11 + 0x20);
    uVar2 = *(undefined8 *)(uVar11 + 0x28);
    uVar5 = *(undefined8 *)(uVar11 + 0x30);
    uVar3 = *(undefined8 *)(uVar11 + 0x38);
    uVar6 = *(undefined8 *)(uVar11 + 0x40);
    uVar10 = *(undefined8 *)(uVar11 + 0x48);
    uVar9 = 0;
    FUN_10054df34();
    _swift_allocObject();
    *(undefined1 *)(uVar9 + 0x10) = uVar7;
    *(undefined8 *)(uVar9 + 0x18) = uVar1;
    *(undefined8 *)(uVar9 + 0x20) = uVar4;
    *(undefined8 *)(uVar9 + 0x28) = uVar2;
    *(undefined8 *)(uVar9 + 0x30) = uVar5;
    *(undefined8 *)(uVar9 + 0x38) = uVar3;
    *(undefined8 *)(uVar9 + 0x40) = uVar6;
    *(undefined8 *)(uVar9 + 0x48) = uVar10;
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_release(uVar11);
    *unaff_x20 = uVar9;
  }
  *(undefined1 *)(uVar9 + 0x10) = param_1;
  return;
}

