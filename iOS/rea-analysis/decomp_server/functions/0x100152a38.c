// rea decompile_all
// name: FUN_100152a38
// address: 0x100152a38
// body: available
// range: 0x100152a38-0x100152adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100152a38(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  uint uVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_3 + 0x28);
    do {
      lVar3 = lVar3 + -1;
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      uVar2 = 0;
      (*param_1)();
      uVar4 = (uint)uVar2;
      _swift_bridgeObjectRelease(uVar1);
      if (unaff_x21 != 0) break;
      puVar5 = puVar5 + 2;
    } while ((uVar2 & 1) == 0 && lVar3 != 0);
  }
  return uVar4 & 1;
}

