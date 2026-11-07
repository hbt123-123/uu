// rea decompile_all
// name: FUN_1000b3814
// address: 0x1000b3814
// body: available
// range: 0x1000b3814-0x1000b38cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b3814(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  uint uVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    puVar6 = (undefined8 *)(param_3 + 0x30);
    do {
      lVar4 = lVar4 + -1;
      uVar1 = puVar6[-1];
      uVar2 = *puVar6;
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      uVar3 = 0;
      (*param_1)();
      uVar5 = (uint)uVar3;
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      if (unaff_x21 != 0) break;
      puVar6 = puVar6 + 3;
    } while ((uVar3 & 1) == 0 && lVar4 != 0);
  }
  return uVar5 & 1;
}

