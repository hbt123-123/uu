// rea decompile_all
// name: FUN_10062bb7c
// address: 0x10062bb7c
// body: available
// range: 0x10062bb7c-0x10062bbff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10062bb7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  lVar4 = lVar1;
  uVar5 = uVar2;
  if (lVar1 == 0) {
    FUN_10062d97c();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long *)(unaff_x20 + 0x80) = param_1;
    *(undefined8 *)(unaff_x20 + 0x88) = param_2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    FUN_100075168(uVar5,uVar3);
    lVar4 = param_1;
    uVar5 = param_2;
  }
  FUN_1000750c8(lVar1,uVar2);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}

