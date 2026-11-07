// rea decompile_all
// name: FUN_10001ed58
// address: 0x10001ed58
// body: available
// range: 0x10001ed58-0x10001ee23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10001ed58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  _swift_beginAccess(unaff_x20 + 0x110,puVar3,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x110);
  if ((*(long *)(lVar5 + 0x10) == 0) ||
     (lVar1 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar3 & 1) == 0)) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + lVar1 * 8) + 1;
  }
  _swift_endAccess(auStack_48);
  _swift_beginAccess(unaff_x20 + 0x110,auStack_48,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = 0x8000000000000000;
  FUN_1000610f8(lVar5,param_1,uVar2);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar4;
  _swift_endAccess(auStack_48);
  return lVar5;
}

