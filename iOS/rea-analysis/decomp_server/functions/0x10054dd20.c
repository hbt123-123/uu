// rea decompile_all
// name: FUN_10054dd20
// address: 0x10054dd20
// body: available
// range: 0x10054dd20-0x10054ddfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054dd20(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar12 = (ulong *)*param_1;
  uVar7 = *(undefined1 *)(param_1 + 1);
  if ((param_2 & 1) == 0) {
    uVar9 = *puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar13 = *puVar12;
    uVar10 = uVar13;
    if ((uVar9 & 1) == 0) {
      uVar8 = *(undefined1 *)(uVar13 + 0x10);
      uVar1 = *(undefined8 *)(uVar13 + 0x18);
      uVar4 = *(undefined8 *)(uVar13 + 0x20);
      uVar2 = *(undefined8 *)(uVar13 + 0x28);
      uVar5 = *(undefined8 *)(uVar13 + 0x30);
      uVar3 = *(undefined8 *)(uVar13 + 0x38);
      uVar6 = *(undefined8 *)(uVar13 + 0x40);
      uVar11 = *(undefined8 *)(uVar13 + 0x48);
      uVar10 = 0;
      FUN_10054df34();
      _swift_allocObject();
      *(undefined1 *)(uVar10 + 0x10) = uVar8;
      *(undefined8 *)(uVar10 + 0x18) = uVar1;
      *(undefined8 *)(uVar10 + 0x20) = uVar4;
      *(undefined8 *)(uVar10 + 0x28) = uVar2;
      *(undefined8 *)(uVar10 + 0x30) = uVar5;
      *(undefined8 *)(uVar10 + 0x38) = uVar3;
      *(undefined8 *)(uVar10 + 0x40) = uVar6;
      *(undefined8 *)(uVar10 + 0x48) = uVar11;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_release(uVar13);
      *puVar12 = uVar10;
    }
    *(undefined1 *)(uVar10 + 0x10) = uVar7;
  }
  else {
    FUN_10054dc38(uVar7);
  }
  return;
}

