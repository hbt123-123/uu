// rea decompile_all
// name: FUN_10067ebd0
// address: 0x10067ebd0
// body: available
// range: 0x10067ebd0-0x10067ed5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10067ebd0(byte param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_220 [80];
  undefined1 auStack_1d0 [80];
  undefined1 auStack_180 [80];
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  puVar9 = &DAT_100ab9e70;
  FUN_100004bb4(&DAT_100ab9e70,&DAT_10084d510);
  puVar1 = (undefined1 *)0xd00000000000001e;
  pcVar4 = "JSON is invalid.";
  puVar5 = auStack_130;
  if (param_1 != 4) {
    puVar1 = &DAT_d000000000000010;
    pcVar4 = " no reference loop.";
    puVar5 = auStack_e0;
  }
  puVar3 = (undefined1 *)0xd00000000000003e;
  pcVar6 = "Dictionary key does not exist.";
  puVar12 = auStack_180;
  if (param_1 != 3) {
    puVar3 = puVar1;
    pcVar6 = pcVar4;
    puVar12 = puVar5;
  }
  puVar1 = (undefined1 *)0xd00000000000001d;
  pcVar4 = "s differ in type on top level.";
  puVar5 = auStack_1d0;
  if (param_1 != 1) {
    puVar1 = (undefined1 *)0xd000000000000053;
    pcVar4 = "com.swiftyjson.SwiftyJSON";
    puVar5 = auStack_90;
  }
  puVar2 = (undefined1 *)0xd00000000000001a;
  pcVar7 = "Array Index is out of bounds.";
  puVar8 = auStack_220;
  if (param_1 != 0) {
    puVar2 = puVar1;
    pcVar7 = pcVar4;
    puVar8 = puVar5;
  }
  if (param_1 < 3) {
    puVar3 = puVar2;
    pcVar6 = pcVar7;
    puVar12 = puVar8;
  }
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  uVar10 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar9 + 0x20) = uVar10;
  *(undefined **)(puVar9 + 0x48) = PTR___sSSN_1009957f8;
  *(undefined1 **)(puVar9 + 0x28) = puVar12;
  *(undefined1 **)(puVar9 + 0x30) = puVar3;
  *(ulong *)(puVar9 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  puVar11 = puVar9;
  FUN_10068dedc(puVar9);
  _swift_setDeallocating(puVar9);
  FUN_100040bb4(puVar9 + 0x20,&DAT_100ab9e78,&DAT_10084d518);
  return puVar11;
}

